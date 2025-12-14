#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -6366461556716849939LL;
long long int var_4 = -3560713533314579172LL;
long long int var_6 = 43852157502167098LL;
long long int var_7 = 6108699697507809890LL;
long long int var_8 = -46405189584468351LL;
long long int var_9 = -5330370084076440475LL;
long long int var_11 = 4162025176342026544LL;
long long int var_13 = 6403777003371065337LL;
long long int var_15 = -5691086075405410174LL;
int zero = 0;
long long int var_16 = 7805684607181094843LL;
long long int var_17 = -2750988770214419608LL;
long long int var_18 = -4220491188647058707LL;
long long int var_19 = 615658221912355266LL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
