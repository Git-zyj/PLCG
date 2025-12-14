#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -693189251;
long long int var_1 = 6649246179477783036LL;
int var_2 = 84725928;
unsigned long long int var_3 = 7790201739282909639ULL;
unsigned char var_4 = (unsigned char)52;
long long int var_5 = 8785822421286735944LL;
unsigned char var_6 = (unsigned char)231;
long long int var_7 = 3391996947850448562LL;
unsigned char var_8 = (unsigned char)220;
unsigned char var_9 = (unsigned char)35;
unsigned char var_11 = (unsigned char)111;
long long int var_12 = 5583146610897679181LL;
unsigned long long int var_14 = 346992824958981201ULL;
int zero = 0;
unsigned char var_15 = (unsigned char)77;
unsigned long long int var_16 = 9482663349478210004ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
