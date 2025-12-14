#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_5 = (_Bool)0;
int var_6 = -864613930;
int var_9 = -1154818245;
unsigned char var_11 = (unsigned char)145;
int zero = 0;
unsigned long long int var_12 = 8427007415788321875ULL;
short var_13 = (short)-2502;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
