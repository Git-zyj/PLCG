#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 11759342745919484057ULL;
int var_5 = -248198835;
unsigned char var_9 = (unsigned char)89;
signed char var_12 = (signed char)-100;
signed char var_16 = (signed char)-48;
int var_18 = -180054782;
int zero = 0;
unsigned short var_19 = (unsigned short)26221;
long long int var_20 = 1318252592047679678LL;
short var_21 = (short)32507;
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
