#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)68;
unsigned int var_7 = 3669838050U;
_Bool var_8 = (_Bool)1;
unsigned char var_9 = (unsigned char)67;
_Bool var_11 = (_Bool)1;
int zero = 0;
unsigned long long int var_13 = 2493380320126538798ULL;
unsigned char var_14 = (unsigned char)228;
short var_15 = (short)-29685;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
