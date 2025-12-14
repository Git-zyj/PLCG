#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-62;
unsigned long long int var_3 = 6075865858877304545ULL;
short var_5 = (short)28165;
long long int var_6 = 3400459461652431531LL;
int var_9 = 755846989;
long long int var_11 = -3456521564258702082LL;
long long int var_12 = 7312720484862212757LL;
short var_14 = (short)16651;
int zero = 0;
_Bool var_19 = (_Bool)0;
long long int var_20 = -483222849276352465LL;
long long int var_21 = -6032266372345895486LL;
unsigned int var_22 = 161027585U;
void init() {
}

void checksum() {
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
