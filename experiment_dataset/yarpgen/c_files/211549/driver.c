#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 17567361317384876145ULL;
signed char var_1 = (signed char)-116;
unsigned long long int var_3 = 17711761317900128000ULL;
unsigned short var_10 = (unsigned short)46692;
unsigned short var_11 = (unsigned short)21690;
int var_13 = -846774569;
unsigned long long int var_14 = 12682363828721964029ULL;
unsigned char var_16 = (unsigned char)192;
int zero = 0;
unsigned short var_20 = (unsigned short)30104;
unsigned char var_21 = (unsigned char)222;
unsigned short var_22 = (unsigned short)9457;
unsigned short var_23 = (unsigned short)34350;
int var_24 = 2080441415;
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
