#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 732589409;
signed char var_3 = (signed char)111;
unsigned short var_7 = (unsigned short)43367;
unsigned short var_8 = (unsigned short)34457;
int zero = 0;
int var_10 = -405063820;
long long int var_11 = 5570013013920188449LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
