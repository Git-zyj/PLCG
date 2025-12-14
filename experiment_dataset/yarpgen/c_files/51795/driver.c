#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)8;
unsigned char var_4 = (unsigned char)156;
int var_5 = -1433640033;
unsigned long long int var_9 = 3447397132871948037ULL;
_Bool var_11 = (_Bool)0;
unsigned long long int var_14 = 10499054593747145838ULL;
int zero = 0;
short var_15 = (short)25548;
_Bool var_16 = (_Bool)0;
unsigned short var_17 = (unsigned short)7779;
_Bool var_18 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
