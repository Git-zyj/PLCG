#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 15244588;
int var_3 = -1905383233;
short var_4 = (short)13906;
short var_5 = (short)-6743;
_Bool var_6 = (_Bool)0;
_Bool var_7 = (_Bool)0;
short var_8 = (short)26688;
unsigned int var_9 = 357834793U;
unsigned int var_10 = 2497047208U;
int zero = 0;
long long int var_11 = 8703116995345904678LL;
long long int var_12 = 2996107771749260047LL;
_Bool var_13 = (_Bool)1;
short var_14 = (short)3358;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
