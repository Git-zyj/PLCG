/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44025
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44025 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44025
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
    var_15 = ((/* implicit */short) ((((((/* implicit */_Bool) var_4)) ? ((-(((/* implicit */int) var_11)))) : (((/* implicit */int) var_9)))) >= (((/* implicit */int) var_5))));
    var_16 = var_7;
    /* LoopSeq 3 */
    for (short i_0 = 2; i_0 < 10; i_0 += 4) 
    {
        arr_3 [i_0 - 2] = ((/* implicit */signed char) ((((min((((((/* implicit */int) arr_0 [(short)1] [i_0])) / (((/* implicit */int) (signed char)-26)))), ((~(((/* implicit */int) arr_0 [i_0] [i_0])))))) + (2147483647))) << (((max((((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_2 [i_0 - 2] [i_0 - 2])) : (((/* implicit */int) var_8)))), (((/* implicit */int) arr_0 [i_0 + 1] [i_0 + 1])))) - (106)))));
        /* LoopNest 2 */
        for (short i_1 = 4; i_1 < 8; i_1 += 2) 
        {
            for (short i_2 = 0; i_2 < 11; i_2 += 2) 
            {
                {
                    arr_9 [i_0 - 2] [i_1] [i_2] &= ((/* implicit */signed char) min((((/* implicit */int) arr_2 [i_1 - 2] [i_1 - 2])), (((((/* implicit */int) (short)-29666)) ^ (((((/* implicit */_Bool) arr_4 [i_0 - 2] [i_0 - 2] [(short)9])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (short)29666))))))));
                    /* LoopSeq 2 */
                    for (signed char i_3 = 0; i_3 < 11; i_3 += 4) 
                    {
                        var_17 = ((/* implicit */short) (+((~(((/* implicit */int) min((((/* implicit */short) var_5)), (var_1))))))));
                        arr_13 [i_0] [i_1] [i_2] [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_11 [i_3] [(short)1] [i_0] [i_0])))) : (((/* implicit */int) min((((/* implicit */short) arr_0 [i_1 + 1] [i_2])), (arr_2 [i_0] [i_0 - 1]))))))) ? (((/* implicit */int) ((((/* implicit */int) arr_7 [i_1] [i_1 + 2] [i_2] [i_3])) == (((/* implicit */int) arr_7 [i_0] [i_1 + 3] [i_2] [i_3]))))) : (((/* implicit */int) ((((/* implicit */int) arr_10 [i_0] [i_0 - 1] [i_0 + 1] [i_1] [i_1 - 2])) != (((/* implicit */int) arr_5 [i_0] [(short)4])))))));
                        var_18 = ((/* implicit */short) ((((((/* implicit */int) arr_8 [i_0 + 1] [(short)2] [i_0 - 2] [i_1 + 1])) + (((/* implicit */int) arr_8 [i_0 - 1] [(short)5] [i_0 + 1] [i_1 - 4])))) == ((~(((/* implicit */int) arr_8 [i_0 - 2] [i_0] [i_0 - 2] [i_1 - 1]))))));
                        arr_14 [(short)9] [(signed char)1] [(short)9] = ((/* implicit */signed char) ((((/* implicit */_Bool) max(((short)-29666), (((/* implicit */short) (signed char)25))))) ? (((((/* implicit */_Bool) arr_1 [i_0 - 2])) ? (((/* implicit */int) arr_1 [i_0 - 2])) : (((/* implicit */int) arr_1 [i_0 - 2])))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0 + 1])))))));
                        arr_15 [i_3] [i_1 - 1] = ((/* implicit */short) ((((/* implicit */_Bool) arr_5 [i_3] [(short)3])) ? (((/* implicit */int) min((((short) arr_4 [i_0] [i_1] [(short)1])), ((short)31397)))) : (((/* implicit */int) arr_10 [i_3] [i_2] [i_0] [(short)5] [i_0]))));
                    }
                    for (short i_4 = 3; i_4 < 9; i_4 += 2) 
                    {
                        var_19 = ((/* implicit */short) arr_8 [i_4] [i_2] [i_1 + 1] [i_0]);
                        var_20 = ((/* implicit */short) ((((/* implicit */int) min((arr_17 [i_0 - 2] [i_1 - 1] [i_4 + 1]), (((/* implicit */short) arr_0 [(short)7] [i_1 - 3]))))) ^ (((((/* implicit */_Bool) (short)29666)) ? (((/* implicit */int) (signed char)-20)) : (((/* implicit */int) (short)3))))));
                    }
                }
            } 
        } 
    }
    for (short i_5 = 1; i_5 < 18; i_5 += 2) 
    {
        var_21 = var_12;
        var_22 = ((/* implicit */short) ((((/* implicit */int) max((arr_20 [i_5] [(short)2]), (max((((/* implicit */short) arr_19 [i_5])), ((short)3)))))) ^ (((/* implicit */int) arr_18 [i_5 + 2]))));
        arr_21 [i_5 + 1] = ((short) max(((short)-29672), (arr_18 [i_5 + 1])));
    }
    /* vectorizable */
    for (signed char i_6 = 0; i_6 < 23; i_6 += 2) 
    {
        /* LoopNest 2 */
        for (short i_7 = 0; i_7 < 23; i_7 += 2) 
        {
            for (short i_8 = 0; i_8 < 23; i_8 += 4) 
            {
                {
                    var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_25 [i_8] [i_7] [i_6])) ? (((/* implicit */int) arr_25 [i_6] [i_7] [i_6])) : (((/* implicit */int) arr_25 [i_6] [i_7] [i_8]))));
                    arr_29 [(short)7] [(short)4] [i_8] = ((/* implicit */signed char) ((((/* implicit */int) arr_28 [i_6] [i_6])) + (((/* implicit */int) var_7))));
                    arr_30 [i_6] [i_7] [i_6] [i_7] &= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_24 [i_8])) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_23 [i_7]))))) ? (((/* implicit */int) ((((/* implicit */int) var_2)) == (((/* implicit */int) arr_23 [i_6]))))) : (((((/* implicit */_Bool) arr_25 [i_6] [i_7] [i_8])) ? (((/* implicit */int) arr_25 [i_8] [i_7] [i_6])) : (((/* implicit */int) (short)32767))))));
                }
            } 
        } 
        var_24 = ((/* implicit */signed char) arr_24 [i_6]);
    }
    var_25 = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */int) var_2)) >= (((/* implicit */int) max(((short)7), (var_1))))))) - (((/* implicit */int) var_4))));
}
