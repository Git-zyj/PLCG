#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 16048654903122399913ULL;
_Bool var_1 = (_Bool)1;
unsigned long long int var_2 = 12963409594682942527ULL;
unsigned char var_3 = (unsigned char)239;
_Bool var_4 = (_Bool)1;
unsigned int var_5 = 1980704777U;
unsigned long long int var_6 = 11883848594769460107ULL;
long long int var_7 = -9133499717217882032LL;
unsigned short var_8 = (unsigned short)63391;
long long int var_9 = -3138833469524658747LL;
short var_10 = (short)13956;
unsigned long long int var_11 = 14019861235384603398ULL;
signed char var_13 = (signed char)59;
unsigned long long int var_14 = 9919329493854030235ULL;
_Bool var_15 = (_Bool)1;
signed char var_16 = (signed char)96;
int zero = 0;
int var_17 = 1027126383;
unsigned long long int var_18 = 14165415674899000922ULL;
long long int var_19 = -2259009122702693928LL;
unsigned long long int var_20 = 10280905749174745936ULL;
signed char var_21 = (signed char)-70;
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
