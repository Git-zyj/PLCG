#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 13000138239868641655ULL;
signed char var_2 = (signed char)-44;
unsigned short var_4 = (unsigned short)49301;
short var_12 = (short)-10087;
int zero = 0;
unsigned int var_20 = 258210419U;
long long int var_21 = -8663236274408321647LL;
unsigned long long int var_22 = 3267209190972166342ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
