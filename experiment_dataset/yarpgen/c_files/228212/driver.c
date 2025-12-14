#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_11 = (unsigned short)35636;
int var_13 = 1188415155;
unsigned char var_15 = (unsigned char)128;
signed char var_16 = (signed char)-29;
int zero = 0;
unsigned long long int var_20 = 11514576138499862020ULL;
unsigned long long int var_21 = 8925926456544003680ULL;
unsigned short var_22 = (unsigned short)43562;
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
