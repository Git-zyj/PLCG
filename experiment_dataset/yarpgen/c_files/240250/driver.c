#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 1502489693804172815LL;
unsigned char var_1 = (unsigned char)21;
_Bool var_5 = (_Bool)0;
int var_6 = -624370891;
int var_7 = 1989968887;
signed char var_8 = (signed char)17;
unsigned int var_9 = 4017703328U;
long long int var_10 = 2529597240066500377LL;
_Bool var_12 = (_Bool)1;
_Bool var_15 = (_Bool)0;
int zero = 0;
unsigned long long int var_19 = 3525939258023584243ULL;
signed char var_20 = (signed char)60;
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
