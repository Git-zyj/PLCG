#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -6339275319223876126LL;
_Bool var_3 = (_Bool)0;
short var_5 = (short)-27418;
_Bool var_6 = (_Bool)1;
unsigned long long int var_7 = 3239460622981559416ULL;
short var_8 = (short)-28563;
unsigned long long int var_9 = 2794619666645828396ULL;
long long int var_10 = -1676967833234835572LL;
short var_11 = (short)-3042;
int var_12 = -204674677;
short var_13 = (short)3738;
long long int var_19 = 4128324802904409777LL;
int zero = 0;
int var_20 = 585376321;
short var_21 = (short)-9684;
unsigned long long int var_22 = 15715747775656106844ULL;
int var_23 = -917843938;
_Bool var_24 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
