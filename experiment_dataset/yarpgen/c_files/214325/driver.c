#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -499512233;
unsigned int var_4 = 3265471637U;
unsigned long long int var_9 = 3471469495216606598ULL;
int var_11 = -1814028995;
int zero = 0;
unsigned short var_18 = (unsigned short)40846;
unsigned short var_19 = (unsigned short)64332;
_Bool var_20 = (_Bool)1;
void init() {
}

void checksum() {
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
