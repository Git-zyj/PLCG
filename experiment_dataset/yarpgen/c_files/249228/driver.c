#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3942190054U;
signed char var_1 = (signed char)-21;
unsigned char var_2 = (unsigned char)239;
_Bool var_3 = (_Bool)0;
long long int var_4 = -5817252320903134242LL;
unsigned int var_5 = 2561256755U;
signed char var_8 = (signed char)-49;
unsigned short var_9 = (unsigned short)18550;
unsigned char var_10 = (unsigned char)18;
unsigned char var_11 = (unsigned char)40;
signed char var_12 = (signed char)-2;
int zero = 0;
unsigned short var_13 = (unsigned short)60703;
unsigned short var_14 = (unsigned short)56630;
signed char var_15 = (signed char)116;
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
