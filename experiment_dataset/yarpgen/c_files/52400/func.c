/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52400
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52400 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52400
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
    var_16 = ((/* implicit */short) (unsigned short)48329);
    /* LoopSeq 3 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [9ULL])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)20091)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) var_13))))) : (((unsigned long long int) var_14))));
        /* LoopSeq 3 */
        for (signed char i_1 = 2; i_1 < 11; i_1 += 4) /* same iter space */
        {
            var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_5 [i_1 - 1] [i_1 - 1])) : (((/* implicit */int) var_8)))))));
            var_18 ^= ((/* implicit */unsigned int) ((arr_3 [i_0]) <= (arr_3 [i_0])));
            /* LoopSeq 1 */
            for (unsigned long long int i_2 = 2; i_2 < 8; i_2 += 4) 
            {
                /* LoopNest 2 */
                for (signed char i_3 = 0; i_3 < 12; i_3 += 2) 
                {
                    for (unsigned short i_4 = 2; i_4 < 11; i_4 += 4) 
                    {
                        {
                            var_19 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_12 [i_0] [i_3] [i_4])) : (((/* implicit */int) var_7))))) || (((/* implicit */_Bool) var_4))));
                            var_20 = ((/* implicit */unsigned char) arr_10 [i_1 - 2] [i_1 - 2] [i_3] [i_4]);
                            var_21 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)40))));
                            arr_14 [i_0] [i_1] [i_2 - 1] [i_3] [i_3] [i_4] [i_4] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)15)) ? (7435516416385568550LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)85)))));
                        }
                    } 
                } 
                arr_15 [i_0] [i_1 - 1] [(unsigned char)2] = ((/* implicit */signed char) var_14);
                arr_16 [i_0] = ((/* implicit */unsigned char) (-(((/* implicit */int) ((((/* implicit */int) var_0)) != (((/* implicit */int) arr_6 [i_0])))))));
                var_22 = ((/* implicit */_Bool) (short)-17067);
            }
        }
        for (signed char i_5 = 2; i_5 < 11; i_5 += 4) /* same iter space */
        {
            arr_20 [(unsigned char)1] = ((/* implicit */unsigned char) ((signed char) ((((/* implicit */int) var_2)) & (((/* implicit */int) (unsigned char)11)))));
            var_23 = ((/* implicit */signed char) arr_7 [i_0] [i_0] [i_0] [(unsigned short)7]);
            var_24 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)207))) <= (var_14)));
            var_25 = ((/* implicit */long long int) var_4);
        }
        for (signed char i_6 = 2; i_6 < 11; i_6 += 4) /* same iter space */
        {
            arr_23 [i_6 - 1] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_8))))) != (arr_21 [i_0] [i_6])));
            var_26 = ((/* implicit */unsigned short) ((arr_19 [i_6 - 2] [i_6 - 2] [(signed char)11]) ? (((((/* implicit */_Bool) (signed char)48)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) arr_8 [i_0])))) : (((/* implicit */int) ((((/* implicit */int) (unsigned char)1)) > (((/* implicit */int) arr_12 [(unsigned char)9] [i_6 - 2] [i_0])))))));
            arr_24 [i_6 - 2] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_4)) : (((((/* implicit */int) (unsigned char)32)) % (((/* implicit */int) var_8))))));
        }
        var_27 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_9))))) ? (((/* implicit */int) ((((/* implicit */int) var_3)) > (((/* implicit */int) var_8))))) : (((/* implicit */int) arr_4 [i_0]))));
        /* LoopSeq 1 */
        for (unsigned long long int i_7 = 1; i_7 < 11; i_7 += 3) 
        {
            arr_28 [i_7] [(unsigned char)3] [i_7] = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_7))));
            arr_29 [i_7] = ((/* implicit */_Bool) arr_21 [i_0] [i_7 - 1]);
        }
    }
    for (short i_8 = 3; i_8 < 12; i_8 += 4) 
    {
        arr_33 [i_8] = ((/* implicit */signed char) max((var_14), (((/* implicit */unsigned int) (_Bool)1))));
        var_28 = ((/* implicit */unsigned char) min((var_28), (((/* implicit */unsigned char) min((min((((unsigned short) var_15)), (((/* implicit */unsigned short) max((var_10), (var_2)))))), (((/* implicit */unsigned short) arr_31 [i_8] [(short)2])))))));
    }
    /* vectorizable */
    for (unsigned short i_9 = 1; i_9 < 21; i_9 += 3) 
    {
        arr_36 [i_9 - 1] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_0)) ? (var_14) : (((/* implicit */unsigned int) ((/* implicit */int) arr_34 [i_9 + 1]))))) - (((/* implicit */unsigned int) ((((/* implicit */int) var_8)) >> (((/* implicit */int) arr_35 [8U] [i_9])))))));
        var_29 = ((/* implicit */signed char) min((var_29), (((/* implicit */signed char) (((_Bool)1) ? (((/* implicit */int) (unsigned char)239)) : (((/* implicit */int) (_Bool)1)))))));
        var_30 ^= ((/* implicit */unsigned char) arr_34 [i_9]);
    }
    var_31 ^= ((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) 6645496157609808304ULL))))) | (((/* implicit */int) var_3))));
}
