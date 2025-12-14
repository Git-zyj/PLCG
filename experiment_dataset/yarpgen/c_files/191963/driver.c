#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)67;
signed char var_5 = (signed char)-57;
signed char var_9 = (signed char)75;
signed char var_10 = (signed char)13;
_Bool var_11 = (_Bool)1;
unsigned long long int var_12 = 8944901251347891410ULL;
unsigned char var_15 = (unsigned char)50;
_Bool var_16 = (_Bool)0;
unsigned short var_17 = (unsigned short)7368;
_Bool var_18 = (_Bool)0;
int zero = 0;
short var_19 = (short)25929;
signed char var_20 = (signed char)108;
int var_21 = 661992011;
void init() {
}

void checksum() {
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
