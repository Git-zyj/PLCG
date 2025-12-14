#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_7 = (short)12946;
long long int var_9 = 5611068498872439545LL;
short var_10 = (short)5651;
unsigned long long int var_13 = 10393932014962532317ULL;
long long int var_14 = -9213503086162464490LL;
unsigned short var_16 = (unsigned short)31381;
int zero = 0;
short var_18 = (short)-285;
signed char var_19 = (signed char)-92;
unsigned long long int var_20 = 10080161618222645587ULL;
short var_21 = (short)-27633;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
