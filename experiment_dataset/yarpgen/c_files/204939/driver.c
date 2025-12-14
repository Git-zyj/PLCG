#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)159;
long long int var_8 = 3085173450945759327LL;
unsigned int var_9 = 2122925627U;
unsigned short var_16 = (unsigned short)42929;
int zero = 0;
unsigned int var_18 = 1015559196U;
unsigned short var_19 = (unsigned short)58655;
long long int var_20 = 9074409506238625527LL;
unsigned int var_21 = 562052999U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
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
