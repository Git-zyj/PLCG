#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 14685715890419730775ULL;
long long int var_3 = 1710542650119096334LL;
long long int var_6 = -1171514931151798679LL;
short var_8 = (short)-20417;
unsigned short var_13 = (unsigned short)48027;
long long int var_14 = -6969115599840723138LL;
int var_15 = 1839829017;
int zero = 0;
unsigned int var_16 = 3669698912U;
unsigned int var_17 = 3223889441U;
unsigned short var_18 = (unsigned short)22787;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
