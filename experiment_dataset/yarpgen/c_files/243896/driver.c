#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-2498;
short var_2 = (short)-10062;
short var_5 = (short)-5634;
unsigned long long int var_7 = 4593914826236180980ULL;
_Bool var_9 = (_Bool)0;
int zero = 0;
int var_15 = -1189859846;
short var_16 = (short)-6570;
long long int var_17 = -90861355665695791LL;
void init() {
}

void checksum() {
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
