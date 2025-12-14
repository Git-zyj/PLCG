#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 11923622115305501910ULL;
long long int var_1 = 9085504522003764178LL;
_Bool var_2 = (_Bool)0;
short var_3 = (short)-23034;
_Bool var_4 = (_Bool)1;
unsigned long long int var_5 = 5643227839062361352ULL;
long long int var_6 = -329178781471732131LL;
long long int var_8 = 7161156730340476385LL;
short var_9 = (short)-18745;
int zero = 0;
long long int var_10 = 6809493982399426596LL;
int var_11 = -1554373670;
unsigned long long int var_12 = 9497986982453552930ULL;
unsigned long long int var_13 = 6051221082333337935ULL;
unsigned long long int var_14 = 12833332593130728766ULL;
unsigned long long int var_15 = 2389788252896409874ULL;
signed char var_16 = (signed char)81;
long long int var_17 = -3554139545624809128LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
