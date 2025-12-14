#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)210;
unsigned long long int var_4 = 16429237987737067106ULL;
short var_5 = (short)-3740;
unsigned short var_6 = (unsigned short)14377;
signed char var_9 = (signed char)-80;
_Bool var_10 = (_Bool)0;
signed char var_11 = (signed char)-123;
unsigned long long int var_14 = 6565879497781387161ULL;
_Bool var_16 = (_Bool)1;
unsigned short var_19 = (unsigned short)45379;
int zero = 0;
unsigned long long int var_20 = 14910434140081823175ULL;
signed char var_21 = (signed char)15;
signed char var_22 = (signed char)-114;
signed char var_23 = (signed char)52;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
