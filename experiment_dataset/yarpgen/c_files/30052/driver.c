#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-5605;
_Bool var_2 = (_Bool)0;
short var_4 = (short)22829;
long long int var_5 = -5146733070194984308LL;
unsigned long long int var_7 = 14705632192161889072ULL;
unsigned long long int var_8 = 16141100993220447336ULL;
unsigned char var_9 = (unsigned char)106;
long long int var_10 = -778195439676800226LL;
int zero = 0;
unsigned char var_12 = (unsigned char)150;
int var_13 = -2045042817;
void init() {
}

void checksum() {
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
