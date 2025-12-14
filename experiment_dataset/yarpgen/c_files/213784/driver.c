#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)60054;
unsigned short var_3 = (unsigned short)46568;
long long int var_4 = 6534510592407991563LL;
long long int var_5 = 6531501537804017948LL;
unsigned short var_6 = (unsigned short)43596;
int zero = 0;
unsigned long long int var_10 = 2713000351211581389ULL;
int var_11 = 400653513;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
