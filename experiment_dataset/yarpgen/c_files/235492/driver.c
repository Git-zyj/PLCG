#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)52573;
unsigned short var_6 = (unsigned short)30635;
signed char var_7 = (signed char)-111;
long long int var_8 = 6945808178044626000LL;
unsigned long long int var_9 = 14427626221321342634ULL;
signed char var_10 = (signed char)-114;
unsigned long long int var_11 = 8161841880348998031ULL;
int zero = 0;
long long int var_12 = -6490243870721222559LL;
long long int var_13 = -3478820013227779215LL;
signed char var_14 = (signed char)92;
long long int var_15 = 4270611828036781309LL;
unsigned long long int var_16 = 12988850218421286421ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
