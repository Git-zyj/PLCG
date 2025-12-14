#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)14239;
unsigned int var_3 = 323126543U;
unsigned short var_4 = (unsigned short)58692;
long long int var_6 = 4892926832335443725LL;
long long int var_7 = 2751059932203321941LL;
int var_9 = 519537480;
short var_14 = (short)-28523;
int zero = 0;
unsigned short var_19 = (unsigned short)15951;
unsigned int var_20 = 4067501872U;
unsigned short var_21 = (unsigned short)14035;
void init() {
}

void checksum() {
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
