#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)34945;
unsigned long long int var_3 = 13280991490952500159ULL;
unsigned long long int var_8 = 18374725356532846478ULL;
signed char var_9 = (signed char)62;
unsigned short var_13 = (unsigned short)3501;
signed char var_14 = (signed char)84;
unsigned long long int var_18 = 11384120950064081348ULL;
int zero = 0;
unsigned long long int var_20 = 12432143293248565485ULL;
unsigned short var_21 = (unsigned short)16003;
signed char var_22 = (signed char)120;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
