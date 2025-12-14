#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -410675765;
signed char var_4 = (signed char)-85;
unsigned long long int var_7 = 18002293273754772499ULL;
long long int var_10 = 6399752653973484286LL;
unsigned char var_13 = (unsigned char)63;
short var_15 = (short)11868;
unsigned int var_16 = 2044518620U;
short var_17 = (short)5933;
unsigned short var_18 = (unsigned short)57771;
int zero = 0;
long long int var_20 = 5190591514202670610LL;
unsigned long long int var_21 = 11108851565522979335ULL;
int var_22 = 480960180;
void init() {
}

void checksum() {
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
