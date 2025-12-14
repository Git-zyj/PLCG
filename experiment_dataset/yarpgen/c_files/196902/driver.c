#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_6 = 80016541623463833LL;
unsigned char var_8 = (unsigned char)234;
unsigned long long int var_9 = 6372655157923966642ULL;
unsigned char var_13 = (unsigned char)11;
int var_15 = 1075267340;
signed char var_17 = (signed char)108;
int zero = 0;
unsigned long long int var_19 = 332630007531981888ULL;
unsigned char var_20 = (unsigned char)119;
_Bool var_21 = (_Bool)0;
unsigned short var_22 = (unsigned short)11665;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
