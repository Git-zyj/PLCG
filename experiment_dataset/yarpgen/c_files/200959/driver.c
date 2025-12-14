#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 14918478447212885830ULL;
unsigned short var_2 = (unsigned short)32945;
long long int var_3 = 3662103079067278029LL;
_Bool var_6 = (_Bool)1;
_Bool var_8 = (_Bool)0;
int var_9 = -184762159;
int var_12 = 787894995;
_Bool var_18 = (_Bool)0;
int zero = 0;
signed char var_19 = (signed char)-43;
unsigned char var_20 = (unsigned char)202;
void init() {
}

void checksum() {
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
