#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3113350696U;
short var_3 = (short)6880;
unsigned char var_4 = (unsigned char)183;
long long int var_5 = 5075749946982481954LL;
short var_6 = (short)-10269;
unsigned char var_8 = (unsigned char)77;
unsigned short var_10 = (unsigned short)27474;
int zero = 0;
unsigned int var_12 = 2637996269U;
signed char var_13 = (signed char)97;
signed char var_14 = (signed char)-106;
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
