#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1584303159;
int var_1 = -204858639;
unsigned long long int var_3 = 5838830391124570200ULL;
unsigned char var_4 = (unsigned char)0;
unsigned int var_5 = 3106421475U;
long long int var_6 = -393224045377894453LL;
_Bool var_7 = (_Bool)0;
signed char var_9 = (signed char)-114;
long long int var_11 = 7387298466906346512LL;
int var_13 = 1539586377;
int zero = 0;
long long int var_14 = 1065111692019559497LL;
_Bool var_15 = (_Bool)1;
void init() {
}

void checksum() {
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
