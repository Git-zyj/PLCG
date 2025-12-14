/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220853
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220853 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220853
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
    var_12 = ((/* implicit */unsigned short) (((-9223372036854775807LL - 1LL)) >= (((/* implicit */long long int) ((/* implicit */int) (unsigned short)59442)))));
    /* LoopSeq 4 */
    for (unsigned short i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned short) min(((-(((/* implicit */int) arr_1 [5LL] [i_0])))), (((/* implicit */int) max((arr_1 [i_0] [i_0]), (arr_1 [i_0] [i_0]))))));
        var_13 = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) 9223372036854775807LL)))) ? (min((((/* implicit */long long int) arr_1 [i_0] [i_0])), (arr_0 [i_0]))) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0] [i_0])))));
    }
    /* vectorizable */
    for (unsigned char i_1 = 0; i_1 < 24; i_1 += 3) 
    {
        var_14 ^= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_5 [(unsigned char)14]))));
        var_15 = ((/* implicit */unsigned long long int) max((var_15), (((/* implicit */unsigned long long int) ((unsigned int) var_10)))));
    }
    for (unsigned int i_2 = 0; i_2 < 18; i_2 += 2) 
    {
        var_16 = ((/* implicit */unsigned char) min(((-(((/* implicit */int) ((((/* implicit */_Bool) var_10)) || (((/* implicit */_Bool) (unsigned short)59442))))))), (((((((/* implicit */int) var_2)) % (((/* implicit */int) (unsigned char)4)))) >> (((((int) var_9)) - (775266116)))))));
        var_17 = ((/* implicit */unsigned int) min((var_17), (((/* implicit */unsigned int) 9223372036854775800LL))));
    }
    for (long long int i_3 = 0; i_3 < 12; i_3 += 4) 
    {
        var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) ((long long int) ((((/* implicit */int) arr_9 [i_3] [i_3])) == (((/* implicit */int) ((arr_0 [i_3]) >= (((/* implicit */long long int) ((/* implicit */int) var_4))))))))))));
        var_19 = ((/* implicit */unsigned short) (+(((/* implicit */int) (unsigned short)59442))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned short i_4 = 0; i_4 < 12; i_4 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (unsigned int i_5 = 0; i_5 < 12; i_5 += 1) 
            {
                for (unsigned int i_6 = 0; i_6 < 12; i_6 += 4) 
                {
                    {
                        var_20 = ((((/* implicit */long long int) ((((/* implicit */int) (short)16920)) << (((var_9) - (775266134U)))))) | (((((/* implicit */_Bool) 17631159218477477181ULL)) ? (arr_6 [i_5]) : (9223372036854775800LL))));
                        /* LoopSeq 1 */
                        for (unsigned char i_7 = 0; i_7 < 12; i_7 += 1) 
                        {
                            arr_21 [i_3] [i_6] [i_5] = ((/* implicit */unsigned int) (((((((-9223372036854775807LL - 1LL)) + (9223372036854775807LL))) + (9223372036854775807LL))) >> (((1179791U) - (1179730U)))));
                            arr_22 [i_5] [i_7] = ((/* implicit */long long int) ((unsigned char) arr_18 [i_7] [(unsigned char)10] [i_5] [(short)10] [i_4] [(unsigned char)10] [(unsigned char)10]));
                        }
                        arr_23 [i_5] [i_4] [i_5] [i_5] [i_5] = ((/* implicit */unsigned short) (~(arr_7 [i_3])));
                    }
                } 
            } 
            var_21 = ((/* implicit */short) (!(((/* implicit */_Bool) arr_10 [i_3]))));
        }
        for (unsigned short i_8 = 0; i_8 < 12; i_8 += 1) /* same iter space */
        {
            arr_26 [i_3] [i_8] = ((/* implicit */long long int) arr_18 [i_3] [i_3] [7LL] [i_8] [7LL] [i_3] [i_3]);
            arr_27 [i_3] [i_8] = ((/* implicit */int) (!((!(((/* implicit */_Bool) arr_0 [i_8]))))));
        }
    }
}
