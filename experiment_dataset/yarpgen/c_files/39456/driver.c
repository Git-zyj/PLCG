#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)89;
signed char var_4 = (signed char)19;
unsigned int var_6 = 2311359985U;
signed char var_8 = (signed char)124;
unsigned char var_9 = (unsigned char)181;
long long int var_15 = -919972557326454662LL;
unsigned char var_16 = (unsigned char)17;
int zero = 0;
unsigned short var_20 = (unsigned short)26304;
unsigned char var_21 = (unsigned char)137;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
