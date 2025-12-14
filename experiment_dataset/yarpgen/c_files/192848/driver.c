#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-6106;
unsigned char var_1 = (unsigned char)119;
long long int var_2 = -3317799718733168374LL;
unsigned short var_3 = (unsigned short)10420;
short var_4 = (short)-13720;
_Bool var_5 = (_Bool)1;
unsigned int var_6 = 142942783U;
_Bool var_7 = (_Bool)1;
signed char var_8 = (signed char)-120;
unsigned long long int var_9 = 7919841506522089263ULL;
unsigned char var_10 = (unsigned char)57;
long long int var_11 = 7219906303896014531LL;
int zero = 0;
_Bool var_12 = (_Bool)1;
signed char var_13 = (signed char)-93;
signed char var_14 = (signed char)59;
signed char var_15 = (signed char)-99;
unsigned int var_16 = 3475726071U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
