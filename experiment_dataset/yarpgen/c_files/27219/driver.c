#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-28;
short var_1 = (short)32456;
int var_3 = 728023808;
_Bool var_6 = (_Bool)0;
unsigned long long int var_9 = 15732257268416453066ULL;
unsigned long long int var_12 = 6092029871296790047ULL;
signed char var_17 = (signed char)26;
unsigned char var_18 = (unsigned char)105;
int zero = 0;
int var_19 = 620964343;
short var_20 = (short)-8492;
unsigned short var_21 = (unsigned short)39825;
unsigned short var_22 = (unsigned short)52256;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
