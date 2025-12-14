#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)153;
long long int var_3 = -2379900489381672966LL;
short var_5 = (short)9461;
unsigned int var_7 = 274438508U;
long long int var_8 = 4465101574634216664LL;
short var_9 = (short)-11042;
unsigned int var_11 = 2200622020U;
unsigned int var_12 = 2598254916U;
int zero = 0;
unsigned int var_13 = 1720377451U;
signed char var_14 = (signed char)-15;
unsigned int var_15 = 4241452215U;
short var_16 = (short)-24706;
unsigned int var_17 = 2364990107U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
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
