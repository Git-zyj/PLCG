#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)62749;
unsigned short var_3 = (unsigned short)22414;
long long int var_4 = -521648905628052975LL;
unsigned short var_5 = (unsigned short)26584;
long long int var_7 = -4854012050008617841LL;
unsigned long long int var_8 = 13418949526267917725ULL;
signed char var_9 = (signed char)-44;
int zero = 0;
long long int var_13 = 8547222208777200511LL;
unsigned char var_14 = (unsigned char)181;
void init() {
}

void checksum() {
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
