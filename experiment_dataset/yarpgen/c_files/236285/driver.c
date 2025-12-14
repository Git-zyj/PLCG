#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 2660912163646737064ULL;
unsigned short var_4 = (unsigned short)22703;
int var_9 = 651099526;
unsigned char var_10 = (unsigned char)231;
unsigned short var_12 = (unsigned short)34918;
signed char var_16 = (signed char)-89;
short var_19 = (short)-25873;
int zero = 0;
unsigned int var_20 = 2883926925U;
unsigned int var_21 = 3277086409U;
signed char var_22 = (signed char)63;
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
