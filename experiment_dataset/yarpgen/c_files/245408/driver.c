#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)1;
unsigned int var_1 = 3148526859U;
long long int var_2 = -5553837981722768092LL;
int var_7 = -1228036457;
int zero = 0;
short var_14 = (short)31653;
long long int var_15 = 6192743586434596638LL;
int var_16 = -2140759749;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
