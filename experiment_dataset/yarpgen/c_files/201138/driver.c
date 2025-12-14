#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 5489839885471071150LL;
int var_4 = -2091948412;
int var_6 = -1577020456;
unsigned int var_7 = 3737598847U;
long long int var_9 = 2210132801420475001LL;
int var_11 = -18508138;
int zero = 0;
long long int var_13 = 4468491408028860637LL;
long long int var_14 = 7498257324389041052LL;
unsigned char var_15 = (unsigned char)126;
unsigned short var_16 = (unsigned short)42728;
unsigned int var_17 = 2302786417U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
