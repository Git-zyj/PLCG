#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -4163339831548561121LL;
unsigned long long int var_8 = 13300095395476962606ULL;
long long int var_9 = 6408079044242750919LL;
int zero = 0;
unsigned long long int var_11 = 7800796432925840734ULL;
signed char var_12 = (signed char)-113;
void init() {
}

void checksum() {
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
