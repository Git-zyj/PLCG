#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3863270545U;
long long int var_3 = 7284804791766344122LL;
long long int var_4 = -5452302671989029760LL;
unsigned int var_5 = 2177568884U;
int var_6 = 1362195990;
long long int var_10 = -5407350239088507964LL;
unsigned int var_11 = 4049740244U;
unsigned char var_12 = (unsigned char)20;
int zero = 0;
unsigned short var_14 = (unsigned short)29322;
unsigned char var_15 = (unsigned char)103;
long long int var_16 = 3882483858754687623LL;
int var_17 = -205460594;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
