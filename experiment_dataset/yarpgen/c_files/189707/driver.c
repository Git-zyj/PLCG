#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)128;
short var_1 = (short)32411;
_Bool var_11 = (_Bool)1;
signed char var_12 = (signed char)-49;
unsigned short var_15 = (unsigned short)61814;
int var_16 = 2058084998;
int zero = 0;
long long int var_18 = 43615345236464922LL;
unsigned short var_19 = (unsigned short)56972;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
