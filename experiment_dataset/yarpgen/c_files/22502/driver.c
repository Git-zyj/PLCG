#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)10112;
int var_5 = 83280612;
signed char var_8 = (signed char)-76;
long long int var_9 = 2462358157363545797LL;
int zero = 0;
unsigned long long int var_15 = 7678724183351226562ULL;
int var_16 = 1014535926;
_Bool var_17 = (_Bool)0;
int var_18 = -133237827;
unsigned long long int var_19 = 14816113165730706716ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
