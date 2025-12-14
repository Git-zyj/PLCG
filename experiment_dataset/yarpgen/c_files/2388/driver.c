#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 9733428116461288316ULL;
long long int var_2 = -8496583431461203577LL;
unsigned int var_3 = 2220832634U;
signed char var_5 = (signed char)-91;
signed char var_7 = (signed char)8;
unsigned char var_9 = (unsigned char)79;
long long int var_10 = -3492063189836418256LL;
int zero = 0;
_Bool var_15 = (_Bool)0;
long long int var_16 = -8510322149687307577LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
