#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 7538940515955390544ULL;
unsigned short var_2 = (unsigned short)58574;
unsigned long long int var_3 = 11984146059336541971ULL;
unsigned long long int var_7 = 4696480581963671358ULL;
signed char var_9 = (signed char)6;
unsigned long long int var_13 = 3201145256569329218ULL;
int zero = 0;
signed char var_14 = (signed char)-76;
unsigned char var_15 = (unsigned char)220;
unsigned char var_16 = (unsigned char)17;
long long int var_17 = 2945189064486356982LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
