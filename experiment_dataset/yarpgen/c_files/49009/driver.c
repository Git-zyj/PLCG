#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -3735709260726595698LL;
short var_1 = (short)16123;
long long int var_2 = -5803970740713323583LL;
_Bool var_3 = (_Bool)0;
unsigned char var_4 = (unsigned char)209;
unsigned short var_6 = (unsigned short)51791;
int var_8 = -957759356;
long long int var_9 = 1691224767354762059LL;
signed char var_10 = (signed char)-39;
unsigned long long int var_11 = 7396367241770074404ULL;
unsigned char var_12 = (unsigned char)121;
_Bool var_13 = (_Bool)1;
unsigned int var_14 = 4077756974U;
int zero = 0;
unsigned int var_16 = 1709159615U;
unsigned long long int var_17 = 9172947018966126079ULL;
_Bool var_18 = (_Bool)1;
long long int var_19 = 2851590631910324406LL;
unsigned int var_20 = 3203911759U;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
