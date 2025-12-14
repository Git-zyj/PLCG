#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = -321113350265600229LL;
int var_5 = -2005601231;
_Bool var_6 = (_Bool)1;
short var_8 = (short)-17996;
long long int var_9 = 9044793245787912968LL;
short var_17 = (short)9599;
int zero = 0;
unsigned long long int var_18 = 1703840513679595325ULL;
unsigned char var_19 = (unsigned char)77;
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
