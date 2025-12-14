/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19107
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19107 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19107
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
    var_18 = ((((/* implicit */_Bool) var_2)) ? (((((/* implicit */int) var_0)) - (((/* implicit */int) var_4)))) : ((~(((/* implicit */int) max((var_11), (((/* implicit */unsigned char) var_3))))))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 1; i_0 < 18; i_0 += 1) 
    {
        /* LoopNest 3 */
        for (signed char i_1 = 2; i_1 < 15; i_1 += 1) 
        {
            for (unsigned char i_2 = 3; i_2 < 18; i_2 += 2) 
            {
                for (unsigned short i_3 = 0; i_3 < 19; i_3 += 3) 
                {
                    {
                        arr_9 [13U] [i_1 + 3] [i_2 - 1] [i_0] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (-(((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_2 [(_Bool)1] [i_1])) : (((/* implicit */int) var_2)))))))));
                        var_19 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)-113)) && (((/* implicit */_Bool) (short)12288))));
                        arr_10 [i_0] [i_0] [i_0 - 1] [i_3] = min((((((/* implicit */_Bool) min((((/* implicit */unsigned char) var_7)), (var_14)))) ? (((((/* implicit */int) var_17)) - (((/* implicit */int) var_2)))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_0])) && (((/* implicit */_Bool) (signed char)-24))))))), (((/* implicit */int) max((((/* implicit */unsigned short) arr_0 [i_0] [i_1 + 2])), (arr_1 [i_0])))));
                        var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) ((((/* implicit */_Bool) ((unsigned short) arr_2 [i_0 + 1] [i_0]))) ? (((int) arr_4 [i_1 + 4] [i_0 + 1])) : (((/* implicit */int) max((((/* implicit */unsigned short) arr_3 [(unsigned short)16] [i_1 - 1] [(unsigned short)16])), (var_2)))))))));
                        var_21 = ((/* implicit */signed char) var_17);
                    }
                } 
            } 
        } 
        var_22 = ((/* implicit */_Bool) min((var_22), (((/* implicit */_Bool) arr_4 [i_0] [i_0]))));
        /* LoopSeq 1 */
        for (int i_4 = 0; i_4 < 19; i_4 += 1) 
        {
            var_23 |= ((/* implicit */unsigned int) (signed char)42);
            /* LoopSeq 2 */
            /* vectorizable */
            for (signed char i_5 = 1; i_5 < 18; i_5 += 3) 
            {
                /* LoopSeq 2 */
                for (short i_6 = 1; i_6 < 15; i_6 += 1) 
                {
                    var_24 = ((/* implicit */unsigned int) ((signed char) arr_17 [i_5 + 1] [i_5] [i_5] [i_6] [i_6]));
                    var_25 += ((/* implicit */unsigned char) ((((((/* implicit */int) arr_2 [i_6] [i_4])) - (((/* implicit */int) var_10)))) - ((-(((/* implicit */int) (short)-1))))));
                }
                for (short i_7 = 0; i_7 < 19; i_7 += 1) 
                {
                    var_26 = ((/* implicit */unsigned short) ((_Bool) arr_13 [i_0]));
                    /* LoopSeq 2 */
                    for (unsigned short i_8 = 0; i_8 < 19; i_8 += 1) 
                    {
                        arr_22 [i_0] = ((/* implicit */unsigned char) var_9);
                        var_27 += (-(((/* implicit */int) (short)4095)));
                    }
                    for (unsigned int i_9 = 1; i_9 < 17; i_9 += 4) 
                    {
                        arr_26 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) arr_19 [i_0] [(signed char)16] [i_9 + 2] [i_5 + 1])) ? (((/* implicit */int) arr_19 [i_0] [4] [i_9 - 1] [i_5 + 1])) : (((/* implicit */int) arr_19 [i_0] [2LL] [i_9 + 2] [i_5 + 1]))));
                        var_28 = ((/* implicit */unsigned int) min((var_28), (((((/* implicit */_Bool) arr_6 [i_0 - 1] [i_0] [i_0 + 1])) ? (arr_6 [i_0 + 1] [7] [i_0 - 1]) : (arr_6 [i_0 - 1] [i_0 - 1] [i_0 - 1])))));
                        var_29 = ((/* implicit */short) max((var_29), (((/* implicit */short) (signed char)-24))));
                    }
                }
                arr_27 [i_0] [(signed char)1] [i_0] = ((/* implicit */short) ((arr_25 [i_0] [i_4] [i_5]) == (((/* implicit */int) var_4))));
                arr_28 [i_0] [i_4] [(unsigned short)8] &= ((/* implicit */signed char) ((unsigned int) ((((/* implicit */_Bool) (signed char)-1)) ? (((/* implicit */int) arr_3 [(unsigned short)4] [i_4] [(unsigned short)4])) : (var_13))));
                var_30 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_12)) ? (((int) var_15)) : (((/* implicit */int) var_16))));
            }
            /* vectorizable */
            for (short i_10 = 0; i_10 < 19; i_10 += 1) 
            {
                var_31 = ((/* implicit */unsigned short) min((var_31), (((/* implicit */unsigned short) ((short) arr_11 [i_0 + 1])))));
                arr_31 [i_0] [(unsigned char)18] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_30 [i_0] [i_0 - 1] [i_0] [i_4])) ? (((/* implicit */int) arr_23 [i_0 - 1] [i_0 + 1] [i_0 - 1] [i_10] [i_10])) : (arr_30 [i_0 - 1] [i_0 - 1] [i_0] [i_0 - 1])));
                arr_32 [(short)4] &= ((/* implicit */signed char) ((((/* implicit */int) arr_0 [i_0 + 1] [(signed char)2])) % (((/* implicit */int) arr_0 [i_0 + 1] [i_0 + 1]))));
            }
            var_32 = ((/* implicit */signed char) ((_Bool) ((short) arr_23 [i_0 - 1] [1] [i_0 - 1] [i_0] [i_4])));
            var_33 -= ((/* implicit */unsigned short) var_17);
        }
        arr_33 [i_0] [i_0] = ((/* implicit */int) arr_21 [i_0 - 1] [i_0] [18U] [i_0 - 1] [i_0]);
    }
}
