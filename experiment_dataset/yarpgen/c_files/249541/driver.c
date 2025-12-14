#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = 5277506828727075242LL;
_Bool var_10 = (_Bool)1;
short var_12 = (short)-27149;
short var_13 = (short)23566;
int zero = 0;
short var_19 = (short)-13372;
unsigned int var_20 = 3741721409U;
short var_21 = (short)-25377;
unsigned short var_22 = (unsigned short)12117;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
