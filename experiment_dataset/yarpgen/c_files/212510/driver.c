#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)138;
unsigned short var_1 = (unsigned short)33908;
unsigned int var_5 = 2284010053U;
long long int var_7 = -1396187533552536162LL;
unsigned short var_10 = (unsigned short)35941;
int var_11 = -936358624;
signed char var_12 = (signed char)-79;
unsigned int var_13 = 1577670221U;
unsigned int var_15 = 1100600123U;
long long int var_16 = 8544362523745553623LL;
signed char var_17 = (signed char)34;
unsigned int var_19 = 1343436709U;
int zero = 0;
short var_20 = (short)-10635;
short var_21 = (short)14295;
long long int var_22 = 4938423850606913902LL;
short var_23 = (short)5571;
int var_24 = 1744787421;
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
