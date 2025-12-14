#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)11929;
unsigned short var_4 = (unsigned short)9740;
unsigned long long int var_8 = 10509945027954576952ULL;
unsigned char var_13 = (unsigned char)246;
signed char var_14 = (signed char)127;
int zero = 0;
unsigned long long int var_15 = 18204727400276823345ULL;
long long int var_16 = -7878982988230417525LL;
long long int var_17 = -5887640771980075817LL;
unsigned long long int var_18 = 1920306846976032961ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
