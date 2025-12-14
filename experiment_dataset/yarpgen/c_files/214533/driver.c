#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_7 = 2424587505U;
unsigned long long int var_8 = 14246733945369213146ULL;
unsigned int var_9 = 2441529702U;
unsigned long long int var_11 = 12804643798200073228ULL;
signed char var_12 = (signed char)59;
unsigned char var_14 = (unsigned char)98;
unsigned long long int var_16 = 5036160075430644216ULL;
unsigned short var_17 = (unsigned short)17672;
int zero = 0;
unsigned char var_18 = (unsigned char)26;
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
