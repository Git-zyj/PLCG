#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)53049;
unsigned int var_2 = 3295294733U;
signed char var_3 = (signed char)127;
_Bool var_5 = (_Bool)0;
unsigned char var_7 = (unsigned char)152;
int var_9 = 1703118261;
int var_13 = -229291644;
unsigned long long int var_14 = 12980956952133248750ULL;
int zero = 0;
long long int var_18 = -5669615866874994001LL;
unsigned int var_19 = 3337087998U;
signed char var_20 = (signed char)12;
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
