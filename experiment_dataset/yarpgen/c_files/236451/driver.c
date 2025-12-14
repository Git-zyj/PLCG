#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_6 = (unsigned short)4203;
unsigned char var_7 = (unsigned char)65;
int var_8 = 153263826;
unsigned char var_9 = (unsigned char)197;
unsigned int var_10 = 4220155152U;
_Bool var_12 = (_Bool)0;
short var_13 = (short)981;
int zero = 0;
unsigned long long int var_14 = 5560907269299419490ULL;
unsigned int var_15 = 427436130U;
_Bool var_16 = (_Bool)1;
unsigned long long int var_17 = 10105025496618256671ULL;
_Bool var_18 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
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
