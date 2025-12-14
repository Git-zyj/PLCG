#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-9316;
unsigned int var_3 = 2224744969U;
long long int var_7 = 1502659354078493114LL;
int var_9 = -1578584555;
int zero = 0;
unsigned long long int var_12 = 2911695926506070570ULL;
long long int var_13 = -2888716283806458009LL;
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
