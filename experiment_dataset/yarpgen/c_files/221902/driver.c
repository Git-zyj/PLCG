#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-93;
long long int var_1 = -7629003716150247972LL;
long long int var_2 = -5870805970123979008LL;
unsigned char var_3 = (unsigned char)169;
long long int var_5 = 1071316884555983823LL;
long long int var_6 = -3991605278123532912LL;
signed char var_8 = (signed char)48;
unsigned int var_9 = 1876631244U;
unsigned long long int var_10 = 5311327646393547968ULL;
int zero = 0;
unsigned int var_11 = 2511463919U;
unsigned int var_12 = 2752281058U;
signed char var_13 = (signed char)28;
unsigned char var_14 = (unsigned char)90;
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
