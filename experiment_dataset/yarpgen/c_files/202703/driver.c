#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 6038046009733955019ULL;
int var_4 = -1700591766;
signed char var_5 = (signed char)-6;
signed char var_6 = (signed char)82;
signed char var_9 = (signed char)18;
unsigned int var_10 = 334001984U;
signed char var_13 = (signed char)47;
signed char var_14 = (signed char)78;
int zero = 0;
unsigned long long int var_16 = 17555009069372619522ULL;
unsigned short var_17 = (unsigned short)33098;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
