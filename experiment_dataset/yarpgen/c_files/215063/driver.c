#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 1035994802001208171LL;
int var_3 = -1157549090;
unsigned short var_4 = (unsigned short)52309;
unsigned int var_5 = 841855116U;
unsigned int var_6 = 4102852844U;
unsigned long long int var_7 = 5106859348747660769ULL;
short var_8 = (short)6098;
short var_9 = (short)-3465;
unsigned long long int var_14 = 16442082758032740242ULL;
int zero = 0;
unsigned char var_15 = (unsigned char)138;
short var_16 = (short)-10376;
unsigned long long int var_17 = 8138020175559033770ULL;
unsigned short var_18 = (unsigned short)19473;
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
