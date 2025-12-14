#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)49;
short var_4 = (short)28414;
signed char var_8 = (signed char)-27;
unsigned char var_9 = (unsigned char)212;
short var_10 = (short)-11550;
int zero = 0;
int var_12 = 2106842273;
unsigned short var_13 = (unsigned short)40430;
unsigned char var_14 = (unsigned char)153;
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
