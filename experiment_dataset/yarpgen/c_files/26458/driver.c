#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 56085090877986719LL;
unsigned long long int var_3 = 13227634061351525397ULL;
short var_5 = (short)29127;
unsigned short var_8 = (unsigned short)20896;
unsigned char var_11 = (unsigned char)182;
unsigned long long int var_15 = 2173426410633537876ULL;
long long int var_16 = -876428914168795230LL;
int zero = 0;
short var_19 = (short)27038;
_Bool var_20 = (_Bool)0;
unsigned long long int var_21 = 8820783037762421428ULL;
unsigned short var_22 = (unsigned short)51837;
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
