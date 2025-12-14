#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)26227;
unsigned short var_2 = (unsigned short)58755;
unsigned short var_5 = (unsigned short)31254;
long long int var_7 = -7866971252359942406LL;
short var_10 = (short)-29103;
int zero = 0;
unsigned char var_13 = (unsigned char)83;
int var_14 = -615560734;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
