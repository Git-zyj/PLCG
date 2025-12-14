#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)49348;
unsigned short var_1 = (unsigned short)32332;
signed char var_2 = (signed char)-42;
int var_3 = 931152161;
long long int var_5 = 119902258783795565LL;
unsigned short var_6 = (unsigned short)42115;
unsigned short var_7 = (unsigned short)59868;
unsigned int var_9 = 160474263U;
unsigned short var_10 = (unsigned short)37253;
unsigned long long int var_11 = 5487941272675812335ULL;
unsigned char var_17 = (unsigned char)32;
int zero = 0;
signed char var_18 = (signed char)76;
unsigned short var_19 = (unsigned short)47489;
unsigned long long int var_20 = 17424379567692398778ULL;
_Bool var_21 = (_Bool)1;
void init() {
}

void checksum() {
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
