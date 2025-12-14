/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196741
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196741 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196741
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
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 21; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 22; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 22; i_3 += 2) 
                    {
                        for (int i_4 = 1; i_4 < 18; i_4 += 3) 
                        {
                            {
                                arr_13 [i_0] [i_0] [i_0 - 1] [i_0 - 1] [i_3] |= 8388480;
                                var_14 = ((/* implicit */short) max((var_14), (((/* implicit */short) arr_3 [i_2] [i_2] [i_0]))));
                                var_15 = ((/* implicit */short) ((((/* implicit */_Bool) min(((short)-19400), (((/* implicit */short) arr_11 [i_0 - 1] [i_0 - 1] [i_0] [i_0] [i_0] [i_0 + 1] [i_4 + 1]))))) ? (((((/* implicit */int) (short)28266)) + (((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_0]))))))) : (((/* implicit */int) arr_0 [i_0 - 1]))));
                            }
                        } 
                    } 
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (short i_5 = 1; i_5 < 20; i_5 += 1) /* same iter space */
                    {
                        var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)21634)) ? (((/* implicit */int) (short)19400)) : (((/* implicit */int) (short)(-32767 - 1)))))) ? (((/* implicit */int) (short)19399)) : (((/* implicit */int) (signed char)0))));
                        arr_17 [i_0] [i_0] [i_2] = (~(632799155));
                        var_17 = var_8;
                        var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) (!(((/* implicit */_Bool) arr_10 [i_2] [i_5 - 1])))))));
                    }
                    for (short i_6 = 1; i_6 < 20; i_6 += 1) /* same iter space */
                    {
                        var_19 = ((/* implicit */short) (~(((/* implicit */int) ((((((/* implicit */_Bool) (short)30948)) ? (var_9) : (((/* implicit */int) arr_5 [i_2])))) != (((/* implicit */int) arr_7 [i_0 - 1] [i_1])))))));
                        var_20 ^= ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_2 [i_6 - 1] [i_6])) ? (((/* implicit */int) (short)252)) : (var_13))) ^ (max((max((arr_8 [i_0] [i_1] [i_1]), (((/* implicit */int) arr_11 [i_0 - 1] [i_0] [i_0] [i_0] [i_0 + 1] [i_0 - 1] [i_0])))), (((/* implicit */int) var_3))))));
                        /* LoopSeq 2 */
                        for (short i_7 = 0; i_7 < 22; i_7 += 3) 
                        {
                            var_21 |= 1047108340;
                            var_22 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */short) arr_7 [i_2] [i_0])), (arr_22 [(short)16] [(signed char)13])))) ? (((/* implicit */int) arr_20 [i_0] [i_0 + 1] [i_0] [i_6 + 2])) : (((/* implicit */int) ((((/* implicit */int) arr_7 [i_0] [i_2])) == (((/* implicit */int) (short)-19394))))))))));
                        }
                        for (int i_8 = 0; i_8 < 22; i_8 += 3) 
                        {
                            arr_28 [i_0] [i_1] [i_0] [i_6] [i_8] = ((((/* implicit */int) (signed char)58)) * (((/* implicit */int) (short)(-32767 - 1))));
                            var_23 *= ((/* implicit */int) max(((short)0), (((/* implicit */short) (signed char)-16))));
                        }
                    }
                    for (signed char i_9 = 3; i_9 < 20; i_9 += 4) 
                    {
                        var_24 += ((/* implicit */int) var_8);
                        arr_33 [i_0] [19] [i_0] [i_2] [i_9 + 2] [i_9] = ((/* implicit */signed char) ((((/* implicit */int) arr_19 [i_0 + 1] [i_2] [i_9] [i_9 + 2])) >= (((/* implicit */int) ((((/* implicit */int) var_2)) >= (((/* implicit */int) arr_19 [i_0 + 1] [i_2] [i_2] [i_9])))))));
                        arr_34 [i_0] [i_0] [i_0] = ((((/* implicit */_Bool) ((((/* implicit */int) (short)-19405)) | (((/* implicit */int) (short)-19402))))) ? (((/* implicit */int) arr_10 [i_0] [i_9 - 1])) : (((/* implicit */int) (signed char)127)));
                        var_25 = ((/* implicit */signed char) ((((((arr_12 [i_0] [i_1] [i_2] [i_2] [i_2] [i_2]) + (2147483647))) >> (((((((/* implicit */_Bool) (short)19399)) ? (((/* implicit */int) (signed char)38)) : (((/* implicit */int) (short)-19394)))) - (28))))) >> (((arr_6 [i_0]) + (275208268)))));
                    }
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (short i_10 = 1; i_10 < 17; i_10 += 3) 
    {
        for (int i_11 = 0; i_11 < 19; i_11 += 2) 
        {
            for (short i_12 = 3; i_12 < 15; i_12 += 1) 
            {
                {
                    arr_41 [i_10] = ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-118))));
                    arr_42 [i_11] [i_12] [i_12] [i_11] = ((/* implicit */short) ((int) max((((/* implicit */int) arr_36 [i_12 + 3] [i_12])), (var_11))));
                }
            } 
        } 
    } 
}
