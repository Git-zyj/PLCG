#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-7422;
unsigned long long int var_1 = 10512469954114511565ULL;
_Bool var_2 = (_Bool)0;
unsigned short var_3 = (unsigned short)23269;
unsigned int var_5 = 2913461664U;
unsigned long long int var_6 = 263264234602300295ULL;
unsigned short var_7 = (unsigned short)36368;
unsigned short var_8 = (unsigned short)3220;
short var_9 = (short)19417;
unsigned long long int var_13 = 12613685890223206578ULL;
long long int var_14 = 6711582885197065945LL;
int zero = 0;
unsigned long long int var_17 = 8276323602092135931ULL;
unsigned int var_18 = 4036643377U;
short var_19 = (short)-4691;
unsigned int var_20 = 1167067584U;
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
