#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)11507;
unsigned int var_3 = 4191774263U;
unsigned int var_4 = 2329272756U;
long long int var_6 = 3055701877654781963LL;
long long int var_7 = -5563378436054470864LL;
unsigned short var_9 = (unsigned short)19868;
unsigned short var_10 = (unsigned short)26843;
long long int var_16 = -993500725353786862LL;
int zero = 0;
unsigned int var_19 = 272317126U;
unsigned int var_20 = 1066469967U;
_Bool var_21 = (_Bool)0;
int var_22 = -1497299894;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
