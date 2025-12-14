#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1374575652U;
_Bool var_1 = (_Bool)0;
short var_2 = (short)22639;
unsigned short var_4 = (unsigned short)2402;
signed char var_5 = (signed char)62;
unsigned long long int var_6 = 5065861759990721063ULL;
long long int var_7 = 3254602569202785678LL;
int var_9 = -18728724;
unsigned char var_10 = (unsigned char)151;
short var_11 = (short)32492;
signed char var_12 = (signed char)-111;
short var_13 = (short)-32677;
long long int var_14 = 2553929953356440649LL;
short var_15 = (short)5940;
signed char var_16 = (signed char)-52;
long long int var_17 = 7966668967643095073LL;
int zero = 0;
short var_18 = (short)-13303;
_Bool var_19 = (_Bool)0;
long long int var_20 = 6203488172877597056LL;
unsigned long long int var_21 = 12557528356325984085ULL;
_Bool var_22 = (_Bool)1;
unsigned long long int var_23 = 9600293341304646227ULL;
unsigned long long int var_24 = 14429533940864002289ULL;
long long int var_25 = 3465999721677398793LL;
unsigned int var_26 = 147752107U;
_Bool var_27 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
