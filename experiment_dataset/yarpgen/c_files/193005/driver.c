#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 16717967895209078983ULL;
long long int var_2 = -4754231249265617355LL;
unsigned int var_7 = 3643379330U;
unsigned char var_8 = (unsigned char)217;
unsigned long long int var_10 = 12446410863432639866ULL;
int var_14 = 121389412;
unsigned long long int var_16 = 2855144454911047324ULL;
int zero = 0;
unsigned short var_20 = (unsigned short)48397;
unsigned short var_21 = (unsigned short)61207;
unsigned char var_22 = (unsigned char)102;
int var_23 = 1913407814;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
