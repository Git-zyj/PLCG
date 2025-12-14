#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -4866048705406159051LL;
_Bool var_2 = (_Bool)0;
short var_4 = (short)-32269;
short var_5 = (short)-16797;
unsigned char var_6 = (unsigned char)44;
_Bool var_8 = (_Bool)0;
unsigned char var_9 = (unsigned char)67;
short var_10 = (short)-26679;
unsigned long long int var_11 = 2462074885748210952ULL;
signed char var_13 = (signed char)-15;
signed char var_15 = (signed char)109;
long long int var_17 = 1396918122564959917LL;
int zero = 0;
signed char var_18 = (signed char)-95;
signed char var_19 = (signed char)-75;
unsigned char var_20 = (unsigned char)38;
signed char var_21 = (signed char)101;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
