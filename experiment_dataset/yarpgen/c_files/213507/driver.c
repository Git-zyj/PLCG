#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-93;
signed char var_1 = (signed char)116;
_Bool var_2 = (_Bool)1;
unsigned char var_3 = (unsigned char)191;
signed char var_6 = (signed char)-85;
int var_7 = 448997989;
signed char var_8 = (signed char)40;
signed char var_9 = (signed char)17;
signed char var_10 = (signed char)-26;
int zero = 0;
unsigned char var_11 = (unsigned char)77;
long long int var_12 = -9171011218374409221LL;
_Bool var_13 = (_Bool)0;
unsigned char var_14 = (unsigned char)242;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
