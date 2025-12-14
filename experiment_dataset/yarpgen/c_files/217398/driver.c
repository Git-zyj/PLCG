#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_5 = (signed char)70;
_Bool var_6 = (_Bool)1;
unsigned long long int var_13 = 3462875792672962665ULL;
int zero = 0;
signed char var_16 = (signed char)60;
unsigned long long int var_17 = 2911025782216338090ULL;
unsigned char var_18 = (unsigned char)46;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
