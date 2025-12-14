#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -7252090282833743564LL;
unsigned short var_1 = (unsigned short)49279;
long long int var_2 = -2270117015728865884LL;
_Bool var_4 = (_Bool)0;
_Bool var_5 = (_Bool)1;
unsigned long long int var_6 = 6080329760434289833ULL;
signed char var_7 = (signed char)-63;
unsigned long long int var_8 = 7210509889362888436ULL;
unsigned short var_9 = (unsigned short)50139;
int zero = 0;
long long int var_11 = -5959150799557151815LL;
unsigned char var_12 = (unsigned char)89;
long long int var_13 = -4082515687074982491LL;
unsigned char var_14 = (unsigned char)149;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
