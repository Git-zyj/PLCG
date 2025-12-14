#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)64;
short var_1 = (short)-16567;
unsigned char var_4 = (unsigned char)90;
unsigned short var_7 = (unsigned short)31208;
short var_9 = (short)7923;
int zero = 0;
unsigned long long int var_10 = 16496206786362533611ULL;
signed char var_11 = (signed char)54;
unsigned char var_12 = (unsigned char)134;
int var_13 = 1525379407;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
