#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)36;
_Bool var_4 = (_Bool)0;
short var_5 = (short)32335;
int var_8 = -1629854505;
signed char var_9 = (signed char)14;
int zero = 0;
short var_10 = (short)-27294;
short var_11 = (short)4042;
int var_12 = -565401453;
long long int var_13 = -854369801290529713LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
