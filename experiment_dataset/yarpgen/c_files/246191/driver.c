#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-14954;
unsigned int var_1 = 161608348U;
unsigned int var_2 = 510426459U;
int var_3 = -322801986;
long long int var_4 = -6783416229245230614LL;
unsigned int var_5 = 3427046414U;
short var_6 = (short)-31501;
int var_9 = -428968154;
unsigned int var_10 = 837770635U;
int zero = 0;
unsigned int var_11 = 4157713788U;
signed char var_12 = (signed char)121;
short var_13 = (short)-12990;
int var_14 = -432878647;
void init() {
}

void checksum() {
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
