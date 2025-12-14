#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -1586152730422042784LL;
long long int var_1 = -3489552901361015239LL;
_Bool var_2 = (_Bool)1;
long long int var_3 = 1247323632806464459LL;
short var_4 = (short)-759;
unsigned char var_5 = (unsigned char)234;
short var_6 = (short)-19216;
unsigned char var_8 = (unsigned char)19;
unsigned char var_9 = (unsigned char)222;
unsigned char var_10 = (unsigned char)21;
long long int var_11 = 6853850414218894037LL;
long long int var_12 = -293268203833285936LL;
long long int var_13 = 8570420841113132967LL;
unsigned char var_14 = (unsigned char)96;
int zero = 0;
short var_15 = (short)-21099;
unsigned short var_16 = (unsigned short)27129;
signed char var_17 = (signed char)-40;
signed char var_18 = (signed char)-92;
unsigned int var_19 = 3353989149U;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
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
