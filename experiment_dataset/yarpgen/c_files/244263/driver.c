#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-69;
signed char var_4 = (signed char)12;
unsigned char var_6 = (unsigned char)131;
signed char var_7 = (signed char)90;
_Bool var_8 = (_Bool)1;
signed char var_9 = (signed char)82;
int zero = 0;
unsigned short var_10 = (unsigned short)4770;
signed char var_11 = (signed char)-76;
unsigned int var_12 = 947949505U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
