#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 345857536;
short var_3 = (short)-22160;
long long int var_8 = -1264488383816762179LL;
unsigned long long int var_10 = 9699515308862344007ULL;
int var_12 = 770859569;
unsigned int var_16 = 973007863U;
int zero = 0;
_Bool var_17 = (_Bool)0;
signed char var_18 = (signed char)-18;
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
