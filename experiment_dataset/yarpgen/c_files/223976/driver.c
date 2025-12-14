#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-102;
short var_1 = (short)-20464;
unsigned short var_2 = (unsigned short)56803;
signed char var_3 = (signed char)-121;
signed char var_4 = (signed char)-44;
unsigned long long int var_5 = 3751951669010822879ULL;
signed char var_6 = (signed char)113;
_Bool var_8 = (_Bool)0;
signed char var_9 = (signed char)-35;
unsigned char var_10 = (unsigned char)145;
unsigned int var_11 = 2714862064U;
int zero = 0;
short var_12 = (short)30377;
unsigned long long int var_13 = 16574612281283575568ULL;
_Bool var_14 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
