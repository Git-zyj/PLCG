#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 5860326028689467650LL;
unsigned int var_1 = 3359987288U;
_Bool var_2 = (_Bool)0;
signed char var_3 = (signed char)46;
int var_4 = -1207687480;
unsigned int var_5 = 142729065U;
unsigned char var_6 = (unsigned char)21;
_Bool var_7 = (_Bool)0;
unsigned long long int var_8 = 5169005176240941981ULL;
unsigned long long int var_9 = 14641400342785764345ULL;
short var_10 = (short)9212;
_Bool var_11 = (_Bool)0;
unsigned int var_14 = 2470632270U;
unsigned long long int var_15 = 2914505544847138474ULL;
_Bool var_16 = (_Bool)1;
unsigned char var_17 = (unsigned char)119;
unsigned int var_18 = 4029659595U;
unsigned int var_19 = 1007157024U;
int zero = 0;
unsigned long long int var_20 = 12202943074174454407ULL;
unsigned short var_21 = (unsigned short)36183;
unsigned short var_22 = (unsigned short)10041;
unsigned int var_23 = 2756394684U;
void init() {
}

void checksum() {
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
