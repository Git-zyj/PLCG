#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 8751794161327885755LL;
unsigned int var_4 = 1696099003U;
unsigned char var_7 = (unsigned char)18;
unsigned short var_12 = (unsigned short)15821;
signed char var_16 = (signed char)54;
int zero = 0;
unsigned char var_18 = (unsigned char)110;
signed char var_19 = (signed char)-107;
short var_20 = (short)1757;
unsigned short var_21 = (unsigned short)41584;
signed char var_22 = (signed char)-38;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
