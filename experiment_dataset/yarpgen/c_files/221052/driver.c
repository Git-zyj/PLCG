#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)19998;
short var_1 = (short)12404;
unsigned short var_3 = (unsigned short)59749;
long long int var_4 = 2219698643054211800LL;
unsigned short var_5 = (unsigned short)43111;
unsigned int var_8 = 3493225955U;
unsigned short var_9 = (unsigned short)38955;
int zero = 0;
unsigned long long int var_10 = 8624262843052416756ULL;
unsigned long long int var_11 = 1074813432451344713ULL;
short var_12 = (short)-10188;
long long int var_13 = -5547809417454365889LL;
short var_14 = (short)18052;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
