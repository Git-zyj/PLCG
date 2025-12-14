#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_5 = (signed char)19;
int var_11 = 720836023;
long long int var_13 = -6542826186750769599LL;
signed char var_15 = (signed char)-77;
unsigned short var_18 = (unsigned short)12159;
unsigned long long int var_19 = 8437944836375549672ULL;
int zero = 0;
int var_20 = -1055724302;
int var_21 = 2123437721;
unsigned short var_22 = (unsigned short)27642;
unsigned short var_23 = (unsigned short)1535;
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
