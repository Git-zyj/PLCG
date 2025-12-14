#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
_Bool var_3 = (_Bool)1;
unsigned short var_4 = (unsigned short)38989;
unsigned int var_6 = 1284221847U;
unsigned short var_15 = (unsigned short)58954;
int zero = 0;
short var_18 = (short)-28060;
short var_19 = (short)-27945;
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
