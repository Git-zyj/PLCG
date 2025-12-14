#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 2095911382965028989ULL;
unsigned char var_10 = (unsigned char)187;
unsigned long long int var_13 = 4753882453310431742ULL;
unsigned int var_18 = 3989753538U;
int zero = 0;
signed char var_20 = (signed char)12;
signed char var_21 = (signed char)57;
unsigned short var_22 = (unsigned short)47049;
unsigned long long int var_23 = 455155009768902764ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
