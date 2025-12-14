#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-127;
short var_6 = (short)17566;
unsigned long long int var_7 = 566505518077792052ULL;
_Bool var_8 = (_Bool)1;
long long int var_9 = 995088513455208264LL;
long long int var_11 = 4991935342166670886LL;
int zero = 0;
signed char var_12 = (signed char)7;
long long int var_13 = -7865135806821649032LL;
unsigned long long int var_14 = 17528692473011062068ULL;
unsigned short var_15 = (unsigned short)23465;
short var_16 = (short)9560;
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
