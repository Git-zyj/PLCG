#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-9575;
unsigned short var_4 = (unsigned short)25908;
_Bool var_5 = (_Bool)0;
_Bool var_8 = (_Bool)0;
unsigned char var_9 = (unsigned char)26;
unsigned long long int var_10 = 8573698332248885628ULL;
int zero = 0;
_Bool var_13 = (_Bool)1;
unsigned short var_14 = (unsigned short)18899;
signed char var_15 = (signed char)-81;
unsigned long long int var_16 = 11511279148022589276ULL;
long long int var_17 = -2300160097779764071LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
