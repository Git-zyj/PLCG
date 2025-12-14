#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-980;
short var_1 = (short)-474;
unsigned long long int var_2 = 16273743540127160918ULL;
short var_3 = (short)10341;
_Bool var_5 = (_Bool)0;
_Bool var_6 = (_Bool)1;
unsigned short var_9 = (unsigned short)15118;
int zero = 0;
unsigned short var_10 = (unsigned short)38926;
long long int var_11 = 8780799334250492446LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
