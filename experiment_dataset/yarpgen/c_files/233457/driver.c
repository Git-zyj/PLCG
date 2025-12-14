#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -6339636532903575411LL;
short var_3 = (short)29295;
unsigned char var_11 = (unsigned char)164;
long long int var_16 = 5517371430623971896LL;
_Bool var_17 = (_Bool)1;
int zero = 0;
int var_18 = -1331846706;
long long int var_19 = 4148513995580530601LL;
signed char var_20 = (signed char)51;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
