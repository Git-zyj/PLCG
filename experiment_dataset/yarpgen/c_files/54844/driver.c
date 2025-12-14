#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)42865;
unsigned short var_4 = (unsigned short)54889;
unsigned long long int var_6 = 15634700270936507282ULL;
long long int var_7 = -333607229915108691LL;
unsigned long long int var_9 = 5168989349118388349ULL;
_Bool var_10 = (_Bool)1;
long long int var_11 = 6115497624969994951LL;
unsigned char var_14 = (unsigned char)201;
short var_16 = (short)-22476;
long long int var_18 = -3818923233247291103LL;
signed char var_19 = (signed char)37;
int zero = 0;
signed char var_20 = (signed char)1;
unsigned char var_21 = (unsigned char)73;
unsigned long long int var_22 = 5366414785547456917ULL;
unsigned char var_23 = (unsigned char)129;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
