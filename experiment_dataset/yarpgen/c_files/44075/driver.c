#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)143;
int var_1 = -2057886204;
long long int var_3 = -2407938426168093236LL;
_Bool var_4 = (_Bool)1;
unsigned long long int var_5 = 4889432556984820535ULL;
unsigned char var_7 = (unsigned char)52;
_Bool var_9 = (_Bool)0;
long long int var_11 = -1653683706107116937LL;
unsigned int var_12 = 3198009713U;
int zero = 0;
unsigned int var_15 = 2514353842U;
unsigned char var_16 = (unsigned char)194;
int var_17 = 862345776;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
