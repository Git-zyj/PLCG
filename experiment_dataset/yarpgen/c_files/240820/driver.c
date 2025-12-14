#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 5726631585508102559LL;
long long int var_3 = 3200813884483356544LL;
int var_4 = -1061603325;
unsigned int var_12 = 235369350U;
_Bool var_15 = (_Bool)0;
int var_17 = 962719389;
int zero = 0;
unsigned long long int var_19 = 16896483181037658233ULL;
_Bool var_20 = (_Bool)1;
long long int var_21 = -9036137879800077258LL;
void init() {
}

void checksum() {
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
