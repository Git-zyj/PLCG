#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 2801374315407499378ULL;
int var_2 = 632879665;
int var_3 = 890043630;
_Bool var_4 = (_Bool)0;
long long int var_7 = -741381115606821621LL;
short var_8 = (short)11772;
int var_9 = 285420105;
unsigned short var_14 = (unsigned short)19297;
unsigned long long int var_16 = 3813383233347376977ULL;
short var_18 = (short)-17747;
int zero = 0;
unsigned long long int var_19 = 4392097753430301661ULL;
unsigned int var_20 = 484379392U;
long long int var_21 = 8134376013551612218LL;
unsigned int var_22 = 1394004434U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
