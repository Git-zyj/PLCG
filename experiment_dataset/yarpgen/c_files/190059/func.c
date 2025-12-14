/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190059
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190059 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190059
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
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            {
                var_14 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) (_Bool)1)), (var_13)));
                var_15 = ((/* implicit */unsigned char) min((var_15), (((/* implicit */unsigned char) max((max((((/* implicit */unsigned long long int) ((2043102451U) <= (arr_0 [i_1] [i_0])))), (((((/* implicit */_Bool) 4262296656U)) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))))))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_1 [i_0] [i_1]))))))))));
            }
        } 
    } 
    var_16 = ((/* implicit */unsigned char) min((var_16), (((/* implicit */unsigned char) var_2))));
    var_17 += ((/* implicit */short) max((((/* implicit */unsigned int) min((((/* implicit */int) var_1)), ((~(((/* implicit */int) (_Bool)0))))))), ((-(var_3)))));
    var_18 ^= (-2147483647 - 1);
    /* LoopSeq 4 */
    for (unsigned char i_2 = 0; i_2 < 19; i_2 += 1) 
    {
        var_19 ^= ((/* implicit */unsigned short) max((((/* implicit */int) (_Bool)0)), (min(((-(((/* implicit */int) arr_2 [i_2])))), (arr_5 [i_2] [i_2])))));
        /* LoopNest 2 */
        for (short i_3 = 1; i_3 < 15; i_3 += 4) 
        {
            for (unsigned long long int i_4 = 0; i_4 < 19; i_4 += 2) 
            {
                {
                    var_20 = ((/* implicit */short) (+(((((/* implicit */int) var_10)) >> (((arr_5 [i_3 + 3] [i_3 + 3]) - (2009574604)))))));
                    arr_12 [i_3] [i_3] [i_3] = ((/* implicit */unsigned int) (unsigned short)63057);
                    var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) ((arr_3 [i_2] [(short)5] [i_4]) == (max((((/* implicit */unsigned int) (unsigned short)2478)), (786448768U))))))));
                }
            } 
        } 
        var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_4 [i_2])) ? (((/* implicit */int) ((((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)2473)) || (((/* implicit */_Bool) arr_8 [i_2] [i_2]))))) < (((/* implicit */int) ((short) var_1)))))) : (1145703068)));
    }
    for (int i_5 = 0; i_5 < 13; i_5 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_6 = 0; i_6 < 13; i_6 += 1) 
        {
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
            {
                {
                    var_23 = ((/* implicit */int) max((var_23), (((/* implicit */int) arr_18 [i_7] [i_5] [i_5] [i_5]))));
                    var_24 = ((/* implicit */unsigned long long int) ((9223372036854775807LL) * (((/* implicit */long long int) 0U))));
                    var_25 = ((/* implicit */unsigned int) var_1);
                }
            } 
        } 
        var_26 += ((/* implicit */signed char) 16406199397404016171ULL);
        arr_20 [i_5] [i_5] = ((/* implicit */_Bool) ((((unsigned int) 2052847165U)) % (arr_0 [i_5] [i_5])));
    }
    /* vectorizable */
    for (long long int i_8 = 3; i_8 < 18; i_8 += 2) 
    {
        arr_23 [i_8 + 3] &= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_22 [i_8])) ? (((/* implicit */int) arr_21 [i_8 + 3])) : ((-(((/* implicit */int) (unsigned short)63062))))));
        var_27 = ((/* implicit */unsigned char) ((18446744073709551615ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)63072)))));
        var_28 = ((/* implicit */_Bool) var_6);
    }
    for (short i_9 = 3; i_9 < 8; i_9 += 1) 
    {
        var_29 |= ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) arr_8 [i_9] [i_9])), (((arr_3 [i_9 + 1] [i_9] [i_9]) - (arr_3 [i_9 + 1] [(signed char)17] [i_9])))));
        arr_27 [i_9 - 1] [i_9] = ((/* implicit */unsigned char) ((unsigned short) max((((/* implicit */unsigned long long int) arr_26 [i_9])), (arr_18 [i_9 - 1] [i_9] [i_9] [i_9]))));
        arr_28 [i_9] = ((/* implicit */unsigned long long int) ((arr_0 [(short)12] [i_9]) >= (((/* implicit */unsigned int) ((/* implicit */int) ((((10ULL) == (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)254))))) && (((/* implicit */_Bool) var_4))))))));
    }
}
