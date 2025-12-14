#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_6 = 1970378520U;
unsigned int var_9 = 1274970349U;
unsigned char var_11 = (unsigned char)158;
unsigned int var_12 = 2344839249U;
_Bool var_13 = (_Bool)1;
int zero = 0;
unsigned long long int var_19 = 3657365605281721588ULL;
_Bool var_20 = (_Bool)0;
_Bool var_21 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
