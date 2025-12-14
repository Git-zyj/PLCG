#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)35259;
unsigned short var_1 = (unsigned short)41681;
unsigned short var_2 = (unsigned short)1707;
unsigned short var_3 = (unsigned short)25401;
unsigned short var_4 = (unsigned short)28336;
unsigned short var_6 = (unsigned short)22606;
unsigned short var_7 = (unsigned short)11975;
unsigned short var_8 = (unsigned short)22879;
unsigned short var_9 = (unsigned short)62447;
unsigned short var_13 = (unsigned short)26781;
unsigned short var_14 = (unsigned short)54910;
unsigned short var_15 = (unsigned short)25350;
int zero = 0;
unsigned short var_16 = (unsigned short)38727;
unsigned short var_17 = (unsigned short)46376;
unsigned short var_18 = (unsigned short)3670;
unsigned short var_19 = (unsigned short)44028;
unsigned short var_20 = (unsigned short)14311;
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
