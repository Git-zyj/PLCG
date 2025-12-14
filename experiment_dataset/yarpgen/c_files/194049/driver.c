#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-66;
short var_3 = (short)-10719;
unsigned short var_5 = (unsigned short)59673;
unsigned char var_6 = (unsigned char)156;
unsigned short var_7 = (unsigned short)30444;
unsigned long long int var_10 = 14971784337193232915ULL;
short var_12 = (short)-8990;
unsigned short var_14 = (unsigned short)37045;
unsigned char var_16 = (unsigned char)151;
int zero = 0;
unsigned short var_17 = (unsigned short)25150;
unsigned char var_18 = (unsigned char)235;
unsigned short var_19 = (unsigned short)51919;
unsigned char var_20 = (unsigned char)79;
long long int var_21 = -1000023143160708265LL;
_Bool var_22 = (_Bool)1;
long long int var_23 = -1792496324560884945LL;
short var_24 = (short)9296;
short arr_1 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? (short)-29085 : (short)2926;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
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
