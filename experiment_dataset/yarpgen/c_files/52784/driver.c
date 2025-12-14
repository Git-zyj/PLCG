#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = -3536513211489885751LL;
unsigned long long int var_6 = 14049354204022512303ULL;
unsigned long long int var_7 = 16508072955094758071ULL;
long long int var_9 = 6361993179987491697LL;
_Bool var_10 = (_Bool)1;
_Bool var_12 = (_Bool)0;
long long int var_17 = 3577002435666340134LL;
int zero = 0;
unsigned long long int var_20 = 7327113641899457301ULL;
long long int var_21 = -2741881282485267781LL;
signed char var_22 = (signed char)64;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
