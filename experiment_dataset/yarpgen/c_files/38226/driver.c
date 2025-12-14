#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-123;
short var_1 = (short)-27083;
signed char var_4 = (signed char)-54;
signed char var_8 = (signed char)10;
unsigned char var_9 = (unsigned char)18;
signed char var_11 = (signed char)-44;
unsigned char var_13 = (unsigned char)29;
unsigned long long int var_14 = 1844591987462500125ULL;
unsigned short var_15 = (unsigned short)36994;
_Bool var_17 = (_Bool)0;
int zero = 0;
long long int var_18 = 6971359445481330373LL;
unsigned char var_19 = (unsigned char)130;
signed char var_20 = (signed char)115;
void init() {
}

void checksum() {
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
