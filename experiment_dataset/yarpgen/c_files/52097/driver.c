#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_7 = 8469114679215798879LL;
unsigned char var_10 = (unsigned char)6;
int var_14 = 348944095;
unsigned int var_15 = 1088588956U;
int zero = 0;
unsigned long long int var_18 = 3672492125815731750ULL;
_Bool var_19 = (_Bool)1;
short var_20 = (short)-19357;
unsigned char var_21 = (unsigned char)9;
long long int var_22 = -6310716566389600765LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
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
