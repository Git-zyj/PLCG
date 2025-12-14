#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -547560414;
_Bool var_2 = (_Bool)0;
int var_3 = 1356249777;
signed char var_4 = (signed char)10;
unsigned long long int var_5 = 3817301061022004715ULL;
signed char var_6 = (signed char)-33;
unsigned short var_9 = (unsigned short)27862;
signed char var_10 = (signed char)-32;
_Bool var_12 = (_Bool)1;
int zero = 0;
unsigned long long int var_13 = 13177583405141096640ULL;
signed char var_14 = (signed char)-103;
unsigned long long int var_15 = 16408803086905412706ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
