#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)21165;
int var_5 = 725504491;
unsigned short var_9 = (unsigned short)19297;
unsigned char var_11 = (unsigned char)142;
unsigned long long int var_13 = 5087554905320301295ULL;
int zero = 0;
long long int var_20 = 8249363860834178081LL;
unsigned int var_21 = 1466293823U;
int var_22 = 2076787430;
unsigned short var_23 = (unsigned short)62656;
long long int var_24 = 8683710082686837284LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
