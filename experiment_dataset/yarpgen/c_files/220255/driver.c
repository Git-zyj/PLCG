#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)166;
unsigned short var_1 = (unsigned short)21676;
_Bool var_2 = (_Bool)0;
short var_3 = (short)26802;
int var_4 = -952497947;
_Bool var_6 = (_Bool)1;
unsigned long long int var_8 = 5021552401625868552ULL;
unsigned char var_9 = (unsigned char)156;
int zero = 0;
unsigned short var_11 = (unsigned short)39233;
unsigned long long int var_12 = 339811165139659742ULL;
_Bool var_13 = (_Bool)1;
unsigned short var_14 = (unsigned short)28307;
signed char var_15 = (signed char)50;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
