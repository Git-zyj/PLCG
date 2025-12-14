#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-3;
signed char var_3 = (signed char)123;
signed char var_4 = (signed char)40;
unsigned short var_5 = (unsigned short)35722;
unsigned short var_6 = (unsigned short)2068;
unsigned short var_8 = (unsigned short)44412;
int zero = 0;
signed char var_10 = (signed char)103;
int var_11 = 1139897977;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
