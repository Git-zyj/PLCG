#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 3467345776180636226ULL;
unsigned int var_2 = 905807396U;
_Bool var_3 = (_Bool)0;
int var_4 = 1810764540;
unsigned char var_5 = (unsigned char)134;
long long int var_6 = 4906037948635482194LL;
unsigned short var_8 = (unsigned short)51273;
unsigned int var_10 = 1562806551U;
int var_11 = 517868501;
unsigned long long int var_12 = 13584484993065696777ULL;
int var_13 = -118696282;
unsigned long long int var_14 = 7253302520950164424ULL;
unsigned int var_15 = 1388828702U;
long long int var_16 = -3070735719222484265LL;
unsigned short var_18 = (unsigned short)15744;
int zero = 0;
unsigned short var_19 = (unsigned short)17044;
signed char var_20 = (signed char)-94;
short var_21 = (short)-6661;
unsigned long long int var_22 = 1026200134447190020ULL;
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
