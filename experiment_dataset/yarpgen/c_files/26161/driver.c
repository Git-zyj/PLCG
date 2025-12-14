#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 10239669320717337917ULL;
int var_2 = 983821400;
signed char var_5 = (signed char)34;
unsigned long long int var_6 = 9140781799406809621ULL;
_Bool var_9 = (_Bool)1;
int var_10 = -411026771;
short var_11 = (short)27238;
int var_12 = 1098941035;
_Bool var_14 = (_Bool)1;
int zero = 0;
unsigned short var_17 = (unsigned short)41123;
unsigned char var_18 = (unsigned char)62;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
