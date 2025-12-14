#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
unsigned long long int var_2 = 7103777522339438402ULL;
long long int var_3 = 1559141729325025338LL;
_Bool var_4 = (_Bool)0;
unsigned long long int var_5 = 5687340869172246514ULL;
unsigned long long int var_6 = 13377860337499216938ULL;
_Bool var_7 = (_Bool)1;
unsigned int var_8 = 3392921889U;
unsigned long long int var_9 = 16210731539860230110ULL;
_Bool var_10 = (_Bool)1;
int zero = 0;
_Bool var_11 = (_Bool)0;
short var_12 = (short)13031;
unsigned char var_13 = (unsigned char)143;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
