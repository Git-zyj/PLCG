#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)6835;
short var_2 = (short)-2353;
signed char var_3 = (signed char)20;
unsigned char var_4 = (unsigned char)7;
int var_5 = 1269603903;
signed char var_6 = (signed char)116;
unsigned long long int var_7 = 3133524852925381239ULL;
unsigned short var_8 = (unsigned short)301;
unsigned char var_9 = (unsigned char)16;
int zero = 0;
unsigned short var_10 = (unsigned short)10535;
unsigned short var_11 = (unsigned short)7204;
long long int var_12 = 3563182855182328410LL;
unsigned short var_13 = (unsigned short)29248;
signed char var_14 = (signed char)27;
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
