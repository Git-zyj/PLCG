#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -414498627;
unsigned long long int var_2 = 3961962450843413426ULL;
unsigned short var_3 = (unsigned short)65117;
unsigned int var_5 = 3228081616U;
unsigned int var_7 = 2891188966U;
short var_8 = (short)27205;
signed char var_9 = (signed char)47;
int zero = 0;
unsigned int var_10 = 656595936U;
unsigned int var_11 = 1708905023U;
unsigned int var_12 = 881242814U;
unsigned int var_13 = 397906918U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
