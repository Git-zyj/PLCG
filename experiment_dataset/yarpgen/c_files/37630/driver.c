#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 4213067973234541600ULL;
unsigned long long int var_4 = 11884003164150039952ULL;
unsigned int var_6 = 1340766548U;
unsigned long long int var_9 = 4541416725151413168ULL;
unsigned short var_12 = (unsigned short)57068;
short var_14 = (short)23085;
int var_16 = -2027263121;
short var_17 = (short)16201;
unsigned long long int var_19 = 4910858459031519152ULL;
int zero = 0;
signed char var_20 = (signed char)-76;
unsigned long long int var_21 = 8357180102218933581ULL;
unsigned long long int var_22 = 7594325907370173028ULL;
unsigned long long int var_23 = 13953129836606595745ULL;
unsigned long long int var_24 = 12638088966970164227ULL;
_Bool arr_0 [21] ;
unsigned char arr_1 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = (unsigned char)57;
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
