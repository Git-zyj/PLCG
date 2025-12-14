#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 4834277872600176323LL;
unsigned char var_7 = (unsigned char)133;
unsigned short var_9 = (unsigned short)22121;
short var_11 = (short)880;
unsigned long long int var_12 = 7783142755944179128ULL;
int zero = 0;
unsigned int var_18 = 4178587817U;
unsigned short var_19 = (unsigned short)57286;
unsigned char var_20 = (unsigned char)22;
unsigned long long int var_21 = 11349866456661290907ULL;
unsigned long long int var_22 = 12950754263040142050ULL;
void init() {
}

void checksum() {
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
