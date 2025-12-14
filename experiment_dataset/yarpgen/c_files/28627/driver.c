#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = -1425295179776456201LL;
short var_9 = (short)26238;
int zero = 0;
long long int var_10 = -5671680707525959937LL;
unsigned short var_11 = (unsigned short)32575;
unsigned long long int var_12 = 1090142779491014079ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
