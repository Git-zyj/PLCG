#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 14788417269570460947ULL;
long long int var_8 = 253603163392190583LL;
unsigned long long int var_9 = 9721433504171868604ULL;
int zero = 0;
unsigned short var_13 = (unsigned short)6370;
int var_14 = -1633547933;
long long int var_15 = -8129023596394869666LL;
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
