#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_4 = (_Bool)0;
int var_6 = 842998230;
unsigned short var_7 = (unsigned short)2011;
unsigned short var_8 = (unsigned short)27287;
unsigned int var_9 = 1117160116U;
_Bool var_10 = (_Bool)0;
int zero = 0;
unsigned char var_17 = (unsigned char)73;
long long int var_18 = 8626824428734292892LL;
_Bool var_19 = (_Bool)1;
unsigned int var_20 = 441539744U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
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
