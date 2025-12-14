#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-15080;
long long int var_1 = 416975560883168156LL;
unsigned char var_2 = (unsigned char)226;
unsigned int var_4 = 1856070705U;
unsigned short var_7 = (unsigned short)59296;
unsigned long long int var_8 = 18439661741058467809ULL;
long long int var_9 = -9065834868348273940LL;
unsigned long long int var_10 = 9694792778351423264ULL;
short var_11 = (short)-24652;
long long int var_12 = 7795064537347228829LL;
unsigned int var_13 = 3257160586U;
int zero = 0;
unsigned long long int var_14 = 10465360718798708533ULL;
unsigned long long int var_15 = 2724363084424678527ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
