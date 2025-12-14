#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 1592633821260042039LL;
int var_3 = -1564604866;
unsigned int var_4 = 3508813567U;
int var_5 = -512716366;
unsigned long long int var_6 = 12469308820125140501ULL;
signed char var_7 = (signed char)-126;
_Bool var_8 = (_Bool)1;
unsigned short var_11 = (unsigned short)785;
int zero = 0;
long long int var_16 = -6797249738912588291LL;
unsigned int var_17 = 1706205092U;
unsigned int var_18 = 1537960427U;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
