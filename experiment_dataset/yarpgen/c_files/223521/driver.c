#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)25822;
unsigned char var_1 = (unsigned char)223;
unsigned long long int var_2 = 5979232123005709734ULL;
unsigned long long int var_3 = 7787340962111259360ULL;
unsigned int var_4 = 1016490943U;
_Bool var_6 = (_Bool)0;
int var_9 = -80127295;
int var_11 = -1288210091;
_Bool var_12 = (_Bool)0;
int zero = 0;
unsigned short var_14 = (unsigned short)50940;
unsigned char var_15 = (unsigned char)102;
_Bool var_16 = (_Bool)1;
unsigned long long int var_17 = 12237896558252148259ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
