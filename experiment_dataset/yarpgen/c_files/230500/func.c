/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230500
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230500 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230500
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
    var_19 = ((/* implicit */signed char) (+(((/* implicit */int) (short)5389))));
    var_20 ^= ((/* implicit */unsigned int) var_9);
    var_21 = ((/* implicit */unsigned int) ((-7703925358025876384LL) / (-7703925358025876381LL)));
    /* LoopNest 2 */
    for (signed char i_0 = 1; i_0 < 13; i_0 += 2) 
    {
        for (signed char i_1 = 3; i_1 < 12; i_1 += 4) 
        {
            {
                var_22 = ((/* implicit */short) ((((/* implicit */_Bool) ((short) arr_3 [i_1]))) ? (((/* implicit */int) ((unsigned char) var_7))) : (((((/* implicit */_Bool) arr_5 [i_1] [i_1 - 2] [i_1 - 2])) ? (arr_3 [i_1]) : (((/* implicit */int) arr_4 [i_0 + 1] [13] [i_1 + 2]))))));
                /* LoopNest 3 */
                for (unsigned char i_2 = 0; i_2 < 14; i_2 += 2) 
                {
                    for (int i_3 = 1; i_3 < 12; i_3 += 4) 
                    {
                        for (int i_4 = 0; i_4 < 14; i_4 += 4) 
                        {
                            {
                                var_23 = ((/* implicit */short) ((((long long int) arr_12 [i_4] [i_4] [i_3 + 2] [i_1] [i_3 + 2] [i_3 + 2] [i_3])) % (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_12)) != (((/* implicit */int) ((short) arr_4 [i_0] [i_0] [i_0])))))))));
                                var_24 = ((unsigned long long int) ((unsigned char) var_7));
                                var_25 = ((/* implicit */short) arr_4 [i_2] [i_1] [i_2]);
                            }
                        } 
                    } 
                } 
                var_26 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_1])) ? (((/* implicit */int) ((unsigned char) arr_10 [i_0 - 1] [i_1 + 1] [i_1 + 1] [i_1]))) : (arr_3 [i_1])));
                /* LoopSeq 3 */
                for (int i_5 = 0; i_5 < 14; i_5 += 1) 
                {
                    var_27 = ((/* implicit */signed char) ((_Bool) arr_3 [i_1]));
                    var_28 = ((((/* implicit */_Bool) arr_15 [i_0])) ? ((~(2912098530762939667LL))) : (((/* implicit */long long int) ((/* implicit */int) arr_15 [i_0]))));
                    arr_18 [i_1] [i_1] [i_5] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_0] [i_0 - 1] [i_1 - 1])) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) arr_7 [(short)11] [i_0 - 1] [i_1 + 1]))))) ? (((((/* implicit */_Bool) max((arr_9 [i_0 + 1] [(unsigned char)12] [i_5]), (((/* implicit */unsigned long long int) arr_16 [i_0] [i_0 + 1] [i_0]))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_1] [i_1] [i_1] [i_1]))) : (7703925358025876381LL))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_8 [i_1] [i_0 - 1] [i_0 - 1] [i_5])) ? (((int) 7703925358025876408LL)) : (((/* implicit */int) arr_15 [i_0 + 1])))))));
                }
                for (long long int i_6 = 0; i_6 < 14; i_6 += 1) 
                {
                    var_29 = ((/* implicit */signed char) max((var_29), (arr_4 [i_0] [i_1 - 3] [i_6])));
                    var_30 = ((/* implicit */signed char) max((((/* implicit */long long int) var_1)), (((((/* implicit */_Bool) arr_14 [i_1] [i_1])) ? (7703925358025876381LL) : (((/* implicit */long long int) arr_14 [i_1] [i_1]))))));
                }
                /* vectorizable */
                for (long long int i_7 = 0; i_7 < 14; i_7 += 1) 
                {
                    var_31 = ((/* implicit */unsigned int) var_18);
                    var_32 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_0 [i_7])) ? (((/* implicit */int) arr_20 [i_0 + 1] [i_1 - 2] [i_1 - 2])) : (((/* implicit */int) var_7))));
                    var_33 = ((/* implicit */int) max((var_33), (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_17 [i_0 - 1] [i_0 - 1] [i_1 + 1]))) < (var_5))))));
                    var_34 = ((/* implicit */unsigned long long int) ((long long int) arr_23 [i_1 + 2]));
                }
            }
        } 
    } 
}
