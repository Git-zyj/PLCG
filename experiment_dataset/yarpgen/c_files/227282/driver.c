#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)17688;
long long int var_1 = -8745698642485538834LL;
int var_2 = -526538349;
long long int var_3 = 904980542433238345LL;
unsigned char var_4 = (unsigned char)187;
unsigned char var_7 = (unsigned char)170;
unsigned char var_9 = (unsigned char)16;
unsigned char var_10 = (unsigned char)97;
int zero = 0;
int var_12 = -261296699;
unsigned char var_13 = (unsigned char)157;
_Bool var_14 = (_Bool)1;
unsigned short var_15 = (unsigned short)51284;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
