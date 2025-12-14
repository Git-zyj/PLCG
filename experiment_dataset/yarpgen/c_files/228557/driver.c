#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 12838567075249683529ULL;
unsigned long long int var_11 = 172665375034227391ULL;
signed char var_12 = (signed char)-104;
signed char var_13 = (signed char)-6;
int zero = 0;
unsigned long long int var_17 = 6972880922932198886ULL;
unsigned long long int var_18 = 2046809017468565671ULL;
_Bool var_19 = (_Bool)0;
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
