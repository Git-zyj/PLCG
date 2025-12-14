#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)111;
unsigned int var_3 = 2458855325U;
unsigned long long int var_6 = 6268074090788286492ULL;
_Bool var_9 = (_Bool)1;
_Bool var_11 = (_Bool)0;
signed char var_13 = (signed char)13;
int zero = 0;
unsigned char var_19 = (unsigned char)162;
unsigned char var_20 = (unsigned char)58;
long long int var_21 = 7087372072451794456LL;
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
