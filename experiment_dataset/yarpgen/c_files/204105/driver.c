#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -4060377891980422265LL;
unsigned int var_6 = 1669484268U;
long long int var_7 = -5602291060077884555LL;
unsigned long long int var_8 = 1865988609746176846ULL;
unsigned long long int var_9 = 9613551380979426623ULL;
long long int var_10 = 233987631100034541LL;
unsigned char var_11 = (unsigned char)225;
int zero = 0;
unsigned short var_19 = (unsigned short)63180;
unsigned long long int var_20 = 17943022145740673222ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
