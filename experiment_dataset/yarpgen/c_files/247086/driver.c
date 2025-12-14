#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_9 = 983928492;
long long int var_11 = 3992826088257293717LL;
_Bool var_13 = (_Bool)0;
_Bool var_15 = (_Bool)0;
int var_17 = 1760700206;
unsigned int var_19 = 2047977055U;
int zero = 0;
long long int var_20 = 3798248143627833464LL;
signed char var_21 = (signed char)-5;
signed char var_22 = (signed char)-2;
unsigned int var_23 = 467899891U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
