#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 10715635007158129555ULL;
signed char var_5 = (signed char)91;
unsigned char var_9 = (unsigned char)103;
int var_16 = 966531416;
int zero = 0;
long long int var_17 = 4870169075988498214LL;
unsigned int var_18 = 997617103U;
long long int var_19 = -1669338264855382558LL;
long long int var_20 = 7574059629964643494LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
