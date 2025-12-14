#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -1657059467744039316LL;
unsigned char var_2 = (unsigned char)141;
unsigned char var_6 = (unsigned char)243;
unsigned int var_7 = 2807344704U;
signed char var_12 = (signed char)13;
unsigned short var_13 = (unsigned short)7457;
short var_14 = (short)4277;
int zero = 0;
short var_19 = (short)-1361;
unsigned short var_20 = (unsigned short)43472;
long long int var_21 = -4721930019638637142LL;
void init() {
}

void checksum() {
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
