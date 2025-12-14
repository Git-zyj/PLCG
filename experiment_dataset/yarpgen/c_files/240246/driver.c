#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned char var_1 = (unsigned char)153;
unsigned char var_2 = (unsigned char)9;
unsigned int var_3 = 1708147433U;
unsigned short var_4 = (unsigned short)22248;
long long int var_6 = -2949598977739441975LL;
int var_7 = -860494414;
int var_8 = 718385584;
unsigned char var_9 = (unsigned char)143;
unsigned short var_10 = (unsigned short)2258;
signed char var_11 = (signed char)21;
long long int var_12 = 8093567604387622251LL;
long long int var_13 = -8193738189461464585LL;
unsigned short var_15 = (unsigned short)20422;
unsigned long long int var_16 = 11161805355475912623ULL;
unsigned int var_17 = 2581515534U;
int zero = 0;
unsigned char var_19 = (unsigned char)40;
signed char var_20 = (signed char)-27;
unsigned char var_21 = (unsigned char)194;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
