#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_6 = (signed char)9;
unsigned char var_9 = (unsigned char)100;
unsigned short var_12 = (unsigned short)4789;
unsigned int var_15 = 2471246856U;
unsigned short var_16 = (unsigned short)58361;
unsigned long long int var_18 = 12549002248297867039ULL;
int zero = 0;
unsigned long long int var_19 = 5047272526305784327ULL;
short var_20 = (short)20304;
unsigned long long int var_21 = 2425558893914327893ULL;
int var_22 = 1145457036;
int var_23 = 1874742026;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
