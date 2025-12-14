#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1418116591;
signed char var_4 = (signed char)51;
int var_6 = 150684661;
unsigned long long int var_7 = 8749842543583037165ULL;
unsigned long long int var_15 = 18343133948885993057ULL;
_Bool var_16 = (_Bool)1;
int zero = 0;
unsigned char var_17 = (unsigned char)203;
unsigned short var_18 = (unsigned short)50177;
short var_19 = (short)-18628;
signed char var_20 = (signed char)6;
_Bool var_21 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
