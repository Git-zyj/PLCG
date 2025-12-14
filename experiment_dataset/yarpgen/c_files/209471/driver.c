#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 10477203583258816076ULL;
unsigned long long int var_1 = 14470045077551735050ULL;
unsigned char var_2 = (unsigned char)173;
signed char var_3 = (signed char)-96;
unsigned char var_5 = (unsigned char)80;
signed char var_6 = (signed char)-119;
unsigned long long int var_7 = 6411451518593144801ULL;
long long int var_9 = 2743390040622089104LL;
signed char var_10 = (signed char)82;
short var_12 = (short)2227;
int zero = 0;
unsigned short var_14 = (unsigned short)2384;
unsigned char var_15 = (unsigned char)252;
void init() {
}

void checksum() {
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
