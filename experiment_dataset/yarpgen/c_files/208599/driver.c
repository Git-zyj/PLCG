#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-127;
long long int var_8 = 2714489222420697552LL;
unsigned char var_9 = (unsigned char)33;
unsigned short var_11 = (unsigned short)62272;
int var_13 = 871822849;
int zero = 0;
unsigned char var_16 = (unsigned char)37;
unsigned long long int var_17 = 12336793344894944300ULL;
unsigned short var_18 = (unsigned short)44612;
unsigned long long int var_19 = 16535854111892934046ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
