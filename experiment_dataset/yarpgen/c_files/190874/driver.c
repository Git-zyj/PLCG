#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 1711175354088769929ULL;
_Bool var_6 = (_Bool)0;
unsigned int var_7 = 3486489324U;
unsigned long long int var_10 = 14424526119204056253ULL;
unsigned long long int var_13 = 10439139320899256417ULL;
int zero = 0;
long long int var_17 = -1995854267888367892LL;
unsigned int var_18 = 4070919648U;
unsigned int var_19 = 2807693516U;
void init() {
}

void checksum() {
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
