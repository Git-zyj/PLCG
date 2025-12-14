#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 14038346928597517812ULL;
long long int var_1 = 181281581431475898LL;
int var_3 = -432655322;
signed char var_8 = (signed char)-38;
int var_9 = 1091804472;
int zero = 0;
unsigned int var_12 = 214744134U;
short var_13 = (short)14974;
unsigned char var_14 = (unsigned char)198;
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
