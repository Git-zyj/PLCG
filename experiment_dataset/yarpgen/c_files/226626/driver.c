#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)82;
unsigned long long int var_3 = 8727080817668923182ULL;
unsigned short var_4 = (unsigned short)26280;
unsigned char var_6 = (unsigned char)8;
unsigned int var_10 = 3697473862U;
unsigned char var_11 = (unsigned char)255;
unsigned short var_13 = (unsigned short)36747;
int zero = 0;
long long int var_15 = -534452091725187895LL;
short var_16 = (short)4362;
signed char var_17 = (signed char)-80;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
