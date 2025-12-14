#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -863384319;
signed char var_1 = (signed char)23;
unsigned char var_2 = (unsigned char)205;
long long int var_3 = 3587386220158295486LL;
int var_4 = -119641466;
long long int var_6 = 3703590626439337692LL;
unsigned char var_7 = (unsigned char)46;
long long int var_8 = 7803327730236140LL;
unsigned short var_9 = (unsigned short)14717;
long long int var_10 = 1057873444959004665LL;
unsigned char var_11 = (unsigned char)83;
long long int var_12 = -5739386592061846764LL;
long long int var_13 = 1148431260236638524LL;
int zero = 0;
_Bool var_14 = (_Bool)0;
long long int var_15 = 3956066113747207250LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
