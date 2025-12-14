#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)518;
_Bool var_2 = (_Bool)1;
signed char var_4 = (signed char)-49;
_Bool var_7 = (_Bool)1;
unsigned long long int var_9 = 16825841902230735952ULL;
int zero = 0;
int var_12 = -1338923580;
long long int var_13 = -5417307758769285537LL;
short var_14 = (short)-12012;
unsigned long long int var_15 = 661948279628134370ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
