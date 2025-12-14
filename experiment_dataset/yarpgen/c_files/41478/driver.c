#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-8317;
long long int var_4 = -1888668191673051820LL;
int var_6 = -435436864;
signed char var_7 = (signed char)-37;
short var_9 = (short)-31688;
int var_12 = -2029492564;
unsigned short var_15 = (unsigned short)26308;
int zero = 0;
unsigned int var_16 = 1543823U;
unsigned short var_17 = (unsigned short)170;
unsigned int var_18 = 2537356075U;
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
