#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 2751739846609909017LL;
long long int var_3 = -8457663500677108087LL;
long long int var_7 = 8932590792601678697LL;
long long int var_8 = 4983555436066631801LL;
long long int var_9 = 2491780115254653388LL;
long long int var_10 = 3127330886495718411LL;
long long int var_11 = 1553850502409985456LL;
int zero = 0;
long long int var_13 = -2120040303036294641LL;
long long int var_14 = -4863692216623327179LL;
void init() {
}

void checksum() {
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
