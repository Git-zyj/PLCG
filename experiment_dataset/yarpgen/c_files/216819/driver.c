#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1832173518;
signed char var_1 = (signed char)-126;
short var_2 = (short)-9898;
unsigned char var_4 = (unsigned char)116;
long long int var_5 = -1602034713987877529LL;
unsigned int var_9 = 2620536212U;
int var_10 = 1003491949;
int zero = 0;
int var_12 = -642658051;
short var_13 = (short)-16479;
unsigned int var_14 = 3114490904U;
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
