#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)680;
unsigned char var_1 = (unsigned char)133;
long long int var_5 = -4471154159611687696LL;
unsigned short var_8 = (unsigned short)23735;
short var_9 = (short)27703;
unsigned short var_12 = (unsigned short)23787;
int zero = 0;
short var_15 = (short)-11950;
unsigned short var_16 = (unsigned short)6679;
unsigned long long int var_17 = 10364794231667453027ULL;
unsigned char var_18 = (unsigned char)180;
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
