#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)51;
_Bool var_1 = (_Bool)0;
_Bool var_2 = (_Bool)1;
unsigned char var_3 = (unsigned char)87;
unsigned short var_4 = (unsigned short)36420;
_Bool var_5 = (_Bool)1;
unsigned int var_6 = 324755163U;
signed char var_7 = (signed char)-72;
unsigned long long int var_8 = 10487398660082780317ULL;
long long int var_10 = -4569308977084660882LL;
int zero = 0;
long long int var_11 = -5172861241955009477LL;
signed char var_12 = (signed char)-68;
_Bool var_13 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
