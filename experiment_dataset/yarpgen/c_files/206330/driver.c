#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)341;
unsigned short var_14 = (unsigned short)25264;
int zero = 0;
signed char var_17 = (signed char)122;
unsigned long long int var_18 = 8041040548676096279ULL;
unsigned long long int var_19 = 9986095014373099283ULL;
void init() {
}

void checksum() {
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
