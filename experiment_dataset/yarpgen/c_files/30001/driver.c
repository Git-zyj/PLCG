#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)107;
short var_4 = (short)19846;
_Bool var_5 = (_Bool)0;
unsigned long long int var_6 = 13007314817253719225ULL;
unsigned char var_9 = (unsigned char)19;
unsigned long long int var_10 = 3562958340491498385ULL;
unsigned short var_12 = (unsigned short)15581;
int zero = 0;
unsigned int var_13 = 3555231850U;
_Bool var_14 = (_Bool)1;
void init() {
}

void checksum() {
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
