#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)25096;
long long int var_4 = -4349557667071180807LL;
long long int var_5 = 351393613319278968LL;
long long int var_9 = 688449066166709557LL;
int zero = 0;
unsigned int var_11 = 1741079142U;
long long int var_12 = 5678877887104070030LL;
unsigned int var_13 = 2071135961U;
void init() {
}

void checksum() {
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
