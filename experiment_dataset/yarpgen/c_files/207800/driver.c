#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 5577094575458198230ULL;
unsigned long long int var_1 = 9026357872890398787ULL;
signed char var_6 = (signed char)-6;
_Bool var_8 = (_Bool)1;
int var_12 = -275642761;
int zero = 0;
long long int var_13 = 964602833655592538LL;
short var_14 = (short)25487;
long long int var_15 = -1181267800573984410LL;
unsigned int var_16 = 2873612097U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
