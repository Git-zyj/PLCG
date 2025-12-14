#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -1606594122767582939LL;
unsigned int var_2 = 158900808U;
long long int var_7 = 4451317970629918531LL;
int zero = 0;
int var_13 = 1569380407;
unsigned long long int var_14 = 5748818838392943862ULL;
unsigned int var_15 = 701693913U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
