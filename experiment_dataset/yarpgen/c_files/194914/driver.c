#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)63254;
unsigned short var_9 = (unsigned short)968;
int zero = 0;
_Bool var_10 = (_Bool)0;
long long int var_11 = 707993194839778679LL;
int var_12 = -1895779864;
unsigned long long int var_13 = 5645436849175962631ULL;
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
