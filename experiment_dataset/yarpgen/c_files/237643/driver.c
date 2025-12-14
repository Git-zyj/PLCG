#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 256805114180309760ULL;
short var_7 = (short)28169;
unsigned long long int var_14 = 719287103877013329ULL;
unsigned short var_17 = (unsigned short)40468;
int zero = 0;
unsigned short var_18 = (unsigned short)5707;
unsigned long long int var_19 = 16121145982076620758ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
