/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192014
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192014 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192014
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_14 = ((/* implicit */int) min((var_14), (((/* implicit */int) (unsigned short)6))));
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            for (int i_2 = 0; i_2 < 13; i_2 += 2) 
            {
                {
                    arr_9 [i_1] [i_1] [i_1] = ((/* implicit */long long int) arr_1 [i_1] [i_0]);
                    arr_10 [i_1] [i_1] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(4974600065189927290LL)))) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (unsigned short)26)) : (((/* implicit */int) (signed char)15)))) : (((/* implicit */int) ((signed char) var_1)))))) ? (min(((+(arr_6 [i_0] [i_1]))), (((/* implicit */unsigned long long int) (signed char)127)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max(((unsigned short)6), (((/* implicit */unsigned short) arr_0 [i_0]))))))));
                    /* LoopNest 2 */
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 13; i_4 += 1) 
                        {
                            {
                                arr_17 [i_2] [i_3] [i_2] [12ULL] [i_0] = ((/* implicit */unsigned short) max((-1LL), (((/* implicit */long long int) (unsigned short)32127))));
                                arr_18 [i_2] [i_2] [7U] [i_3 - 1] [i_4] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)127)) ? (8191ULL) : (((/* implicit */unsigned long long int) (((~(8714224048083081110LL))) & (((/* implicit */long long int) (~(((/* implicit */int) (_Bool)1))))))))));
                            }
                        } 
                    } 
                    arr_19 [i_0] [7ULL] [(signed char)0] [i_1] = ((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) ((int) var_9)))))) + (((/* implicit */int) ((((/* implicit */_Bool) max(((unsigned short)6), (((/* implicit */unsigned short) (unsigned char)1))))) && (((/* implicit */_Bool) -1943804402)))))));
                }
            } 
        } 
        arr_20 [(unsigned char)8] = ((/* implicit */unsigned char) var_11);
        arr_21 [i_0] [(signed char)4] = ((/* implicit */unsigned int) arr_14 [(unsigned short)7] [3] [(unsigned short)7] [i_0] [i_0]);
    }
    for (unsigned char i_5 = 0; i_5 < 12; i_5 += 2) 
    {
        arr_25 [9ULL] = ((/* implicit */long long int) ((-4974600065189927275LL) == (((/* implicit */long long int) (~(((/* implicit */int) ((((/* implicit */long long int) arr_2 [i_5])) != (-6700846167312108812LL)))))))));
        /* LoopNest 2 */
        for (int i_6 = 4; i_6 < 11; i_6 += 1) 
        {
            for (unsigned short i_7 = 0; i_7 < 12; i_7 += 1) 
            {
                {
                    arr_30 [4LL] [i_6] [i_7] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((arr_2 [i_6 + 1]) << (((arr_2 [i_6 - 2]) - (3450716095U)))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_29 [i_5] [(unsigned char)5])) : (((/* implicit */int) arr_29 [i_6 - 2] [i_6])))))));
                    arr_31 [i_5] [(unsigned char)9] [i_5] = ((/* implicit */int) min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_4 [i_5] [i_6 + 1] [i_7])) ? (((/* implicit */int) arr_4 [i_7] [i_6] [i_5])) : (((/* implicit */int) arr_7 [12LL] [12LL] [i_7] [i_7]))))), (((((/* implicit */_Bool) arr_7 [i_5] [i_5] [i_7] [i_6 - 3])) ? (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_7] [(unsigned char)10] [i_6 - 4] [i_5]))) : (var_4)))));
                    arr_32 [i_7] [8U] [8U] = ((/* implicit */long long int) (+(-1563764989)));
                }
            } 
        } 
    }
    /* vectorizable */
    for (short i_8 = 2; i_8 < 8; i_8 += 1) 
    {
        arr_35 [i_8] [(signed char)3] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_11)) ? (arr_6 [i_8 + 2] [i_8 + 2]) : (arr_6 [i_8 - 2] [i_8 - 1])));
        arr_36 [i_8 - 2] [i_8] = ((/* implicit */int) ((((/* implicit */_Bool) var_11)) ? (((((/* implicit */_Bool) (signed char)-86)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) 9223372036854775807LL)))) : (((/* implicit */unsigned long long int) arr_23 [i_8 - 1]))));
        arr_37 [i_8] = ((/* implicit */int) (~(((((/* implicit */long long int) ((/* implicit */int) (unsigned char)255))) | (-1LL)))));
        arr_38 [(signed char)0] [5LL] = ((/* implicit */long long int) (-(((/* implicit */int) arr_24 [i_8 + 2]))));
    }
    var_15 = ((/* implicit */signed char) ((((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) var_1)) : (min((((/* implicit */long long int) var_8)), (var_12))))) <= (((/* implicit */long long int) ((/* implicit */int) var_2)))));
    var_16 = ((/* implicit */signed char) (-(((/* implicit */int) var_6))));
    var_17 = ((/* implicit */short) var_9);
    var_18 = ((/* implicit */unsigned short) (+(((/* implicit */int) (short)17536))));
}
