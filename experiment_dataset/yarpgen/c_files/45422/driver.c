#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1451186601;
int var_2 = -1058871951;
int var_3 = 1438598193;
int var_7 = 472299293;
int var_9 = 1367005277;
int var_11 = 1066812872;
int var_13 = 847967363;
int zero = 0;
int var_14 = 647069773;
int var_15 = 2098536360;
int var_16 = -511565799;
int var_17 = -1885860234;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
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
