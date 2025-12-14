#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)169;
unsigned int var_1 = 3249131977U;
short var_3 = (short)16827;
unsigned int var_8 = 3635213498U;
unsigned char var_9 = (unsigned char)10;
long long int var_10 = -4327717689441029380LL;
long long int var_11 = -4071904804978783191LL;
unsigned short var_13 = (unsigned short)43275;
unsigned int var_14 = 4010972522U;
int var_15 = 529381569;
int var_17 = -584610885;
int zero = 0;
long long int var_20 = 3500242732128695751LL;
long long int var_21 = 2121808621604417610LL;
signed char var_22 = (signed char)-101;
unsigned char var_23 = (unsigned char)59;
unsigned char var_24 = (unsigned char)254;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
