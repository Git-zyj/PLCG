#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -3514578567191899514LL;
long long int var_3 = -248492305582663495LL;
_Bool var_5 = (_Bool)1;
signed char var_6 = (signed char)-104;
long long int var_9 = 7637034580776336207LL;
signed char var_11 = (signed char)47;
long long int var_13 = -12390989456133589LL;
unsigned char var_14 = (unsigned char)163;
int zero = 0;
_Bool var_17 = (_Bool)0;
long long int var_18 = 420434255521202378LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
