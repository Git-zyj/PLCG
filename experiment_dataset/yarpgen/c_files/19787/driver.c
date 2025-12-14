#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 591902877785838459LL;
unsigned int var_3 = 567742998U;
short var_7 = (short)-4698;
signed char var_11 = (signed char)-60;
int zero = 0;
unsigned int var_15 = 1859439767U;
signed char var_16 = (signed char)-113;
long long int var_17 = -7669794432951684009LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
