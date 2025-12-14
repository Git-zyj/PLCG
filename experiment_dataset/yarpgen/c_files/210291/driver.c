#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_7 = 7605401233733002916ULL;
_Bool var_9 = (_Bool)1;
short var_10 = (short)-8538;
_Bool var_11 = (_Bool)1;
int zero = 0;
unsigned char var_17 = (unsigned char)38;
unsigned long long int var_18 = 5841440706021286150ULL;
_Bool var_19 = (_Bool)1;
unsigned char var_20 = (unsigned char)217;
unsigned long long int var_21 = 16798818248739614601ULL;
unsigned long long int var_22 = 4243245046993833029ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
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
