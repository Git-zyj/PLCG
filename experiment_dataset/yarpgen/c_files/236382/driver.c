#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-20556;
_Bool var_3 = (_Bool)1;
unsigned long long int var_4 = 10531178477256391947ULL;
unsigned char var_5 = (unsigned char)198;
_Bool var_8 = (_Bool)0;
long long int var_9 = -5164750317917681441LL;
int var_12 = -1179700402;
int zero = 0;
signed char var_15 = (signed char)25;
long long int var_16 = 7800278185014597402LL;
_Bool var_17 = (_Bool)0;
int var_18 = -446704602;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
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
