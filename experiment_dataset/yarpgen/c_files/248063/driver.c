#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -6000348443541063000LL;
signed char var_2 = (signed char)-38;
signed char var_4 = (signed char)59;
unsigned short var_5 = (unsigned short)64434;
short var_6 = (short)-6733;
unsigned char var_7 = (unsigned char)194;
short var_8 = (short)9429;
signed char var_9 = (signed char)19;
unsigned long long int var_10 = 17512014162090600842ULL;
unsigned char var_12 = (unsigned char)110;
unsigned char var_14 = (unsigned char)60;
short var_15 = (short)-5106;
int var_16 = -533897385;
unsigned long long int var_17 = 3730155674631005975ULL;
int zero = 0;
unsigned int var_19 = 1342328270U;
unsigned int var_20 = 3030036259U;
short var_21 = (short)8243;
short var_22 = (short)-27600;
unsigned char var_23 = (unsigned char)199;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
