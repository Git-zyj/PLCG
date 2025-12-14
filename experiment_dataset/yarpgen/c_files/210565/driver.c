#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 5902433886932492319ULL;
unsigned short var_3 = (unsigned short)25153;
unsigned int var_5 = 2771301707U;
unsigned long long int var_6 = 8655112115297058814ULL;
int var_7 = -1939315895;
unsigned short var_8 = (unsigned short)9210;
short var_9 = (short)8290;
unsigned short var_11 = (unsigned short)29692;
int zero = 0;
unsigned short var_14 = (unsigned short)65102;
unsigned long long int var_15 = 14859583302542507395ULL;
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
