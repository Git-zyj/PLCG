#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned char var_2 = (unsigned char)196;
signed char var_4 = (signed char)15;
signed char var_5 = (signed char)-47;
unsigned short var_6 = (unsigned short)65216;
unsigned int var_8 = 1497680164U;
unsigned char var_9 = (unsigned char)85;
unsigned int var_10 = 2067517973U;
unsigned long long int var_11 = 4771669023724864216ULL;
unsigned int var_12 = 4153281536U;
int zero = 0;
unsigned long long int var_13 = 6527771411498873641ULL;
unsigned long long int var_14 = 1318723543570707590ULL;
unsigned long long int var_15 = 7333457655417758317ULL;
void init() {
}

void checksum() {
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
