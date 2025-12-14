#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 826938072754069580LL;
signed char var_2 = (signed char)8;
signed char var_7 = (signed char)7;
long long int var_9 = 8683513872728865787LL;
long long int var_10 = -6692665493373440197LL;
short var_11 = (short)20763;
int zero = 0;
unsigned int var_12 = 3208741194U;
long long int var_13 = -5443848819139832236LL;
void init() {
}

void checksum() {
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
