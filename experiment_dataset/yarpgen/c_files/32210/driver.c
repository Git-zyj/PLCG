#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)109;
int var_9 = -2024576957;
unsigned short var_13 = (unsigned short)63336;
unsigned short var_15 = (unsigned short)5719;
int zero = 0;
short var_20 = (short)-1835;
unsigned long long int var_21 = 12972170914541860581ULL;
signed char var_22 = (signed char)25;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
