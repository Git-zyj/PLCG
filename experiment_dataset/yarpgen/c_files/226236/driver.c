#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)188;
long long int var_2 = 2619095188967841439LL;
long long int var_4 = -1667457129545497973LL;
short var_5 = (short)16336;
unsigned long long int var_6 = 282144787296120637ULL;
unsigned char var_11 = (unsigned char)174;
unsigned char var_12 = (unsigned char)130;
int zero = 0;
_Bool var_13 = (_Bool)1;
long long int var_14 = -314587344918978343LL;
short var_15 = (short)22615;
unsigned long long int var_16 = 17057198088210445509ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
