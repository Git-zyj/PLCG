#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)13746;
short var_1 = (short)14645;
long long int var_5 = -4555127263088300292LL;
unsigned char var_7 = (unsigned char)20;
short var_8 = (short)-10117;
long long int var_13 = -8081466392796477532LL;
_Bool var_14 = (_Bool)0;
int zero = 0;
unsigned long long int var_18 = 12902584148766714456ULL;
unsigned long long int var_19 = 5260072376748275280ULL;
unsigned short var_20 = (unsigned short)41227;
_Bool var_21 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
