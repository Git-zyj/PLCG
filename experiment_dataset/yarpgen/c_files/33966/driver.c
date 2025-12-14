#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_8 = 7077992882921740778ULL;
unsigned long long int var_9 = 17856161655561277313ULL;
long long int var_11 = -7865671352433899515LL;
_Bool var_13 = (_Bool)0;
int zero = 0;
unsigned int var_16 = 506220932U;
long long int var_17 = 2870036247779756047LL;
unsigned long long int var_18 = 11841080491498547432ULL;
void init() {
}

void checksum() {
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
