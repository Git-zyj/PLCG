/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54401
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54401 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54401
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
    /* LoopSeq 4 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        var_17 *= ((/* implicit */unsigned short) ((_Bool) var_11));
        var_18 = ((/* implicit */int) ((arr_2 [i_0 + 1] [i_0]) >= (arr_2 [i_0 + 1] [i_0])));
        var_19 *= ((/* implicit */unsigned char) ((arr_3 [i_0 + 1] [i_0]) * (((/* implicit */unsigned long long int) arr_1 [i_0]))));
        arr_4 [i_0] = ((/* implicit */int) ((arr_3 [i_0 + 1] [i_0 + 1]) & (((/* implicit */unsigned long long int) var_16))));
    }
    /* vectorizable */
    for (int i_1 = 4; i_1 < 18; i_1 += 1) 
    {
        arr_7 [i_1] = ((/* implicit */long long int) (~(((/* implicit */int) arr_0 [i_1 - 2] [i_1 - 4]))));
        /* LoopNest 2 */
        for (long long int i_2 = 1; i_2 < 21; i_2 += 2) 
        {
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                {
                    var_20 = (~(arr_1 [i_1 + 2]));
                    arr_12 [i_2] [i_3] [i_2] = ((/* implicit */_Bool) (((+(arr_10 [(signed char)7] [i_3] [i_3] [i_1]))) - (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_1 - 4] [i_1 + 1])))));
                    var_21 = ((/* implicit */unsigned char) ((((-3339001998217188021LL) + (9223372036854775807LL))) >> (((18446744073709551615ULL) - (18446744073709551563ULL)))));
                    arr_13 [i_1 + 3] [i_1] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_8 [i_1] [(_Bool)1])) ? (((arr_2 [i_1] [i_2]) - (((/* implicit */int) arr_9 [i_3] [i_2] [(short)9])))) : (((/* implicit */int) var_14))));
                }
            } 
        } 
        var_22 ^= ((/* implicit */_Bool) var_3);
        arr_14 [i_1] [i_1 + 3] = ((/* implicit */short) ((arr_2 [i_1 - 1] [i_1 + 2]) - (arr_2 [i_1] [i_1 + 2])));
        var_23 = ((/* implicit */long long int) arr_0 [i_1] [i_1 - 2]);
    }
    /* vectorizable */
    for (long long int i_4 = 0; i_4 < 12; i_4 += 1) 
    {
        var_24 = ((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_4] [i_4]))))) > (((((/* implicit */_Bool) var_2)) ? (arr_2 [i_4] [i_4]) : (((/* implicit */int) arr_0 [i_4] [i_4]))))));
        /* LoopNest 3 */
        for (unsigned short i_5 = 2; i_5 < 10; i_5 += 3) 
        {
            for (int i_6 = 1; i_6 < 11; i_6 += 4) 
            {
                for (unsigned short i_7 = 1; i_7 < 10; i_7 += 4) 
                {
                    {
                        arr_26 [6LL] [i_6] [i_6] [i_5] [i_4] [i_4] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_15 [i_7 - 1])) ? (((/* implicit */int) arr_15 [i_7 + 1])) : (((/* implicit */int) arr_15 [i_7 + 2]))));
                        var_25 = ((/* implicit */unsigned int) min((var_25), (((/* implicit */unsigned int) arr_25 [i_6 + 1] [i_6 + 1] [i_6] [i_6 + 1] [i_6] [i_6]))));
                        arr_27 [i_4] [i_5 + 1] [i_6 - 1] [i_7] [i_7 - 1] [9] = ((/* implicit */unsigned short) (~((+(arr_24 [i_4] [i_4] [i_4] [i_4])))));
                        var_26 = ((/* implicit */int) ((arr_24 [i_6 - 1] [i_4] [i_4] [i_7 + 2]) | (arr_24 [i_6 - 1] [i_5 + 1] [i_6] [i_7 + 2])));
                    }
                } 
            } 
        } 
        arr_28 [i_4] = ((/* implicit */unsigned short) (+(arr_1 [i_4])));
    }
    /* vectorizable */
    for (long long int i_8 = 0; i_8 < 12; i_8 += 1) 
    {
        arr_33 [(_Bool)1] = ((/* implicit */short) ((((((/* implicit */int) var_7)) + (((/* implicit */int) arr_16 [i_8])))) | (((/* implicit */int) ((_Bool) 1777568565U)))));
        arr_34 [i_8] &= ((/* implicit */unsigned short) ((unsigned int) arr_6 [i_8] [i_8]));
    }
    var_27 = ((/* implicit */short) var_15);
    var_28 = ((/* implicit */unsigned char) min((var_28), (((/* implicit */unsigned char) var_4))));
    var_29 = ((/* implicit */unsigned short) ((unsigned char) ((long long int) ((((/* implicit */int) var_5)) << (((/* implicit */int) var_1))))));
}
