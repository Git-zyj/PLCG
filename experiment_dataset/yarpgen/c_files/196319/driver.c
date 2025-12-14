#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 708104615U;
unsigned long long int var_3 = 5896336445715769162ULL;
int var_4 = -1941151945;
unsigned long long int var_6 = 5138324975291075689ULL;
unsigned long long int var_7 = 5684578093650993418ULL;
int zero = 0;
signed char var_10 = (signed char)13;
unsigned int var_11 = 4273571819U;
unsigned short var_12 = (unsigned short)33255;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
