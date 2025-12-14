/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217358
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217358 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217358
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
    /* vectorizable */
    for (short i_0 = 2; i_0 < 15; i_0 += 1) 
    {
        var_12 = ((((/* implicit */_Bool) -1LL)) ? (((/* implicit */int) arr_1 [i_0 - 2])) : (((((/* implicit */int) var_6)) + (((/* implicit */int) (unsigned char)247)))));
        /* LoopSeq 1 */
        for (unsigned char i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            arr_7 [i_0] [i_0] = ((/* implicit */_Bool) var_7);
            /* LoopNest 2 */
            for (long long int i_2 = 2; i_2 < 16; i_2 += 3) 
            {
                for (signed char i_3 = 2; i_3 < 16; i_3 += 3) 
                {
                    {
                        arr_12 [(short)1] [i_1] [8] [i_3] = ((/* implicit */signed char) var_5);
                        arr_13 [i_1] [i_1] [i_1] [i_1] [i_3] [i_1] = ((/* implicit */unsigned short) var_8);
                    }
                } 
            } 
            var_13 = ((/* implicit */unsigned long long int) max((var_13), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (((int) (unsigned short)65535)) : (((/* implicit */int) var_4)))))));
        }
        arr_14 [(unsigned short)8] = ((/* implicit */int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_0 - 2] [i_0 + 3]))) : (arr_0 [i_0 - 2])));
        var_14 = ((/* implicit */_Bool) max((var_14), (((/* implicit */_Bool) 401721758))));
        arr_15 [(unsigned short)15] [(unsigned short)15] = ((/* implicit */unsigned long long int) ((401721758) / (((/* implicit */int) var_7))));
    }
    for (unsigned short i_4 = 0; i_4 < 12; i_4 += 2) 
    {
        arr_20 [i_4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)23)) ? ((~(12LL))) : (((((/* implicit */long long int) ((/* implicit */int) ((unsigned short) (_Bool)1)))) * ((-9223372036854775807LL - 1LL))))));
        arr_21 [i_4] = ((/* implicit */int) -7461934244354858136LL);
        arr_22 [i_4] = ((/* implicit */_Bool) var_8);
        var_15 = ((/* implicit */unsigned short) (_Bool)1);
        var_16 *= ((/* implicit */signed char) max((((/* implicit */long long int) arr_2 [i_4])), (8589934591LL)));
    }
    /* vectorizable */
    for (int i_5 = 3; i_5 < 9; i_5 += 1) 
    {
        arr_26 [i_5] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_11 [i_5 - 3] [i_5 - 1] [(_Bool)0] [i_5]))));
        arr_27 [i_5] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (unsigned short)65525))));
        arr_28 [i_5 - 2] [i_5] = ((/* implicit */_Bool) ((short) (~(((/* implicit */int) var_2)))));
    }
    var_17 = ((/* implicit */_Bool) (~(((/* implicit */int) var_11))));
    var_18 = ((/* implicit */signed char) (~(((((/* implicit */_Bool) 401721758)) ? (((/* implicit */int) (short)-18171)) : (((/* implicit */int) (_Bool)1))))));
    var_19 = ((-1) == (((/* implicit */int) var_9)));
}
