#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -6881362803920091093LL;
unsigned char var_1 = (unsigned char)107;
_Bool var_3 = (_Bool)0;
short var_5 = (short)18402;
signed char var_6 = (signed char)-125;
unsigned short var_9 = (unsigned short)43978;
int zero = 0;
unsigned short var_10 = (unsigned short)64280;
unsigned short var_11 = (unsigned short)45250;
unsigned short var_12 = (unsigned short)57124;
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
