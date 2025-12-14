#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = 5212824283215159910LL;
unsigned long long int var_8 = 8274522785867959521ULL;
long long int var_10 = -4987107696765092911LL;
long long int var_13 = 342474884983711029LL;
int zero = 0;
int var_16 = -400565490;
unsigned long long int var_17 = 3900174401446122673ULL;
void init() {
}

void checksum() {
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
