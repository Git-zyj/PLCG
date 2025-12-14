#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)197;
short var_7 = (short)20095;
long long int var_10 = 3615049140256135571LL;
int zero = 0;
unsigned char var_11 = (unsigned char)98;
unsigned long long int var_12 = 11123456122914938140ULL;
long long int var_13 = -4044859456572554687LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
