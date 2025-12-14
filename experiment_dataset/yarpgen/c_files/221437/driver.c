#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 4067153675836956144LL;
int var_3 = 577783679;
int var_10 = -1857441784;
int var_15 = -1367389130;
int zero = 0;
long long int var_17 = 4421033725915122543LL;
signed char var_18 = (signed char)88;
_Bool var_19 = (_Bool)0;
unsigned int var_20 = 937626115U;
unsigned short var_21 = (unsigned short)9215;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
