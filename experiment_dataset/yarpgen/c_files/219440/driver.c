#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 1583973337961629721LL;
unsigned int var_1 = 395251784U;
unsigned long long int var_3 = 16185212909594488238ULL;
signed char var_4 = (signed char)-107;
_Bool var_5 = (_Bool)1;
short var_6 = (short)-13891;
long long int var_7 = 4258934711770874514LL;
_Bool var_8 = (_Bool)0;
unsigned short var_9 = (unsigned short)58517;
int zero = 0;
unsigned char var_10 = (unsigned char)209;
long long int var_11 = 6099636003010792195LL;
unsigned long long int var_12 = 5809781145286786317ULL;
int var_13 = -1702758546;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
