#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -625597475435614927LL;
unsigned short var_4 = (unsigned short)5925;
signed char var_7 = (signed char)-90;
short var_10 = (short)-6617;
short var_13 = (short)-15637;
signed char var_14 = (signed char)122;
short var_16 = (short)8088;
int var_17 = -210482381;
unsigned short var_18 = (unsigned short)38978;
int zero = 0;
long long int var_19 = 8270803271112979699LL;
unsigned int var_20 = 465170932U;
unsigned char var_21 = (unsigned char)46;
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
