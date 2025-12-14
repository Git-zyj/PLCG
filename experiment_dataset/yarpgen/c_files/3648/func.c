/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3648
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3648 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3648
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
    var_12 = ((/* implicit */signed char) max((var_12), (((/* implicit */signed char) (unsigned short)63))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        var_13 = ((/* implicit */short) (-(((/* implicit */int) var_9))));
        arr_3 [i_0] [i_0] |= ((/* implicit */short) ((long long int) arr_0 [i_0]));
        var_14 = ((/* implicit */unsigned short) min((var_14), (((/* implicit */unsigned short) (+((~(((/* implicit */int) var_8)))))))));
        /* LoopSeq 4 */
        for (long long int i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            var_15 = ((/* implicit */signed char) max((var_15), (((/* implicit */signed char) (!(((/* implicit */_Bool) arr_1 [i_0])))))));
            arr_6 [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) var_2)) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_5 [i_1])) : (((/* implicit */int) arr_2 [i_1])))) : (((((/* implicit */int) var_1)) - (((/* implicit */int) var_1))))));
            var_16 += ((/* implicit */signed char) ((((/* implicit */_Bool) arr_4 [i_1] [i_0] [i_0])) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_4 [i_0] [(unsigned short)2] [i_1]))));
            var_17 = ((/* implicit */signed char) min((var_17), (((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)65489)) ? (((((/* implicit */_Bool) (signed char)127)) ? (arr_1 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65473))))) : (var_3))))));
            var_18 = ((/* implicit */long long int) arr_0 [i_0]);
        }
        for (short i_2 = 0; i_2 < 14; i_2 += 1) 
        {
            var_19 = ((/* implicit */unsigned short) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [(short)8])))))));
            var_20 = ((/* implicit */unsigned short) var_2);
        }
        for (signed char i_3 = 0; i_3 < 14; i_3 += 1) 
        {
            var_21 = ((/* implicit */long long int) max((var_21), (var_2)));
            var_22 -= arr_0 [i_3];
            var_23 = arr_4 [i_3] [i_3] [i_3];
            var_24 = ((/* implicit */unsigned short) max((var_24), (((/* implicit */unsigned short) var_0))));
        }
        for (short i_4 = 0; i_4 < 14; i_4 += 3) 
        {
            arr_15 [i_4] = var_2;
            /* LoopNest 2 */
            for (long long int i_5 = 0; i_5 < 14; i_5 += 2) 
            {
                for (long long int i_6 = 0; i_6 < 14; i_6 += 2) 
                {
                    {
                        var_25 ^= arr_8 [i_0] [i_0];
                        var_26 ^= ((/* implicit */short) var_7);
                    }
                } 
            } 
            var_27 = ((/* implicit */long long int) max((var_27), (var_3)));
        }
        arr_21 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */int) arr_11 [i_0] [i_0] [i_0])) | (((/* implicit */int) arr_0 [i_0]))));
    }
}
