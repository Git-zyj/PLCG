#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-10150;
long long int var_4 = 6557125613699900211LL;
signed char var_5 = (signed char)90;
unsigned long long int var_6 = 8643699620142826924ULL;
unsigned char var_7 = (unsigned char)14;
unsigned char var_8 = (unsigned char)13;
long long int var_9 = 7916590809865796363LL;
int zero = 0;
unsigned long long int var_11 = 11307615622795917579ULL;
_Bool var_12 = (_Bool)1;
unsigned int var_13 = 1966893949U;
unsigned long long int var_14 = 4712312478176412772ULL;
unsigned short var_15 = (unsigned short)24232;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
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
