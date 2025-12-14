#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 3616438188U;
unsigned short var_6 = (unsigned short)40583;
long long int var_16 = -3980779510985025941LL;
int var_19 = -2072653662;
int zero = 0;
int var_20 = -1928221832;
unsigned char var_21 = (unsigned char)115;
long long int var_22 = -1001403435477818079LL;
unsigned short var_23 = (unsigned short)21963;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
