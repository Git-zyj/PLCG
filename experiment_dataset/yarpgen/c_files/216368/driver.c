#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)41;
signed char var_2 = (signed char)27;
long long int var_3 = -4459964448030715154LL;
signed char var_5 = (signed char)41;
short var_7 = (short)9015;
unsigned char var_11 = (unsigned char)80;
long long int var_12 = 7077600315242929457LL;
signed char var_13 = (signed char)102;
unsigned int var_14 = 1843394003U;
unsigned char var_15 = (unsigned char)108;
int zero = 0;
unsigned long long int var_18 = 13959638180919851946ULL;
unsigned char var_19 = (unsigned char)233;
unsigned int var_20 = 1501702155U;
unsigned int var_21 = 31511356U;
int var_22 = -824877574;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
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
