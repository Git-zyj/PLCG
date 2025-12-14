#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -8531409030881864229LL;
signed char var_1 = (signed char)81;
signed char var_2 = (signed char)-109;
unsigned short var_4 = (unsigned short)25650;
short var_7 = (short)11632;
unsigned short var_8 = (unsigned short)38987;
unsigned short var_9 = (unsigned short)23613;
signed char var_11 = (signed char)-111;
int zero = 0;
unsigned int var_12 = 2424486710U;
signed char var_13 = (signed char)93;
signed char var_14 = (signed char)-15;
int var_15 = -1959724877;
unsigned char var_16 = (unsigned char)167;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
