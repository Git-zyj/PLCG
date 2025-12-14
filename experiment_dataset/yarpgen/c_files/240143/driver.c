#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -4436660442644225807LL;
unsigned short var_7 = (unsigned short)42206;
_Bool var_8 = (_Bool)1;
unsigned long long int var_16 = 1232246425459442385ULL;
unsigned long long int var_19 = 1484808099121757020ULL;
int zero = 0;
unsigned short var_20 = (unsigned short)13561;
long long int var_21 = -7338944309244159283LL;
long long int var_22 = -2006764371452076526LL;
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
