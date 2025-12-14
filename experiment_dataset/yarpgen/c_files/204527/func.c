/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204527
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204527 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204527
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned int i_0 = 1; i_0 < 22; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */short) (+(((/* implicit */int) arr_0 [20U]))));
        var_10 ^= ((/* implicit */short) ((((/* implicit */int) (_Bool)1)) < (((/* implicit */int) (_Bool)1))));
        /* LoopSeq 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            /* LoopNest 2 */
            for (short i_2 = 1; i_2 < 19; i_2 += 1) 
            {
                for (unsigned int i_3 = 2; i_3 < 22; i_3 += 1) 
                {
                    {
                        var_11 += ((/* implicit */_Bool) ((((/* implicit */int) arr_4 [i_3] [(short)2])) << (((((/* implicit */int) (_Bool)1)) << (((/* implicit */int) var_2))))));
                        var_12 = ((/* implicit */short) min((var_12), (((/* implicit */short) ((arr_5 [i_0 - 1] [i_2 + 3]) ? (((/* implicit */int) arr_12 [i_2 + 1] [i_2 + 2])) : (((/* implicit */int) arr_12 [i_2 + 4] [i_2 + 3])))))));
                        /* LoopSeq 1 */
                        for (short i_4 = 2; i_4 < 22; i_4 += 1) 
                        {
                            arr_16 [i_0] [i_4 - 2] [i_3] [i_0] [i_1] [i_0] = ((((/* implicit */_Bool) arr_6 [i_2 + 4] [i_0 + 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (arr_6 [i_2 + 2] [i_0 + 1]));
                            arr_17 [20U] [0U] [0U] [i_4] |= ((/* implicit */short) (-(arr_13 [i_3 - 1] [i_4 - 2] [i_2] [i_0 + 1] [i_2] [i_2 + 3] [i_3])));
                            arr_18 [i_0] [i_0] [i_2] [i_3 - 1] [i_0] = (short)-9682;
                            var_13 = ((/* implicit */short) arr_6 [i_0 - 1] [i_0 + 1]);
                        }
                    }
                } 
            } 
            var_14 = ((/* implicit */short) (+(((/* implicit */int) (_Bool)1))));
            /* LoopNest 3 */
            for (short i_5 = 0; i_5 < 23; i_5 += 2) 
            {
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    for (unsigned int i_7 = 0; i_7 < 23; i_7 += 1) 
                    {
                        {
                            arr_27 [i_0] [i_1] [i_0] = ((/* implicit */_Bool) arr_15 [(short)9]);
                            arr_28 [i_0] [i_1] = ((4294967295U) * (2146503410U));
                        }
                    } 
                } 
            } 
        }
        for (unsigned int i_8 = 0; i_8 < 23; i_8 += 4) 
        {
            var_15 = ((/* implicit */short) ((((/* implicit */_Bool) arr_21 [i_0] [i_0 + 1] [i_8] [(_Bool)1])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_26 [i_0] [i_0 - 1] [i_0]))));
            var_16 -= ((/* implicit */_Bool) (~(((/* implicit */int) var_4))));
            var_17 *= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((var_6) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0] [i_8]))) : (var_3))))));
            arr_33 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) var_6))) <= (2146503410U)));
        }
        for (unsigned int i_9 = 0; i_9 < 23; i_9 += 3) 
        {
            var_18 &= ((/* implicit */short) ((((/* implicit */_Bool) ((var_4) ? (((/* implicit */int) arr_8 [22U] [22U] [i_9] [(_Bool)1])) : (((/* implicit */int) (_Bool)0))))) ? (((/* implicit */int) ((short) (_Bool)1))) : (((/* implicit */int) (_Bool)1))));
            var_19 += ((/* implicit */short) ((var_2) || (((/* implicit */_Bool) ((unsigned int) (_Bool)1)))));
        }
        var_20 *= ((/* implicit */unsigned int) var_9);
    }
    for (short i_10 = 0; i_10 < 23; i_10 += 2) 
    {
        arr_39 [i_10] = ((/* implicit */_Bool) ((unsigned int) arr_19 [i_10] [i_10] [i_10]));
        var_21 = ((/* implicit */_Bool) max((var_21), (((/* implicit */_Bool) 4294967281U))));
    }
    var_22 = ((/* implicit */short) max((var_22), (((/* implicit */short) ((var_0) ? ((+(((/* implicit */int) (_Bool)1)))) : (min((((((/* implicit */_Bool) 4227807602U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)0)))), (((/* implicit */int) var_9)))))))));
}
