#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)116;
unsigned short var_1 = (unsigned short)12743;
long long int var_2 = 3812856506133219904LL;
signed char var_4 = (signed char)13;
signed char var_6 = (signed char)-113;
short var_7 = (short)-10657;
unsigned long long int var_9 = 17630209405322902104ULL;
long long int var_10 = 2138529247751948693LL;
_Bool var_11 = (_Bool)1;
unsigned char var_12 = (unsigned char)106;
int zero = 0;
int var_13 = 1584454848;
short var_14 = (short)-7886;
_Bool var_15 = (_Bool)0;
signed char var_16 = (signed char)27;
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
