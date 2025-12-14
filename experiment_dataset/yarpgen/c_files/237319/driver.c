#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 557769072U;
unsigned long long int var_1 = 12720523361059509920ULL;
long long int var_5 = -502134961945883391LL;
unsigned long long int var_8 = 10959378516448960093ULL;
unsigned char var_9 = (unsigned char)202;
int zero = 0;
unsigned char var_11 = (unsigned char)217;
unsigned short var_12 = (unsigned short)19333;
long long int var_13 = -3676240442515735286LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
