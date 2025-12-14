#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -5760459894993622028LL;
unsigned short var_2 = (unsigned short)19049;
long long int var_5 = -5193074280134992832LL;
int var_7 = 119973458;
short var_8 = (short)-27686;
unsigned short var_10 = (unsigned short)33178;
int zero = 0;
signed char var_14 = (signed char)-26;
unsigned int var_15 = 809352951U;
void init() {
}

void checksum() {
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
