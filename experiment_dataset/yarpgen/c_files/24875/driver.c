#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1441051258;
long long int var_2 = 4915095757596566853LL;
long long int var_3 = -6298445332686239909LL;
unsigned int var_4 = 229385606U;
unsigned short var_5 = (unsigned short)25681;
short var_8 = (short)-9889;
long long int var_9 = 4320489518160721138LL;
short var_11 = (short)19215;
int zero = 0;
signed char var_17 = (signed char)-103;
unsigned int var_18 = 4231808253U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
