#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 6484085286493498267ULL;
short var_5 = (short)29531;
long long int var_6 = 8957473348207585741LL;
long long int var_7 = -108295130507170324LL;
unsigned short var_8 = (unsigned short)51659;
long long int var_9 = -8288526955170076434LL;
_Bool var_11 = (_Bool)1;
_Bool var_12 = (_Bool)1;
short var_13 = (short)-19356;
unsigned long long int var_16 = 8985050491226815502ULL;
unsigned char var_17 = (unsigned char)226;
int zero = 0;
unsigned long long int var_18 = 16185539980254254232ULL;
_Bool var_19 = (_Bool)0;
short var_20 = (short)-5108;
unsigned char var_21 = (unsigned char)102;
short var_22 = (short)-1230;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
