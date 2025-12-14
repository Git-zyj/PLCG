#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 366449948U;
unsigned int var_1 = 1034502550U;
unsigned int var_2 = 2863125041U;
unsigned int var_3 = 3154071308U;
_Bool var_9 = (_Bool)1;
unsigned char var_12 = (unsigned char)82;
unsigned char var_13 = (unsigned char)170;
long long int var_14 = 6717386858983161167LL;
int zero = 0;
unsigned long long int var_15 = 8258556439218795057ULL;
unsigned int var_16 = 3714379058U;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
