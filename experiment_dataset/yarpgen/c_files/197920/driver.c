#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)213;
long long int var_2 = -9099103311946588832LL;
unsigned long long int var_3 = 16278530254385035978ULL;
unsigned int var_4 = 905004868U;
unsigned long long int var_5 = 8348348392721748248ULL;
unsigned int var_6 = 1705642810U;
int var_7 = 662809103;
unsigned char var_8 = (unsigned char)46;
unsigned char var_10 = (unsigned char)188;
unsigned char var_11 = (unsigned char)43;
int zero = 0;
unsigned char var_12 = (unsigned char)126;
short var_13 = (short)-25079;
int var_14 = -143471439;
long long int var_15 = 1681286341316027875LL;
void init() {
}

void checksum() {
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
