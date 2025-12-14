#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 13466793640160155902ULL;
_Bool var_5 = (_Bool)0;
unsigned long long int var_9 = 6895928762348201653ULL;
int zero = 0;
long long int var_10 = -7920300875218675144LL;
unsigned int var_11 = 4058446679U;
_Bool var_12 = (_Bool)1;
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
