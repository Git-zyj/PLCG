#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1542626758;
long long int var_2 = -2965982063520735060LL;
unsigned short var_4 = (unsigned short)13708;
int var_5 = 219018341;
long long int var_8 = 3609478262670724017LL;
signed char var_9 = (signed char)103;
int var_11 = 927126136;
unsigned int var_12 = 2578801417U;
unsigned int var_13 = 1061393543U;
signed char var_15 = (signed char)77;
int zero = 0;
int var_17 = -1160192191;
signed char var_18 = (signed char)-50;
int var_19 = 1244270265;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
