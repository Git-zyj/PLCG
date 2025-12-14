#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)29;
long long int var_2 = 3528723723720335188LL;
long long int var_3 = -2052237638248892749LL;
int var_4 = -1447451895;
signed char var_5 = (signed char)-46;
unsigned short var_6 = (unsigned short)30321;
long long int var_8 = -1064624972902032470LL;
unsigned char var_9 = (unsigned char)177;
unsigned long long int var_12 = 8981623092419395489ULL;
int zero = 0;
int var_13 = -1597887574;
signed char var_14 = (signed char)33;
unsigned char var_15 = (unsigned char)125;
void init() {
}

void checksum() {
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
