#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)236;
signed char var_2 = (signed char)94;
long long int var_4 = 3282961946125557779LL;
long long int var_11 = 8453424235974298490LL;
unsigned char var_17 = (unsigned char)231;
int zero = 0;
_Bool var_18 = (_Bool)1;
unsigned int var_19 = 3112075646U;
unsigned long long int var_20 = 134045306578446626ULL;
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
