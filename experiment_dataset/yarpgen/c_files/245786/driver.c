#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1648855994;
long long int var_1 = -2701576248471723728LL;
unsigned int var_2 = 2418336458U;
int var_6 = -616735257;
long long int var_7 = -947775689602473370LL;
long long int var_9 = 2170703303482447379LL;
unsigned char var_11 = (unsigned char)46;
unsigned short var_12 = (unsigned short)49569;
unsigned short var_13 = (unsigned short)24212;
int zero = 0;
signed char var_16 = (signed char)-73;
int var_17 = -2144563090;
int var_18 = -747619904;
signed char var_19 = (signed char)98;
int var_20 = 1670999775;
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
