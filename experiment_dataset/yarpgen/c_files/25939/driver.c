#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)16;
short var_5 = (short)-3970;
unsigned char var_6 = (unsigned char)162;
_Bool var_7 = (_Bool)1;
long long int var_8 = -3936222316524304366LL;
long long int var_9 = 7681875580562447299LL;
long long int var_10 = 1049926071417079487LL;
int zero = 0;
short var_13 = (short)-27851;
unsigned short var_14 = (unsigned short)53660;
unsigned short var_15 = (unsigned short)60599;
unsigned int var_16 = 3831063254U;
void init() {
}

void checksum() {
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
