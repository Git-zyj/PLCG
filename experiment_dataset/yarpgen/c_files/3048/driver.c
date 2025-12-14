#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2567742016U;
unsigned int var_2 = 4066907024U;
short var_5 = (short)14333;
unsigned long long int var_6 = 17966974842936298424ULL;
long long int var_10 = -892023905182296083LL;
int zero = 0;
int var_19 = 1028103236;
unsigned long long int var_20 = 1313121693826875395ULL;
long long int var_21 = -6038340902806170540LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
