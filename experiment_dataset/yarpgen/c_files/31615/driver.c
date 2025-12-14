#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -2172538777561928727LL;
long long int var_7 = -4265084387550283040LL;
signed char var_8 = (signed char)-46;
int zero = 0;
_Bool var_18 = (_Bool)1;
signed char var_19 = (signed char)-63;
long long int var_20 = -622797837771492170LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
