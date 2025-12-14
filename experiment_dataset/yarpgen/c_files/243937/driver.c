#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-12367;
unsigned long long int var_8 = 7160578611791577207ULL;
long long int var_17 = 4650356251436630477LL;
int zero = 0;
unsigned short var_19 = (unsigned short)58071;
long long int var_20 = 7589039810654252931LL;
unsigned short var_21 = (unsigned short)31941;
int var_22 = -719761291;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
