#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 8920606079511184059ULL;
unsigned char var_1 = (unsigned char)192;
unsigned int var_2 = 14418110U;
unsigned short var_3 = (unsigned short)46193;
unsigned char var_5 = (unsigned char)57;
int var_6 = 944955876;
signed char var_7 = (signed char)27;
int var_8 = -1997159123;
unsigned short var_9 = (unsigned short)11296;
int zero = 0;
unsigned short var_11 = (unsigned short)343;
int var_12 = 1419706240;
unsigned int var_13 = 3021541501U;
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
