#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 766786765U;
long long int var_6 = -7471066379477820307LL;
unsigned int var_8 = 3823365602U;
int var_9 = -1332644738;
int zero = 0;
unsigned char var_11 = (unsigned char)80;
int var_12 = 242787191;
unsigned long long int var_13 = 17249899397962277855ULL;
_Bool var_14 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
