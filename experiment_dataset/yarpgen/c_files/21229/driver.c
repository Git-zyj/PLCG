#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 9029628969631677892ULL;
long long int var_1 = -5950002851681342522LL;
short var_5 = (short)2814;
unsigned long long int var_10 = 3556648241255830263ULL;
unsigned long long int var_12 = 18006828908309551913ULL;
unsigned long long int var_13 = 4665692617738433030ULL;
unsigned char var_17 = (unsigned char)51;
int zero = 0;
short var_20 = (short)-4210;
_Bool var_21 = (_Bool)1;
unsigned long long int var_22 = 11098271747137013477ULL;
short var_23 = (short)-28455;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
