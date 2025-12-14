#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 9867243808465062604ULL;
unsigned int var_7 = 4092089839U;
unsigned short var_9 = (unsigned short)34376;
signed char var_13 = (signed char)-74;
unsigned long long int var_16 = 5762862753971888748ULL;
int zero = 0;
int var_20 = -746604974;
int var_21 = -1234929060;
long long int var_22 = 1769708876799953973LL;
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
