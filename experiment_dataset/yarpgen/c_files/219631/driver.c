#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -1395359164607878521LL;
unsigned short var_4 = (unsigned short)18168;
_Bool var_5 = (_Bool)1;
unsigned char var_6 = (unsigned char)205;
long long int var_7 = 4713893015312576076LL;
signed char var_9 = (signed char)-95;
unsigned char var_11 = (unsigned char)9;
int zero = 0;
unsigned short var_12 = (unsigned short)8844;
unsigned int var_13 = 3456680303U;
long long int var_14 = -3612204598364498939LL;
unsigned short var_15 = (unsigned short)5696;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
