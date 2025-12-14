#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 12055727438374393856ULL;
unsigned char var_1 = (unsigned char)121;
_Bool var_3 = (_Bool)1;
unsigned char var_4 = (unsigned char)142;
int var_7 = -1296445661;
unsigned int var_11 = 4130163724U;
unsigned long long int var_12 = 84525769760334905ULL;
_Bool var_14 = (_Bool)1;
int var_16 = -960486957;
int zero = 0;
unsigned int var_19 = 1745968368U;
unsigned long long int var_20 = 523806813834088550ULL;
unsigned char var_21 = (unsigned char)183;
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
