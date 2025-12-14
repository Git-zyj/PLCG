#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)70;
unsigned long long int var_4 = 17696778570340941281ULL;
_Bool var_5 = (_Bool)0;
signed char var_6 = (signed char)-72;
int var_8 = 1493307701;
signed char var_9 = (signed char)-118;
unsigned char var_10 = (unsigned char)250;
int zero = 0;
unsigned long long int var_11 = 11981776175939740342ULL;
short var_12 = (short)19121;
unsigned long long int var_13 = 8027817003955234182ULL;
unsigned char var_14 = (unsigned char)100;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
