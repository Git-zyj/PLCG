#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)10;
unsigned char var_1 = (unsigned char)73;
signed char var_3 = (signed char)-67;
unsigned char var_4 = (unsigned char)78;
signed char var_5 = (signed char)-102;
unsigned char var_7 = (unsigned char)24;
long long int var_8 = 3186708246160392603LL;
signed char var_9 = (signed char)-121;
int zero = 0;
unsigned char var_11 = (unsigned char)13;
long long int var_12 = -1248092163589002073LL;
unsigned char var_13 = (unsigned char)57;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
