#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_10 = 9568816125813507029ULL;
unsigned char var_11 = (unsigned char)93;
signed char var_13 = (signed char)-58;
int zero = 0;
long long int var_15 = -3018473135795372551LL;
short var_16 = (short)-16245;
unsigned short var_17 = (unsigned short)38240;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
