#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 348313795U;
unsigned short var_3 = (unsigned short)42974;
signed char var_4 = (signed char)-113;
short var_8 = (short)19595;
int var_9 = 293292385;
unsigned short var_11 = (unsigned short)16684;
int zero = 0;
long long int var_12 = 6058625198644623762LL;
_Bool var_13 = (_Bool)0;
void init() {
}

void checksum() {
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
