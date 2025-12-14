#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -1221417893;
signed char var_3 = (signed char)-35;
unsigned long long int var_7 = 10877672262354130083ULL;
long long int var_11 = 3984979300178913703LL;
unsigned short var_14 = (unsigned short)49277;
int var_19 = 1570447463;
int zero = 0;
int var_20 = -1821161351;
long long int var_21 = 5443841869577020924LL;
unsigned long long int var_22 = 1072864639839279579ULL;
long long int var_23 = -4896909370635227981LL;
_Bool var_24 = (_Bool)0;
signed char var_25 = (signed char)37;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
