#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
long long int var_3 = -5707010682596600603LL;
int var_5 = -1502821013;
long long int var_6 = 645898576045837146LL;
_Bool var_9 = (_Bool)1;
signed char var_11 = (signed char)76;
int zero = 0;
int var_12 = 951956917;
short var_13 = (short)-19838;
signed char var_14 = (signed char)82;
void init() {
}

void checksum() {
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
