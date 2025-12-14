#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 4547544789684390103LL;
signed char var_1 = (signed char)10;
int var_2 = -813929874;
unsigned short var_3 = (unsigned short)51158;
short var_4 = (short)27554;
short var_5 = (short)6630;
_Bool var_6 = (_Bool)1;
int var_8 = 178468853;
short var_10 = (short)-26011;
unsigned int var_13 = 1621610672U;
unsigned int var_14 = 1207374015U;
signed char var_15 = (signed char)-77;
signed char var_16 = (signed char)-126;
int var_17 = 655680846;
int zero = 0;
unsigned int var_18 = 1143966062U;
signed char var_19 = (signed char)-105;
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
