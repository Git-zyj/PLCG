#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)23031;
signed char var_3 = (signed char)-95;
int var_6 = -1896539468;
long long int var_7 = 2119008387796870100LL;
unsigned int var_9 = 2998722570U;
unsigned long long int var_12 = 17095347947468649986ULL;
signed char var_16 = (signed char)46;
int var_17 = 410378679;
int zero = 0;
signed char var_18 = (signed char)-9;
long long int var_19 = 5193820428559574662LL;
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
