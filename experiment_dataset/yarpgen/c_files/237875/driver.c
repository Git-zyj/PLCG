#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -1843914935784642667LL;
unsigned short var_4 = (unsigned short)20675;
signed char var_6 = (signed char)113;
_Bool var_10 = (_Bool)0;
int zero = 0;
long long int var_11 = 8903507921238275149LL;
long long int var_12 = -4151821013399211921LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
