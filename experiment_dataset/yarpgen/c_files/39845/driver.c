#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)22117;
unsigned long long int var_5 = 6666937664096649342ULL;
int var_8 = 1825156225;
unsigned long long int var_12 = 215520019461401389ULL;
int var_18 = 1434063334;
int zero = 0;
unsigned char var_20 = (unsigned char)21;
unsigned long long int var_21 = 5052628010998689135ULL;
unsigned char var_22 = (unsigned char)15;
unsigned int var_23 = 540115859U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
