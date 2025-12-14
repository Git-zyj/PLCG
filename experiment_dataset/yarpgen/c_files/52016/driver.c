#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 1328051820;
long long int var_4 = -7851273973517647513LL;
int var_6 = 584740933;
signed char var_8 = (signed char)78;
short var_9 = (short)23251;
int var_10 = -387305301;
short var_13 = (short)22531;
short var_16 = (short)22129;
int zero = 0;
int var_17 = 2005969351;
int var_18 = 1320731140;
unsigned short var_19 = (unsigned short)37853;
signed char var_20 = (signed char)53;
void init() {
}

void checksum() {
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
