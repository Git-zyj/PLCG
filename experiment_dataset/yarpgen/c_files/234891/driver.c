#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)17;
unsigned long long int var_1 = 4712952896646276134ULL;
int var_3 = 2055592348;
unsigned char var_5 = (unsigned char)145;
long long int var_8 = -947216188972101907LL;
_Bool var_9 = (_Bool)0;
long long int var_10 = -602050600948505517LL;
short var_14 = (short)-4740;
unsigned short var_18 = (unsigned short)28750;
int zero = 0;
short var_19 = (short)18980;
_Bool var_20 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
