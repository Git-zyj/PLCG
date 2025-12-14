#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 3055505875363884452ULL;
signed char var_2 = (signed char)82;
unsigned long long int var_8 = 530125067332985316ULL;
unsigned short var_9 = (unsigned short)49354;
int zero = 0;
short var_10 = (short)14233;
int var_11 = -2029364815;
unsigned long long int var_12 = 14609597210100704266ULL;
unsigned short var_13 = (unsigned short)15448;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
