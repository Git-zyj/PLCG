#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 230782609U;
signed char var_5 = (signed char)-53;
long long int var_6 = -6720043477554552155LL;
_Bool var_8 = (_Bool)1;
int var_14 = -344865470;
unsigned int var_18 = 712630387U;
int zero = 0;
unsigned long long int var_19 = 5259337992219695278ULL;
signed char var_20 = (signed char)43;
unsigned int var_21 = 1520619076U;
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
