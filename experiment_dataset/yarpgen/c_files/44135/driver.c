#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -591134119;
long long int var_6 = 1234394019861319310LL;
signed char var_7 = (signed char)-9;
long long int var_11 = 500256466964211853LL;
unsigned long long int var_12 = 2800057839655370020ULL;
unsigned long long int var_14 = 18431154351195976671ULL;
int zero = 0;
unsigned long long int var_17 = 14606139923184722610ULL;
_Bool var_18 = (_Bool)0;
unsigned short var_19 = (unsigned short)64576;
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
