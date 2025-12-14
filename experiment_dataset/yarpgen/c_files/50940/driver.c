#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)38724;
unsigned short var_4 = (unsigned short)52947;
short var_7 = (short)8588;
signed char var_8 = (signed char)-54;
short var_9 = (short)-21189;
int var_13 = -148520344;
unsigned long long int var_14 = 12987582505385176310ULL;
unsigned long long int var_15 = 6812873055323671710ULL;
short var_17 = (short)20975;
unsigned short var_18 = (unsigned short)18357;
_Bool var_19 = (_Bool)0;
int zero = 0;
short var_20 = (short)-10088;
unsigned long long int var_21 = 9417530330485329748ULL;
signed char var_22 = (signed char)-6;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
