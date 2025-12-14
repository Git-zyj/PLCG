#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 777404290U;
int var_1 = 1280550501;
signed char var_2 = (signed char)-15;
long long int var_3 = -4316830099735335426LL;
int var_7 = 1881970554;
unsigned int var_9 = 3111384335U;
signed char var_10 = (signed char)95;
signed char var_11 = (signed char)32;
unsigned char var_13 = (unsigned char)218;
_Bool var_14 = (_Bool)0;
unsigned int var_15 = 2784473275U;
unsigned int var_16 = 3725279574U;
int zero = 0;
_Bool var_18 = (_Bool)0;
unsigned int var_19 = 2853708587U;
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
