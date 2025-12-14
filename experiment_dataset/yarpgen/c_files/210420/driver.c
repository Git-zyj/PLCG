#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -7065913086117282731LL;
long long int var_1 = -2434755439779836424LL;
unsigned long long int var_8 = 834865890538279624ULL;
int var_9 = 252622255;
int zero = 0;
unsigned short var_14 = (unsigned short)15108;
short var_15 = (short)18615;
void init() {
}

void checksum() {
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
