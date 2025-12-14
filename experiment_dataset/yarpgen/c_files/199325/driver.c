#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)68;
unsigned short var_5 = (unsigned short)43419;
int var_8 = 1654077065;
long long int var_9 = 5845160200348051484LL;
int var_10 = -1025470850;
int zero = 0;
int var_11 = -213304097;
short var_12 = (short)-2675;
_Bool var_13 = (_Bool)0;
unsigned long long int var_14 = 6641973129077336361ULL;
_Bool var_15 = (_Bool)0;
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
