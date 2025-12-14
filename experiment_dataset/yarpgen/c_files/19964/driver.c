#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)93;
int var_2 = -700070391;
unsigned char var_4 = (unsigned char)18;
unsigned char var_5 = (unsigned char)120;
signed char var_6 = (signed char)-113;
int var_7 = 727149055;
unsigned char var_8 = (unsigned char)247;
int var_11 = -1234326619;
int zero = 0;
unsigned long long int var_13 = 4774893180980204683ULL;
unsigned int var_14 = 3731901447U;
void init() {
}

void checksum() {
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
