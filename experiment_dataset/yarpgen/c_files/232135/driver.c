#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)20;
long long int var_1 = 8735726532633609416LL;
_Bool var_5 = (_Bool)1;
int var_7 = 1332964450;
signed char var_8 = (signed char)39;
unsigned short var_9 = (unsigned short)41300;
int zero = 0;
short var_10 = (short)-10029;
_Bool var_11 = (_Bool)0;
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
