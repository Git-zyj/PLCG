#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3848368937U;
long long int var_3 = -4766984131117802244LL;
long long int var_4 = -7428110517203865055LL;
long long int var_5 = 1282367650878506294LL;
int var_6 = -192058760;
unsigned short var_7 = (unsigned short)24523;
int zero = 0;
long long int var_11 = -5884962165190275753LL;
long long int var_12 = 8475761125022264769LL;
long long int var_13 = -7975401147371795293LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
