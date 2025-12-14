#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)8;
unsigned char var_4 = (unsigned char)219;
unsigned long long int var_5 = 6366996154370558426ULL;
long long int var_6 = -938035299912920878LL;
int var_8 = 1866550144;
unsigned int var_9 = 2273531081U;
int var_11 = -964366685;
unsigned long long int var_15 = 5279654090053929125ULL;
unsigned short var_17 = (unsigned short)60797;
int zero = 0;
signed char var_18 = (signed char)37;
unsigned long long int var_19 = 7705019885555159199ULL;
_Bool var_20 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
