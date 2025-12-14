#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)31863;
unsigned short var_3 = (unsigned short)63981;
unsigned short var_6 = (unsigned short)58751;
signed char var_8 = (signed char)92;
signed char var_14 = (signed char)-106;
unsigned short var_15 = (unsigned short)57260;
int zero = 0;
unsigned short var_16 = (unsigned short)41059;
unsigned short var_17 = (unsigned short)33462;
_Bool var_18 = (_Bool)1;
signed char var_19 = (signed char)-24;
unsigned long long int var_20 = 13474643520854643349ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
