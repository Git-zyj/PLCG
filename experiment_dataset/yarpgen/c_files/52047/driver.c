#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -8817373112794191347LL;
unsigned long long int var_4 = 12199338546778970726ULL;
unsigned char var_6 = (unsigned char)219;
long long int var_8 = -526614294146883692LL;
unsigned short var_11 = (unsigned short)35861;
short var_12 = (short)-14885;
unsigned long long int var_13 = 2084888561687893507ULL;
_Bool var_14 = (_Bool)1;
int zero = 0;
_Bool var_16 = (_Bool)1;
long long int var_17 = -8072716309542628273LL;
unsigned short var_18 = (unsigned short)17994;
void init() {
}

void checksum() {
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
