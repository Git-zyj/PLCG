#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 9030887257943100140LL;
long long int var_4 = -1947076952364440906LL;
long long int var_5 = 477425736340772920LL;
long long int var_7 = -304345377819204481LL;
long long int var_11 = -1766959317155104402LL;
long long int var_12 = 5920899623942853437LL;
int zero = 0;
long long int var_13 = -2565598505454028718LL;
long long int var_14 = -348387276831323668LL;
long long int var_15 = -1671870506083355133LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
