#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3367851249U;
unsigned long long int var_11 = 12825092951827588028ULL;
unsigned char var_15 = (unsigned char)177;
int zero = 0;
short var_20 = (short)-5758;
unsigned int var_21 = 2602513682U;
signed char var_22 = (signed char)-70;
unsigned long long int var_23 = 6928646232424734938ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
