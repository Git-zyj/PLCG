#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)74;
signed char var_1 = (signed char)7;
signed char var_2 = (signed char)36;
long long int var_3 = -5713863622480227157LL;
_Bool var_4 = (_Bool)1;
long long int var_5 = 3392813010948571512LL;
short var_6 = (short)20451;
unsigned int var_7 = 509013512U;
long long int var_8 = 4073668854303714613LL;
long long int var_9 = 7129733851616528588LL;
signed char var_10 = (signed char)18;
unsigned long long int var_12 = 9600121198938450033ULL;
int zero = 0;
unsigned char var_13 = (unsigned char)199;
unsigned char var_14 = (unsigned char)243;
unsigned long long int var_15 = 5533224356685324752ULL;
int var_16 = 455450469;
unsigned int var_17 = 2009084977U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
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
