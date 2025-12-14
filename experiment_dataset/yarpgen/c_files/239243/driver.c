#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 10835985165111593673ULL;
unsigned short var_2 = (unsigned short)31187;
unsigned char var_3 = (unsigned char)177;
signed char var_4 = (signed char)-98;
long long int var_5 = -6025894140634637703LL;
unsigned short var_6 = (unsigned short)54617;
int var_7 = 1469330035;
signed char var_8 = (signed char)-75;
unsigned long long int var_10 = 12771363512099511121ULL;
unsigned short var_11 = (unsigned short)9396;
unsigned short var_14 = (unsigned short)2692;
int zero = 0;
long long int var_16 = -1248345991314622458LL;
int var_17 = 177543545;
signed char var_18 = (signed char)-105;
signed char var_19 = (signed char)-116;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
