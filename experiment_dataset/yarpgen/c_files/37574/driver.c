#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)7693;
signed char var_3 = (signed char)52;
unsigned char var_4 = (unsigned char)225;
unsigned short var_5 = (unsigned short)50292;
int var_6 = -1623774370;
signed char var_7 = (signed char)-76;
short var_9 = (short)-20909;
int zero = 0;
unsigned short var_10 = (unsigned short)15180;
long long int var_11 = 7234703566021379115LL;
unsigned int var_12 = 4032836216U;
unsigned char var_13 = (unsigned char)139;
int var_14 = -468214363;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
