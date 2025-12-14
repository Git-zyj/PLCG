#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-7155;
long long int var_3 = 527143095033702087LL;
short var_6 = (short)-13608;
unsigned char var_7 = (unsigned char)174;
unsigned short var_13 = (unsigned short)41578;
int var_15 = 483924139;
unsigned long long int var_16 = 11908831284362070687ULL;
unsigned long long int var_17 = 17594796585270274365ULL;
long long int var_18 = -6026368226731729771LL;
int zero = 0;
signed char var_19 = (signed char)-9;
unsigned char var_20 = (unsigned char)244;
short var_21 = (short)-27712;
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
