/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204323
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204323 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204323
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
    for (unsigned char i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        var_20 = var_13;
        arr_2 [i_0] = ((/* implicit */int) min((arr_0 [i_0] [i_0]), (arr_0 [i_0] [i_0])));
    }
    for (unsigned char i_1 = 0; i_1 < 25; i_1 += 4) /* same iter space */
    {
        /* LoopNest 3 */
        for (signed char i_2 = 2; i_2 < 23; i_2 += 2) 
        {
            for (signed char i_3 = 0; i_3 < 25; i_3 += 3) 
            {
                for (int i_4 = 1; i_4 < 24; i_4 += 4) 
                {
                    {
                        arr_13 [i_1] [i_1] [i_1] [i_3] [i_1] |= (+(((/* implicit */int) arr_9 [i_1] [i_1] [i_1])));
                        arr_14 [i_3] [i_3] = ((/* implicit */unsigned char) -946521262);
                        arr_15 [i_3] [i_3] [20] [i_4] = ((/* implicit */signed char) -2147483643);
                        var_21 |= ((/* implicit */int) arr_6 [i_1]);
                    }
                } 
            } 
        } 
        arr_16 [i_1] = ((/* implicit */signed char) 1761000494);
        var_22 *= ((/* implicit */signed char) min((((/* implicit */int) arr_5 [i_1])), (((((/* implicit */int) arr_11 [i_1] [i_1] [i_1] [i_1])) / (((/* implicit */int) arr_11 [i_1] [i_1] [i_1] [i_1]))))));
        arr_17 [i_1] = ((((/* implicit */_Bool) 1761000489)) ? (((((/* implicit */_Bool) ((unsigned char) (unsigned char)14))) ? ((+(((/* implicit */int) (unsigned char)242)))) : (((((/* implicit */_Bool) (unsigned char)233)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) arr_4 [i_1] [i_1])))))) : (((/* implicit */int) ((((/* implicit */int) ((signed char) (signed char)-50))) != (-2020797049)))));
    }
    /* vectorizable */
    for (unsigned char i_5 = 0; i_5 < 25; i_5 += 4) /* same iter space */
    {
        arr_21 [i_5] = ((/* implicit */signed char) (unsigned char)173);
        /* LoopSeq 2 */
        for (unsigned char i_6 = 0; i_6 < 25; i_6 += 2) 
        {
            arr_24 [i_5] [i_6] [i_5] = (-(((/* implicit */int) ((unsigned char) arr_5 [i_6]))));
            /* LoopNest 2 */
            for (unsigned char i_7 = 0; i_7 < 25; i_7 += 1) 
            {
                for (int i_8 = 4; i_8 < 21; i_8 += 1) 
                {
                    {
                        arr_30 [i_5] [i_5] = ((/* implicit */signed char) ((((/* implicit */int) arr_12 [7] [i_8 + 4] [i_8 - 3] [i_8 - 4] [i_8 - 4])) * (((/* implicit */int) arr_12 [4] [i_8 + 2] [i_8 - 2] [i_8 + 2] [i_8 + 2]))));
                        arr_31 [9] [(unsigned char)22] [i_7] [i_6] [i_5] = arr_22 [i_5] [i_5] [21];
                    }
                } 
            } 
        }
        for (int i_9 = 4; i_9 < 24; i_9 += 3) 
        {
            var_23 = ((/* implicit */signed char) arr_19 [i_5]);
            arr_36 [i_5] [i_9] = ((/* implicit */signed char) ((((/* implicit */int) (unsigned char)250)) * (((/* implicit */int) arr_22 [i_9 - 3] [i_9 - 4] [i_9 - 3]))));
            var_24 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)146)) || (((/* implicit */_Bool) arr_23 [i_5] [i_5] [i_5]))));
        }
    }
    var_25 = ((/* implicit */unsigned char) var_1);
}
