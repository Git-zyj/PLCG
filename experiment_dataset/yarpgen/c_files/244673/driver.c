#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 13626433951601315548ULL;
signed char var_4 = (signed char)99;
unsigned long long int var_5 = 12378990041392611560ULL;
long long int var_7 = 1061525281853295480LL;
signed char var_14 = (signed char)79;
unsigned char var_15 = (unsigned char)138;
int var_16 = -1396600759;
int zero = 0;
unsigned char var_18 = (unsigned char)200;
_Bool var_19 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
