#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 5493158218972847517LL;
long long int var_4 = 4904543777691606865LL;
long long int var_12 = 1135065075668942321LL;
int zero = 0;
short var_19 = (short)-5065;
long long int var_20 = 7746040836508718638LL;
unsigned short var_21 = (unsigned short)47580;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
