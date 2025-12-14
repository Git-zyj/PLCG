#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 16219744881697682743ULL;
long long int var_1 = -4365597265314656648LL;
unsigned short var_2 = (unsigned short)1207;
unsigned short var_3 = (unsigned short)22309;
signed char var_4 = (signed char)-103;
unsigned long long int var_5 = 4637469664643900709ULL;
short var_6 = (short)2840;
_Bool var_8 = (_Bool)0;
long long int var_9 = 4844920150579294391LL;
unsigned long long int var_11 = 2310699441623976701ULL;
int zero = 0;
unsigned long long int var_13 = 78628672169448264ULL;
unsigned char var_14 = (unsigned char)45;
unsigned short var_15 = (unsigned short)6318;
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
