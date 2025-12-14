#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1774636987;
_Bool var_1 = (_Bool)0;
int var_2 = -600481018;
unsigned long long int var_3 = 9801551096734191336ULL;
unsigned long long int var_4 = 15049306401153468637ULL;
unsigned char var_6 = (unsigned char)24;
int var_7 = -703297490;
unsigned long long int var_8 = 7241644921245497811ULL;
_Bool var_9 = (_Bool)1;
int zero = 0;
unsigned long long int var_12 = 16124945296803076127ULL;
unsigned long long int var_13 = 16893160666904075748ULL;
short var_14 = (short)9518;
signed char var_15 = (signed char)101;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
