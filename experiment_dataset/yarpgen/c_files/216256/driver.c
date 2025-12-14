#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)34386;
unsigned char var_2 = (unsigned char)159;
unsigned char var_5 = (unsigned char)156;
_Bool var_7 = (_Bool)1;
int var_9 = -1583926655;
short var_14 = (short)-8731;
unsigned long long int var_15 = 17909240542939891046ULL;
unsigned short var_17 = (unsigned short)56330;
int zero = 0;
unsigned long long int var_18 = 17082023435327498777ULL;
_Bool var_19 = (_Bool)1;
void init() {
}

void checksum() {
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
