#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 2249432223U;
unsigned char var_4 = (unsigned char)226;
_Bool var_5 = (_Bool)1;
int var_6 = -318920006;
_Bool var_7 = (_Bool)0;
signed char var_8 = (signed char)-61;
long long int var_9 = -5187412944102086701LL;
unsigned long long int var_10 = 4432423862166242395ULL;
_Bool var_11 = (_Bool)1;
int zero = 0;
int var_12 = -1294897527;
unsigned short var_13 = (unsigned short)46227;
_Bool var_14 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
