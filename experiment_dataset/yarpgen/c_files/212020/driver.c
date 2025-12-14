#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)138;
int var_2 = -752671762;
unsigned char var_4 = (unsigned char)148;
short var_6 = (short)7733;
short var_8 = (short)-1201;
unsigned int var_10 = 3871583893U;
int zero = 0;
signed char var_15 = (signed char)-37;
unsigned long long int var_16 = 3689520126257540932ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
