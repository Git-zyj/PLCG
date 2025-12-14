#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)212;
int var_1 = 1181890017;
unsigned long long int var_2 = 1398035616543510717ULL;
_Bool var_3 = (_Bool)1;
long long int var_5 = -492242091095709062LL;
long long int var_9 = 6102539488069167708LL;
_Bool var_12 = (_Bool)0;
unsigned long long int var_13 = 7658175346901457321ULL;
unsigned int var_15 = 1523623534U;
_Bool var_16 = (_Bool)0;
int zero = 0;
unsigned short var_17 = (unsigned short)30334;
int var_18 = -129787650;
signed char var_19 = (signed char)-107;
unsigned char var_20 = (unsigned char)135;
_Bool var_21 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
