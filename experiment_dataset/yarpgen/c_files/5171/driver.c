#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
unsigned char var_3 = (unsigned char)181;
_Bool var_9 = (_Bool)0;
int var_12 = -595105055;
unsigned long long int var_13 = 12006850274908637165ULL;
short var_17 = (short)3574;
int zero = 0;
unsigned short var_19 = (unsigned short)14448;
signed char var_20 = (signed char)-38;
unsigned short var_21 = (unsigned short)8781;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
