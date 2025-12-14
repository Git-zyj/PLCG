#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned char var_2 = (unsigned char)159;
short var_4 = (short)15188;
unsigned char var_6 = (unsigned char)153;
unsigned long long int var_7 = 11042474773108608934ULL;
signed char var_9 = (signed char)14;
int zero = 0;
long long int var_10 = -9137447838115342267LL;
unsigned char var_11 = (unsigned char)164;
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
