#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -5313959312909898963LL;
signed char var_1 = (signed char)-67;
short var_2 = (short)8350;
int var_3 = 17036467;
unsigned long long int var_4 = 989891808038083616ULL;
short var_6 = (short)14733;
unsigned long long int var_9 = 8204218013719018056ULL;
unsigned short var_10 = (unsigned short)61143;
long long int var_12 = -8024626573375596569LL;
int zero = 0;
unsigned long long int var_13 = 15551529376312513608ULL;
long long int var_14 = -532731557997210981LL;
unsigned int var_15 = 130176136U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
