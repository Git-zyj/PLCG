#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1788963682;
signed char var_2 = (signed char)-109;
unsigned short var_5 = (unsigned short)28401;
int var_6 = -344311093;
_Bool var_7 = (_Bool)1;
unsigned int var_8 = 3031530106U;
short var_10 = (short)-4376;
_Bool var_14 = (_Bool)1;
int zero = 0;
unsigned long long int var_16 = 7291882341712558137ULL;
_Bool var_17 = (_Bool)1;
int var_18 = 1032229052;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
