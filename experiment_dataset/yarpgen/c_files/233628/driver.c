#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 1249476340U;
unsigned long long int var_4 = 7533066330943765228ULL;
long long int var_6 = 2372736178544656894LL;
int var_9 = 478455318;
long long int var_10 = -6749229704778334125LL;
unsigned short var_13 = (unsigned short)65014;
int zero = 0;
int var_15 = 1143545710;
_Bool var_16 = (_Bool)1;
signed char var_17 = (signed char)-77;
long long int var_18 = 1291160629202771054LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
