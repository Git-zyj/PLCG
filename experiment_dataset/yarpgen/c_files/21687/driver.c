#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 3154252248993339184LL;
unsigned short var_4 = (unsigned short)41245;
long long int var_5 = 7350680952982892643LL;
long long int var_6 = 202510316667128999LL;
unsigned short var_7 = (unsigned short)59994;
long long int var_8 = 1419163744907894422LL;
long long int var_9 = 8736941178794962565LL;
long long int var_10 = -855337817042277976LL;
long long int var_12 = 4501222997504480766LL;
int zero = 0;
unsigned short var_13 = (unsigned short)15612;
long long int var_14 = -1374827584093184880LL;
unsigned short var_15 = (unsigned short)62533;
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
