#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)26238;
unsigned char var_5 = (unsigned char)163;
int var_10 = 234353029;
int zero = 0;
signed char var_14 = (signed char)-56;
_Bool var_15 = (_Bool)1;
unsigned short var_16 = (unsigned short)6284;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
