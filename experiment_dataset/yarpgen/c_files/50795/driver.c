#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)147;
unsigned short var_1 = (unsigned short)16526;
unsigned short var_2 = (unsigned short)33072;
long long int var_3 = 1306099949023686932LL;
unsigned short var_6 = (unsigned short)27826;
unsigned char var_7 = (unsigned char)140;
unsigned long long int var_8 = 8138528382374099899ULL;
unsigned long long int var_9 = 17336958043018320710ULL;
signed char var_10 = (signed char)108;
int zero = 0;
signed char var_12 = (signed char)87;
unsigned short var_13 = (unsigned short)39252;
unsigned int var_14 = 4146960670U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
