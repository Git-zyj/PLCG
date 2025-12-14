#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-39;
int var_7 = 1457646032;
signed char var_8 = (signed char)33;
long long int var_9 = 4466576961820245812LL;
unsigned int var_16 = 955259899U;
int var_18 = -281108217;
_Bool var_19 = (_Bool)0;
int zero = 0;
short var_20 = (short)32462;
unsigned long long int var_21 = 16628143402986791592ULL;
_Bool var_22 = (_Bool)0;
void init() {
}

void checksum() {
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
