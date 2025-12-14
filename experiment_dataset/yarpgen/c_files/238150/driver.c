#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 796928239U;
unsigned short var_4 = (unsigned short)7012;
long long int var_5 = -2700300170812924928LL;
long long int var_6 = -214909207184417560LL;
unsigned long long int var_7 = 12903009163291590394ULL;
short var_9 = (short)-8712;
int zero = 0;
long long int var_10 = 2527933252122189357LL;
long long int var_11 = 1307873435151912041LL;
signed char var_12 = (signed char)-82;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
