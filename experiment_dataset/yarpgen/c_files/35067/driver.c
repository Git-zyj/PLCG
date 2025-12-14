#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 872220223U;
unsigned long long int var_2 = 9234223233284098078ULL;
unsigned int var_3 = 3909107703U;
unsigned char var_4 = (unsigned char)153;
signed char var_5 = (signed char)73;
short var_6 = (short)24798;
short var_8 = (short)20838;
unsigned int var_9 = 3932022328U;
long long int var_11 = -787562059152836700LL;
int zero = 0;
unsigned long long int var_12 = 8732845870768195740ULL;
unsigned long long int var_13 = 16004664602817950633ULL;
unsigned int var_14 = 3503893976U;
void init() {
}

void checksum() {
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
