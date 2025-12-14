#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)20;
int var_2 = -29968854;
unsigned int var_6 = 3788600542U;
unsigned char var_7 = (unsigned char)219;
signed char var_9 = (signed char)-103;
unsigned long long int var_10 = 4110739532467397838ULL;
unsigned char var_12 = (unsigned char)104;
unsigned long long int var_13 = 3157046859147941711ULL;
int var_17 = 1361497523;
int zero = 0;
long long int var_20 = 2517931715448724847LL;
long long int var_21 = 2209911666539182296LL;
signed char var_22 = (signed char)-104;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
