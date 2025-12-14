#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)123;
signed char var_4 = (signed char)-5;
short var_7 = (short)-26297;
signed char var_8 = (signed char)-71;
int zero = 0;
unsigned char var_19 = (unsigned char)63;
short var_20 = (short)-1238;
unsigned int var_21 = 1647829496U;
signed char var_22 = (signed char)-3;
short var_23 = (short)30368;
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
