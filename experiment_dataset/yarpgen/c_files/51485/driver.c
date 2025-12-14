#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 7692355746405171332LL;
short var_2 = (short)15312;
unsigned char var_4 = (unsigned char)54;
unsigned short var_7 = (unsigned short)55676;
unsigned int var_8 = 3270972562U;
unsigned char var_9 = (unsigned char)239;
long long int var_11 = 4242519269816999753LL;
int var_13 = -1463797368;
int zero = 0;
unsigned short var_14 = (unsigned short)54045;
signed char var_15 = (signed char)-51;
int var_16 = -563468623;
int var_17 = 757333969;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
