#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1470795218U;
short var_1 = (short)4655;
unsigned int var_2 = 3891947541U;
unsigned int var_4 = 1397741690U;
unsigned long long int var_5 = 8585038843426267514ULL;
unsigned int var_6 = 2509339104U;
unsigned long long int var_8 = 10685387420054630711ULL;
short var_9 = (short)-31624;
short var_10 = (short)6466;
unsigned int var_12 = 3761571997U;
unsigned int var_13 = 2128910589U;
int zero = 0;
unsigned int var_14 = 2062184002U;
unsigned long long int var_15 = 8846199600809426982ULL;
unsigned int var_16 = 3542601678U;
short var_17 = (short)-17820;
unsigned int var_18 = 495554179U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
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
