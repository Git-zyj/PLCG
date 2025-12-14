#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 456873248;
signed char var_7 = (signed char)-74;
long long int var_8 = 4876092309383313604LL;
int var_9 = -1350539167;
short var_11 = (short)-26420;
unsigned long long int var_13 = 7677878792811576281ULL;
signed char var_14 = (signed char)15;
_Bool var_15 = (_Bool)0;
int zero = 0;
unsigned short var_16 = (unsigned short)55945;
long long int var_17 = 3422602784978872954LL;
unsigned short var_18 = (unsigned short)10582;
int var_19 = -1776121420;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
