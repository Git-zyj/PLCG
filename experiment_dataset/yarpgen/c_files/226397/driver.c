#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3561085610U;
long long int var_1 = 786585920775024321LL;
short var_2 = (short)375;
unsigned char var_3 = (unsigned char)39;
unsigned int var_4 = 2507643437U;
unsigned char var_5 = (unsigned char)133;
unsigned int var_6 = 2292045912U;
short var_7 = (short)-22426;
int var_8 = -1711165731;
unsigned int var_9 = 2543293206U;
unsigned long long int var_10 = 5065899386251531462ULL;
int var_12 = -804615276;
unsigned int var_13 = 4060296593U;
int zero = 0;
int var_14 = -674984079;
unsigned long long int var_15 = 6493403498385314188ULL;
signed char var_16 = (signed char)77;
unsigned long long int var_17 = 6868492182599506145ULL;
short var_18 = (short)-3948;
short var_19 = (short)22807;
unsigned long long int var_20 = 14767267518006842695ULL;
long long int var_21 = -7080379195916463991LL;
short var_22 = (short)20010;
unsigned int var_23 = 524358275U;
long long int var_24 = -4822302320419603837LL;
signed char var_25 = (signed char)101;
signed char var_26 = (signed char)-56;
unsigned int var_27 = 2334966370U;
unsigned int var_28 = 3646633494U;
unsigned long long int var_29 = 12967241354097512506ULL;
short var_30 = (short)-15124;
short var_31 = (short)-1824;
unsigned char var_32 = (unsigned char)203;
short var_33 = (short)28016;
unsigned long long int var_34 = 12064132938452334414ULL;
signed char var_35 = (signed char)30;
unsigned long long int arr_0 [18] ;
long long int arr_1 [18] ;
short arr_2 [18] ;
long long int arr_7 [15] ;
short arr_8 [21] ;
unsigned char arr_9 [21] [21] ;
unsigned int arr_10 [21] ;
unsigned long long int arr_11 [21] ;
unsigned int arr_12 [21] [21] [21] ;
signed char arr_13 [21] [21] [21] ;
unsigned char arr_17 [21] [21] [21] ;
unsigned char arr_18 [21] [21] [21] ;
signed char arr_21 [21] ;
long long int arr_25 [21] [21] ;
unsigned int arr_29 [21] [21] ;
short arr_30 [21] ;
unsigned long long int arr_31 [21] [21] [21] [21] ;
unsigned int arr_40 [15] ;
unsigned long long int arr_41 [15] ;
short arr_43 [15] [15] ;
unsigned int arr_3 [18] ;
unsigned char arr_14 [21] [21] ;
signed char arr_15 [21] [21] ;
int arr_16 [21] [21] ;
unsigned int arr_19 [21] ;
unsigned int arr_20 [21] ;
unsigned int arr_32 [21] ;
int arr_33 [21] [21] [21] ;
short arr_37 [21] [21] [21] ;
short arr_38 [21] [21] [21] ;
short arr_39 [21] [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = 3944547445286968417ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = -4695962350963496643LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = (short)18116;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_7 [i_0] = 3744213341445190056LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_8 [i_0] = (short)-8000;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_9 [i_0] [i_1] = (unsigned char)176;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_10 [i_0] = 1886517982U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_11 [i_0] = 8252423252194544949ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_12 [i_0] [i_1] [i_2] = 2338582156U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_13 [i_0] [i_1] [i_2] = (signed char)-115;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_17 [i_0] [i_1] [i_2] = (unsigned char)211;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_18 [i_0] [i_1] [i_2] = (unsigned char)13;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_21 [i_0] = (signed char)-7;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_25 [i_0] [i_1] = -6770905154236567527LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_29 [i_0] [i_1] = 473322353U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_30 [i_0] = (short)26374;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_31 [i_0] [i_1] [i_2] [i_3] = 11462116458384270041ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_40 [i_0] = 1177528788U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_41 [i_0] = 201940927599032225ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_43 [i_0] [i_1] = (short)-26530;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_3 [i_0] = 3573953839U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_14 [i_0] [i_1] = (unsigned char)194;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_15 [i_0] [i_1] = (signed char)-37;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_16 [i_0] [i_1] = 1788553276;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_19 [i_0] = 3215072135U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_20 [i_0] = 1745713345U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_32 [i_0] = 520286824U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_33 [i_0] [i_1] [i_2] = 1936987866;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_37 [i_0] [i_1] [i_2] = (short)-13523;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_38 [i_0] [i_1] [i_2] = (short)-4029;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_39 [i_0] [i_1] [i_2] = (short)18129;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
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
    hash(&seed, var_28);
    hash(&seed, var_29);
    hash(&seed, var_30);
    hash(&seed, var_31);
    hash(&seed, var_32);
    hash(&seed, var_33);
    hash(&seed, var_34);
    hash(&seed, var_35);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_14 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_15 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_16 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_19 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_20 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_32 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                hash(&seed, arr_33 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                hash(&seed, arr_37 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                hash(&seed, arr_38 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                hash(&seed, arr_39 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
