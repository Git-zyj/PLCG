#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -718760487;
unsigned char var_1 = (unsigned char)181;
unsigned char var_5 = (unsigned char)67;
signed char var_8 = (signed char)33;
unsigned int var_9 = 1104131358U;
unsigned long long int var_10 = 10298912175784197404ULL;
_Bool var_11 = (_Bool)1;
_Bool var_12 = (_Bool)1;
unsigned char var_14 = (unsigned char)155;
unsigned char var_18 = (unsigned char)9;
int zero = 0;
_Bool var_19 = (_Bool)1;
signed char var_20 = (signed char)-50;
int var_21 = -304615825;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
