#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3994462912U;
unsigned short var_4 = (unsigned short)887;
signed char var_8 = (signed char)20;
long long int var_9 = -7687509359554518747LL;
long long int var_10 = -8080471682859767637LL;
long long int var_16 = 7063836326667484357LL;
unsigned short var_17 = (unsigned short)45561;
int zero = 0;
signed char var_18 = (signed char)-108;
long long int var_19 = 5516861211473461419LL;
void init() {
}

void checksum() {
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
