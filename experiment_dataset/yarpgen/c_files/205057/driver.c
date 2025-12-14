#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-82;
unsigned int var_2 = 2797206452U;
signed char var_4 = (signed char)-61;
unsigned long long int var_5 = 17590014182985086112ULL;
long long int var_7 = 2638886106097368504LL;
unsigned char var_13 = (unsigned char)72;
unsigned char var_15 = (unsigned char)168;
int zero = 0;
short var_17 = (short)-16451;
long long int var_18 = -9116038942820599670LL;
void init() {
}

void checksum() {
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
