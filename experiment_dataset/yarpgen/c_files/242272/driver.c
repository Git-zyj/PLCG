#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 7878270410794494811LL;
_Bool var_3 = (_Bool)1;
long long int var_4 = 8289869716273599868LL;
signed char var_5 = (signed char)6;
short var_8 = (short)16789;
_Bool var_9 = (_Bool)0;
unsigned char var_10 = (unsigned char)27;
short var_12 = (short)-17996;
int zero = 0;
long long int var_14 = 2757905448071885899LL;
short var_15 = (short)1421;
unsigned char var_16 = (unsigned char)220;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
