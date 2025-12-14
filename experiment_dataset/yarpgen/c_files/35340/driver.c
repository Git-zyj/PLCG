#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1800580157;
unsigned char var_3 = (unsigned char)212;
long long int var_4 = 4390291102553251623LL;
int var_5 = 931509380;
unsigned short var_6 = (unsigned short)51156;
unsigned char var_8 = (unsigned char)193;
signed char var_9 = (signed char)-102;
int zero = 0;
short var_10 = (short)23084;
unsigned int var_11 = 1744347602U;
int var_12 = 1560268595;
int var_13 = 1198468494;
long long int var_14 = 1939915685275384079LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
