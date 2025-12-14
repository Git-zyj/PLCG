#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)181;
signed char var_4 = (signed char)-25;
unsigned char var_8 = (unsigned char)186;
short var_9 = (short)1878;
unsigned char var_11 = (unsigned char)117;
int zero = 0;
_Bool var_12 = (_Bool)0;
unsigned int var_13 = 610683447U;
unsigned char var_14 = (unsigned char)118;
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
