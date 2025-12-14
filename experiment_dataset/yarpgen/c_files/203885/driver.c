#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-39;
unsigned short var_1 = (unsigned short)12420;
unsigned short var_4 = (unsigned short)18768;
unsigned short var_6 = (unsigned short)16362;
unsigned long long int var_7 = 4414573388207367543ULL;
short var_8 = (short)-10556;
long long int var_9 = 4588778723441881563LL;
int zero = 0;
signed char var_11 = (signed char)115;
unsigned long long int var_12 = 16338561851900400303ULL;
unsigned char var_13 = (unsigned char)216;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
