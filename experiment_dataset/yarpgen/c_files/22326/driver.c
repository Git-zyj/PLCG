#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-29021;
long long int var_1 = -7520709546144997635LL;
long long int var_2 = -5645729511919298006LL;
short var_3 = (short)-31677;
unsigned short var_4 = (unsigned short)54418;
long long int var_5 = -1985446411331609411LL;
short var_6 = (short)-26792;
unsigned char var_8 = (unsigned char)146;
unsigned long long int var_9 = 872159848754335708ULL;
long long int var_11 = -7797457846045216720LL;
unsigned char var_12 = (unsigned char)71;
unsigned char var_13 = (unsigned char)77;
short var_14 = (short)-20241;
int var_16 = -481771828;
int zero = 0;
unsigned char var_17 = (unsigned char)126;
signed char var_18 = (signed char)5;
long long int var_19 = 6501041858552077169LL;
unsigned long long int var_20 = 12357349825938655678ULL;
signed char var_21 = (signed char)-73;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
