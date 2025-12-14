#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -5812053960550632764LL;
long long int var_1 = -4123518365078483812LL;
unsigned char var_2 = (unsigned char)68;
unsigned int var_4 = 3776163015U;
unsigned short var_5 = (unsigned short)57008;
unsigned long long int var_6 = 13534433257589703344ULL;
unsigned short var_9 = (unsigned short)46846;
long long int var_12 = 4603946704122829597LL;
long long int var_14 = 8439055081652362177LL;
unsigned char var_17 = (unsigned char)167;
int var_18 = -898998754;
unsigned char var_19 = (unsigned char)114;
int zero = 0;
unsigned char var_20 = (unsigned char)115;
unsigned short var_21 = (unsigned short)27414;
unsigned char var_22 = (unsigned char)104;
unsigned short var_23 = (unsigned short)43558;
unsigned int var_24 = 1106308318U;
long long int var_25 = -343328117418395035LL;
long long int var_26 = -6276761041989000345LL;
unsigned char var_27 = (unsigned char)208;
signed char var_28 = (signed char)3;
unsigned long long int var_29 = 16535939212207455835ULL;
unsigned long long int var_30 = 18438642501454349225ULL;
unsigned int var_31 = 2310698982U;
long long int var_32 = -1595248223630926360LL;
long long int var_33 = -6510928445490470971LL;
int var_34 = 1200455613;
long long int var_35 = -4894743919495470490LL;
short var_36 = (short)2446;
_Bool var_37 = (_Bool)0;
long long int var_38 = -1326799066676049168LL;
int var_39 = -673494591;
unsigned short var_40 = (unsigned short)16340;
long long int arr_16 [21] [21] [21] [21] ;
unsigned char arr_21 [21] [21] [21] ;
unsigned long long int arr_22 [21] [21] [21] ;
unsigned long long int arr_28 [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_16 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? -3940751523526763783LL : 4231754948797649143LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_21 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (unsigned char)113 : (unsigned char)245;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_22 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 1774758783408585033ULL : 16464122684218873707ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_28 [i_0] [i_1] = 5856506211376035319ULL;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
    hash(&seed, var_30);
    hash(&seed, var_31);
    hash(&seed, var_32);
    hash(&seed, var_33);
    hash(&seed, var_34);
    hash(&seed, var_35);
    hash(&seed, var_36);
    hash(&seed, var_37);
    hash(&seed, var_38);
    hash(&seed, var_39);
    hash(&seed, var_40);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    hash(&seed, arr_16 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                hash(&seed, arr_21 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                hash(&seed, arr_22 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_28 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
