#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)5524;
unsigned int var_2 = 3457063664U;
short var_6 = (short)2332;
unsigned char var_8 = (unsigned char)165;
unsigned long long int var_9 = 16963677803859555483ULL;
unsigned long long int var_11 = 16202223552208397844ULL;
int zero = 0;
signed char var_12 = (signed char)32;
unsigned char var_13 = (unsigned char)36;
unsigned long long int var_14 = 8155270186776611336ULL;
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
