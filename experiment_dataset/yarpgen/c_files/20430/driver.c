#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)27130;
unsigned short var_1 = (unsigned short)40994;
signed char var_2 = (signed char)-51;
long long int var_4 = -690612352508879416LL;
unsigned long long int var_5 = 4610752472995674360ULL;
long long int var_6 = 8415632659760214649LL;
short var_7 = (short)-31871;
unsigned short var_9 = (unsigned short)26238;
long long int var_11 = -3245988671251536844LL;
unsigned char var_12 = (unsigned char)127;
int var_16 = 308803127;
short var_17 = (short)28701;
unsigned short var_18 = (unsigned short)48177;
int zero = 0;
unsigned short var_20 = (unsigned short)41724;
unsigned short var_21 = (unsigned short)23298;
signed char var_22 = (signed char)-33;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
