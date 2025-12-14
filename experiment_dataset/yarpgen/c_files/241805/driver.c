#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 3737862088U;
unsigned char var_7 = (unsigned char)194;
int var_9 = -1140374346;
_Bool var_14 = (_Bool)1;
unsigned char var_17 = (unsigned char)12;
unsigned int var_18 = 1392979629U;
_Bool var_19 = (_Bool)1;
int zero = 0;
long long int var_20 = 5391378055848807373LL;
unsigned long long int var_21 = 13085507854314329451ULL;
signed char var_22 = (signed char)-39;
int var_23 = -764223287;
unsigned short var_24 = (unsigned short)51342;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
