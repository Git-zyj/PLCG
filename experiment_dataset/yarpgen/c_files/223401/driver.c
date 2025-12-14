#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-61;
_Bool var_1 = (_Bool)1;
unsigned int var_2 = 3060970732U;
short var_4 = (short)-21004;
_Bool var_5 = (_Bool)0;
unsigned long long int var_7 = 10508591639280806030ULL;
unsigned char var_8 = (unsigned char)27;
_Bool var_9 = (_Bool)0;
int zero = 0;
long long int var_11 = 5768368177145502179LL;
int var_12 = -1232272715;
signed char var_13 = (signed char)-10;
unsigned char var_14 = (unsigned char)17;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
