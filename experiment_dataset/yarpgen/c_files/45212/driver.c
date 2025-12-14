#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 4150404114281469744LL;
_Bool var_6 = (_Bool)1;
int var_7 = -1961197077;
signed char var_8 = (signed char)-127;
int var_10 = -991489853;
long long int var_11 = -5174482652653018827LL;
int zero = 0;
signed char var_13 = (signed char)13;
_Bool var_14 = (_Bool)0;
_Bool var_15 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
