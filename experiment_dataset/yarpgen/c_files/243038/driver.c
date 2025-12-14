#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-4519;
unsigned short var_4 = (unsigned short)2686;
unsigned int var_5 = 3348926316U;
signed char var_6 = (signed char)109;
int var_7 = -1296840791;
unsigned int var_8 = 1031096562U;
unsigned short var_9 = (unsigned short)986;
unsigned char var_11 = (unsigned char)53;
signed char var_14 = (signed char)-49;
unsigned int var_15 = 130755521U;
signed char var_16 = (signed char)-52;
int zero = 0;
int var_18 = -1002838983;
unsigned short var_19 = (unsigned short)31039;
signed char var_20 = (signed char)43;
_Bool var_21 = (_Bool)0;
long long int var_22 = -4096560080236021199LL;
unsigned int var_23 = 1427288015U;
_Bool var_24 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
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
