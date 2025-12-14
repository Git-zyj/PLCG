#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_5 = 1076431030;
signed char var_8 = (signed char)37;
unsigned short var_9 = (unsigned short)16187;
long long int var_10 = 8483340579528941682LL;
unsigned long long int var_11 = 3381420841436782377ULL;
int var_18 = 489194412;
int zero = 0;
unsigned int var_19 = 730843500U;
short var_20 = (short)7037;
unsigned char var_21 = (unsigned char)225;
unsigned long long int var_22 = 14228832772598220676ULL;
void init() {
}

void checksum() {
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
