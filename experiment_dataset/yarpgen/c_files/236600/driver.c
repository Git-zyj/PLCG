#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 2888846890603326869LL;
unsigned short var_3 = (unsigned short)44429;
long long int var_5 = -416223212950270337LL;
long long int var_6 = 4572662619044946410LL;
long long int var_7 = 4027635198533961450LL;
long long int var_8 = 9145782544479573729LL;
signed char var_9 = (signed char)111;
int zero = 0;
unsigned int var_14 = 1205492679U;
unsigned int var_15 = 942737752U;
unsigned char var_16 = (unsigned char)44;
unsigned char var_17 = (unsigned char)51;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
