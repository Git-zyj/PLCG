#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1458890332;
unsigned long long int var_1 = 3998143367004833020ULL;
unsigned long long int var_2 = 16398076545100282175ULL;
int var_3 = 74173828;
_Bool var_4 = (_Bool)0;
unsigned long long int var_5 = 18229366897850807596ULL;
int var_6 = -1451513306;
unsigned short var_7 = (unsigned short)31154;
unsigned long long int var_8 = 9012796402256197487ULL;
unsigned char var_9 = (unsigned char)82;
unsigned char var_10 = (unsigned char)223;
unsigned long long int var_11 = 6904770890129782219ULL;
int zero = 0;
_Bool var_12 = (_Bool)1;
unsigned long long int var_13 = 710880917694975457ULL;
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
