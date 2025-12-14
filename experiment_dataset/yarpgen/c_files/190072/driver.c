#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -6408343622710779104LL;
signed char var_8 = (signed char)35;
unsigned long long int var_14 = 3121809904269891857ULL;
int zero = 0;
unsigned short var_16 = (unsigned short)44756;
int var_17 = 654295956;
unsigned long long int var_18 = 383298401666305850ULL;
unsigned short var_19 = (unsigned short)40387;
unsigned short var_20 = (unsigned short)4308;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
