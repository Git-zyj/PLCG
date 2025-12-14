#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 13325720997229054623ULL;
unsigned char var_4 = (unsigned char)29;
unsigned long long int var_8 = 786884440697922598ULL;
int var_9 = 935121624;
short var_10 = (short)-10645;
unsigned char var_12 = (unsigned char)240;
unsigned long long int var_13 = 9643530800872984356ULL;
long long int var_14 = 9181538640714899134LL;
unsigned int var_15 = 3744598708U;
int zero = 0;
_Bool var_16 = (_Bool)1;
unsigned int var_17 = 1675140501U;
unsigned char var_18 = (unsigned char)198;
unsigned int var_19 = 3845856093U;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
