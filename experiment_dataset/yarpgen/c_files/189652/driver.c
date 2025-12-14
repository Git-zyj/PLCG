#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -2910379038586401745LL;
short var_5 = (short)-24176;
short var_7 = (short)-27130;
int var_9 = -1117746030;
int zero = 0;
long long int var_10 = 2396773757263106042LL;
long long int var_11 = 2251083100844052996LL;
long long int var_12 = 3679858614898629837LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
