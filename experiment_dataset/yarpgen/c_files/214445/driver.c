#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 760916856U;
long long int var_1 = 217325383642402712LL;
unsigned char var_3 = (unsigned char)173;
unsigned char var_6 = (unsigned char)175;
unsigned long long int var_11 = 11607861334943932900ULL;
unsigned long long int var_12 = 17725882446096629706ULL;
unsigned long long int var_16 = 8642888567482736890ULL;
int zero = 0;
signed char var_17 = (signed char)-94;
long long int var_18 = -5133091852610333129LL;
long long int var_19 = -6542514609942868904LL;
long long int var_20 = -5526945485674322151LL;
_Bool var_21 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
