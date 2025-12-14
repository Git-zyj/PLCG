#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)29522;
unsigned long long int var_1 = 18264094845050489714ULL;
unsigned short var_2 = (unsigned short)53285;
unsigned long long int var_3 = 14860334563243025389ULL;
short var_4 = (short)2589;
int var_5 = 1430963289;
int var_6 = 1027876921;
unsigned char var_8 = (unsigned char)196;
unsigned short var_9 = (unsigned short)58738;
int zero = 0;
unsigned long long int var_10 = 6840715787299814740ULL;
unsigned long long int var_11 = 2019074007555268915ULL;
unsigned char var_12 = (unsigned char)211;
short var_13 = (short)14396;
long long int var_14 = -3620471376383547966LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
