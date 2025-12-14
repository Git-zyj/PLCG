#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 165287385;
unsigned int var_3 = 2115192365U;
unsigned short var_6 = (unsigned short)62264;
_Bool var_8 = (_Bool)1;
long long int var_9 = -5025582569333077247LL;
unsigned long long int var_10 = 13611577450929739719ULL;
int var_12 = 204015334;
signed char var_14 = (signed char)26;
int zero = 0;
unsigned long long int var_17 = 9221083098672472595ULL;
long long int var_18 = -7903874658536490746LL;
_Bool var_19 = (_Bool)1;
long long int var_20 = 4836454144919423861LL;
void init() {
}

void checksum() {
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
