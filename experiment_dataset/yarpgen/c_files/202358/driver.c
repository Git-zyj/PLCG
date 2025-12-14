#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -918598135;
long long int var_1 = -5452734718228687017LL;
int var_2 = -530334238;
unsigned int var_3 = 2191461227U;
unsigned int var_6 = 626290282U;
unsigned int var_9 = 2391734548U;
unsigned long long int var_11 = 16329665849831995605ULL;
unsigned long long int var_12 = 17771772424119631271ULL;
int zero = 0;
unsigned char var_13 = (unsigned char)55;
long long int var_14 = 1501718054410889123LL;
unsigned int var_15 = 152919295U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
