#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 290364674704376272ULL;
unsigned long long int var_3 = 14352303248592485587ULL;
unsigned long long int var_4 = 8959767608004489918ULL;
short var_5 = (short)21128;
unsigned short var_6 = (unsigned short)35879;
unsigned short var_8 = (unsigned short)34810;
unsigned long long int var_9 = 16091009616213793639ULL;
unsigned char var_12 = (unsigned char)22;
int var_13 = -1926646719;
int zero = 0;
int var_16 = 126203164;
unsigned short var_17 = (unsigned short)19525;
unsigned char var_18 = (unsigned char)2;
void init() {
}

void checksum() {
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
