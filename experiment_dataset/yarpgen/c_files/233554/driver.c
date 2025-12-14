#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 4171720765U;
int var_3 = -609224457;
int var_4 = -153700497;
unsigned long long int var_5 = 16388822596472096657ULL;
long long int var_6 = -4811206366672679766LL;
int var_9 = -633403462;
int zero = 0;
int var_10 = -1204817686;
unsigned short var_11 = (unsigned short)2581;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
