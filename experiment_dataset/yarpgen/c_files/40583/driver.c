#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)48271;
unsigned short var_4 = (unsigned short)39990;
int var_5 = -1306314828;
unsigned char var_6 = (unsigned char)64;
unsigned char var_9 = (unsigned char)86;
unsigned long long int var_10 = 4764142404960869123ULL;
signed char var_12 = (signed char)-125;
unsigned char var_14 = (unsigned char)229;
signed char var_15 = (signed char)0;
int zero = 0;
unsigned int var_18 = 1037655385U;
signed char var_19 = (signed char)26;
long long int var_20 = 564651008982284422LL;
long long int var_21 = 214761677656969313LL;
void init() {
}

void checksum() {
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
