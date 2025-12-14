#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3009367178U;
short var_2 = (short)29277;
unsigned long long int var_3 = 4872543300658028099ULL;
int var_7 = 816504159;
int zero = 0;
long long int var_15 = -6616058616242160535LL;
unsigned long long int var_16 = 16202734135856521227ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
