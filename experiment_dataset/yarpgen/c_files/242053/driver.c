#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 7958716992607192717ULL;
short var_4 = (short)-10415;
unsigned long long int var_9 = 3935144275081330294ULL;
int var_10 = 1432145895;
int zero = 0;
signed char var_15 = (signed char)-62;
short var_16 = (short)27773;
void init() {
}

void checksum() {
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
