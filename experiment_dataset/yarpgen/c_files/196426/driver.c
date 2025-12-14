#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)96;
signed char var_2 = (signed char)-2;
unsigned char var_3 = (unsigned char)23;
unsigned long long int var_4 = 3205181785206607470ULL;
unsigned char var_6 = (unsigned char)25;
short var_7 = (short)-731;
_Bool var_9 = (_Bool)0;
unsigned short var_10 = (unsigned short)36446;
unsigned int var_11 = 3976030887U;
unsigned char var_12 = (unsigned char)122;
unsigned short var_13 = (unsigned short)47107;
int zero = 0;
unsigned long long int var_14 = 17945487733649499452ULL;
_Bool var_15 = (_Bool)0;
int var_16 = -908083480;
unsigned int var_17 = 1907869946U;
unsigned int var_18 = 1391021217U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
