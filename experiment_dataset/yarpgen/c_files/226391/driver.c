#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 8883874859212358700LL;
short var_5 = (short)-15011;
signed char var_7 = (signed char)81;
int zero = 0;
long long int var_11 = -8061289530176121704LL;
unsigned int var_12 = 91670807U;
unsigned long long int var_13 = 16674835815892128822ULL;
unsigned short var_14 = (unsigned short)5164;
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
