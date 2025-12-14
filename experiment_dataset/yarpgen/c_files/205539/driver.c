#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1401231699U;
unsigned char var_1 = (unsigned char)164;
int var_2 = -1666912099;
unsigned long long int var_3 = 7730520429984371336ULL;
unsigned int var_4 = 584102386U;
signed char var_5 = (signed char)115;
_Bool var_6 = (_Bool)0;
unsigned long long int var_7 = 11924257009711482156ULL;
int var_8 = -1498802701;
long long int var_9 = 7036454656542883863LL;
int zero = 0;
unsigned long long int var_10 = 8815925338634837722ULL;
int var_11 = -1089671577;
_Bool var_12 = (_Bool)1;
unsigned short var_13 = (unsigned short)56886;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
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
