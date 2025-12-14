#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)185;
unsigned long long int var_5 = 10010197565779397339ULL;
signed char var_7 = (signed char)-77;
unsigned int var_8 = 530529111U;
unsigned long long int var_9 = 11487763337255060214ULL;
unsigned int var_10 = 4031357915U;
signed char var_11 = (signed char)95;
int zero = 0;
unsigned short var_12 = (unsigned short)1213;
signed char var_13 = (signed char)-28;
unsigned int var_14 = 1837583191U;
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
