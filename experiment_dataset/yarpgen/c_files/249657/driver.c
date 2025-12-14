#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)186;
_Bool var_1 = (_Bool)0;
unsigned long long int var_2 = 9922232456578487458ULL;
signed char var_3 = (signed char)90;
int var_4 = 1372544682;
_Bool var_5 = (_Bool)0;
unsigned long long int var_6 = 17624472447830710310ULL;
_Bool var_7 = (_Bool)1;
unsigned short var_8 = (unsigned short)12867;
int var_9 = 233540464;
signed char var_10 = (signed char)-27;
unsigned long long int var_11 = 14377887555231808467ULL;
_Bool var_13 = (_Bool)0;
_Bool var_14 = (_Bool)1;
signed char var_15 = (signed char)-87;
unsigned short var_16 = (unsigned short)1248;
long long int var_17 = 452726986578105068LL;
unsigned short var_18 = (unsigned short)43952;
unsigned short var_19 = (unsigned short)50985;
int zero = 0;
unsigned long long int var_20 = 16925108202119027872ULL;
long long int var_21 = -7036977672685400932LL;
unsigned long long int var_22 = 13124965941167534653ULL;
unsigned long long int var_23 = 14866639698440589540ULL;
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
