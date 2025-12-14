#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -2646798048075080111LL;
int var_3 = -1219876544;
unsigned int var_4 = 117861114U;
unsigned short var_5 = (unsigned short)48725;
unsigned int var_6 = 2939275803U;
unsigned long long int var_7 = 13278814065907642058ULL;
unsigned long long int var_9 = 12659257613455823715ULL;
int zero = 0;
_Bool var_11 = (_Bool)1;
long long int var_12 = -1192078538382726080LL;
_Bool var_13 = (_Bool)0;
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
