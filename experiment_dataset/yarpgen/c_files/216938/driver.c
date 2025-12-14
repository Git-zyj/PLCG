#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-67;
unsigned short var_2 = (unsigned short)41032;
short var_4 = (short)-3679;
short var_5 = (short)9982;
_Bool var_6 = (_Bool)1;
unsigned long long int var_7 = 4841395216967085475ULL;
unsigned char var_9 = (unsigned char)167;
int var_11 = 207220641;
int zero = 0;
signed char var_12 = (signed char)-6;
int var_13 = -655590251;
short var_14 = (short)18609;
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
