#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 9105193758534634258LL;
_Bool var_4 = (_Bool)1;
unsigned short var_9 = (unsigned short)51019;
int zero = 0;
short var_15 = (short)26143;
short var_16 = (short)-10618;
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
