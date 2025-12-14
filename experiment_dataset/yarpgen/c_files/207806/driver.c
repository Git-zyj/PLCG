#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 11717182618165819627ULL;
unsigned int var_1 = 2659644759U;
long long int var_5 = -6377346755739492499LL;
unsigned char var_6 = (unsigned char)108;
short var_7 = (short)-17371;
unsigned short var_8 = (unsigned short)59043;
unsigned long long int var_9 = 10941050601094264377ULL;
unsigned char var_10 = (unsigned char)98;
int zero = 0;
unsigned char var_11 = (unsigned char)157;
int var_12 = -1476150198;
short var_13 = (short)-24430;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
