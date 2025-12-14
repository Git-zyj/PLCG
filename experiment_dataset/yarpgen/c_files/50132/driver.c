#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -4448586148989207011LL;
unsigned char var_3 = (unsigned char)28;
unsigned long long int var_4 = 4328551376363786475ULL;
int var_9 = 1129829295;
unsigned char var_11 = (unsigned char)62;
int var_15 = -1293290711;
_Bool var_17 = (_Bool)1;
long long int var_18 = -3023656559806446978LL;
int zero = 0;
unsigned char var_19 = (unsigned char)42;
unsigned char var_20 = (unsigned char)196;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
