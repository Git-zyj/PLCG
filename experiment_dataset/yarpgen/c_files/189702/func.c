/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189702
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189702 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189702
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
    var_17 = ((/* implicit */_Bool) var_2);
    /* LoopSeq 2 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        var_18 = ((/* implicit */_Bool) min((var_18), ((!(((/* implicit */_Bool) (~((-2147483647 - 1)))))))));
        var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) arr_2 [i_0]))));
        /* LoopSeq 2 */
        for (unsigned long long int i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            /* LoopSeq 2 */
            for (signed char i_2 = 0; i_2 < 19; i_2 += 4) 
            {
                /* LoopSeq 1 */
                for (unsigned int i_3 = 0; i_3 < 19; i_3 += 3) 
                {
                    arr_12 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_3 [i_1] [i_1])) && ((!(((/* implicit */_Bool) 2147483647))))));
                    arr_13 [i_0] [i_1] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((arr_11 [i_0]) & (((/* implicit */unsigned long long int) 2147483647))))) ? (((/* implicit */unsigned long long int) ((arr_4 [i_0] [8ULL] [8ULL]) % (((/* implicit */long long int) ((/* implicit */int) (short)6692)))))) : (arr_5 [i_0] [i_1] [i_0])));
                    arr_14 [i_0] [i_1] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) arr_10 [i_1] [9LL] [i_2] [i_3] [(unsigned short)15] [9LL]);
                }
                arr_15 [i_1] [i_1] [i_2] [i_1] = ((/* implicit */int) arr_7 [i_0] [i_0] [(unsigned short)13]);
            }
            for (unsigned char i_4 = 0; i_4 < 19; i_4 += 4) 
            {
                arr_18 [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) 0U)) ? (arr_0 [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0])))));
                arr_19 [i_1] [i_1] [(short)15] [i_4] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (~((-2147483647 - 1)))))));
            }
            arr_20 [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_0] [i_1] [(short)5] [i_1])) ? (arr_6 [i_0] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) var_8)))));
        }
        for (int i_5 = 0; i_5 < 19; i_5 += 3) 
        {
            arr_24 [i_5] = arr_4 [i_0] [i_5] [i_5];
            arr_25 [i_0] |= ((/* implicit */signed char) 1254522429929784704LL);
            var_20 -= ((/* implicit */signed char) (-2147483647 - 1));
            arr_26 [i_5] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (short)6697)) : (((/* implicit */int) (_Bool)1))))) + (((unsigned int) 1254522429929784708LL))));
        }
    }
    for (int i_6 = 0; i_6 < 13; i_6 += 3) 
    {
        /* LoopSeq 1 */
        for (long long int i_7 = 0; i_7 < 13; i_7 += 4) 
        {
            arr_32 [i_6] [i_6] [i_6] = ((/* implicit */unsigned long long int) (~((-(((/* implicit */int) min((((/* implicit */short) (unsigned char)19)), ((short)6697))))))));
            var_21 -= ((/* implicit */signed char) 0U);
        }
        /* LoopSeq 1 */
        /* vectorizable */
        for (signed char i_8 = 0; i_8 < 13; i_8 += 2) 
        {
            var_22 = ((/* implicit */short) (_Bool)1);
            var_23 = ((/* implicit */unsigned int) max((var_23), (((/* implicit */unsigned int) (+(((/* implicit */int) (short)-6697)))))));
            var_24 *= (-(arr_5 [i_6] [i_8] [i_6]));
            arr_35 [i_6] = ((/* implicit */long long int) (!(((/* implicit */_Bool) (short)6709))));
        }
        var_25 = ((/* implicit */_Bool) min((((((/* implicit */_Bool) 15U)) ? (arr_11 [i_6]) : (arr_11 [i_6]))), (((/* implicit */unsigned long long int) (short)-10794))));
    }
    var_26 = ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_14)))))) + (((unsigned int) -6123767737861013006LL)));
    /* LoopSeq 1 */
    for (int i_9 = 0; i_9 < 23; i_9 += 2) 
    {
        arr_38 [i_9] = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) (~(var_3)))), (((unsigned long long int) var_6))));
        var_27 -= max(((~(((/* implicit */int) arr_36 [(unsigned short)13] [i_9])))), (((/* implicit */int) max((((/* implicit */signed char) (_Bool)1)), (arr_36 [i_9] [i_9])))));
    }
}
