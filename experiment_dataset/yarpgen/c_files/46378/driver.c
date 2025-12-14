#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -3634961480974316230LL;
int var_3 = 801843237;
long long int var_7 = 6641323316372105074LL;
int var_9 = 1483803389;
int zero = 0;
int var_13 = 381709460;
short var_14 = (short)19441;
short var_15 = (short)16378;
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
