#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 3149077064614877400ULL;
unsigned int var_6 = 3525047892U;
signed char var_14 = (signed char)-104;
int zero = 0;
unsigned long long int var_18 = 12993323525798685201ULL;
unsigned int var_19 = 190875939U;
void init() {
}

void checksum() {
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
