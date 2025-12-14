#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
unsigned char var_4 = (unsigned char)53;
_Bool var_6 = (_Bool)0;
unsigned long long int var_7 = 3557538307275726444ULL;
unsigned long long int var_9 = 446492007836000886ULL;
long long int var_10 = -1808005146261819651LL;
long long int var_11 = 8827989998470249387LL;
unsigned char var_13 = (unsigned char)251;
int zero = 0;
long long int var_14 = -8257614736585516284LL;
long long int var_15 = 7747226251258800456LL;
unsigned char var_16 = (unsigned char)200;
unsigned long long int var_17 = 1436574576066465043ULL;
int var_18 = 138213926;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
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
