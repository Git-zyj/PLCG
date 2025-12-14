#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-126;
unsigned short var_2 = (unsigned short)23637;
long long int var_3 = 7573811336376271268LL;
long long int var_7 = 8846836415251956034LL;
long long int var_8 = 1179732380331002836LL;
unsigned short var_9 = (unsigned short)43125;
int zero = 0;
_Bool var_10 = (_Bool)1;
unsigned short var_11 = (unsigned short)21612;
short var_12 = (short)-17498;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
