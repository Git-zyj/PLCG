#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 14124274566488930061ULL;
unsigned char var_3 = (unsigned char)138;
long long int var_5 = 1375859050294937052LL;
unsigned char var_7 = (unsigned char)254;
short var_9 = (short)4031;
signed char var_10 = (signed char)90;
signed char var_16 = (signed char)-79;
unsigned long long int var_17 = 12382315843906682706ULL;
int zero = 0;
short var_18 = (short)-11140;
unsigned short var_19 = (unsigned short)64749;
int var_20 = -736230433;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
