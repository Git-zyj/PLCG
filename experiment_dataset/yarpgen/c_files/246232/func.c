/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246232
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246232 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246232
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
    for (signed char i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        arr_3 [(signed char)2] = ((/* implicit */signed char) (+(((/* implicit */int) arr_0 [i_0]))));
        arr_4 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (((/* implicit */int) arr_1 [i_0] [i_0]))));
    }
    /* vectorizable */
    for (signed char i_1 = 0; i_1 < 24; i_1 += 3) 
    {
        /* LoopSeq 4 */
        for (signed char i_2 = 1; i_2 < 22; i_2 += 4) 
        {
            /* LoopSeq 2 */
            for (signed char i_3 = 2; i_3 < 22; i_3 += 3) 
            {
                var_16 -= ((/* implicit */signed char) ((((/* implicit */int) (signed char)-21)) < (((/* implicit */int) arr_11 [i_2 + 1] [i_2 + 2] [i_3 - 2] [(signed char)16]))));
                var_17 = arr_8 [i_2];
                /* LoopSeq 1 */
                for (signed char i_4 = 0; i_4 < 24; i_4 += 3) 
                {
                    var_18 -= ((/* implicit */signed char) ((((/* implicit */int) var_2)) * (((/* implicit */int) arr_8 [(signed char)2]))));
                    arr_14 [i_2] [(signed char)14] &= ((/* implicit */signed char) ((((/* implicit */int) var_6)) <= (((/* implicit */int) var_3))));
                }
            }
            for (signed char i_5 = 2; i_5 < 21; i_5 += 4) 
            {
                var_19 = ((/* implicit */signed char) (~(((/* implicit */int) ((signed char) var_10)))));
                var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) ((((/* implicit */int) arr_9 [i_2 + 1] [i_5] [i_5 + 2])) < (((/* implicit */int) (signed char)38)))))));
                /* LoopNest 2 */
                for (signed char i_6 = 0; i_6 < 24; i_6 += 3) 
                {
                    for (signed char i_7 = 1; i_7 < 21; i_7 += 3) 
                    {
                        {
                            var_21 = ((/* implicit */signed char) min((var_21), ((signed char)81)));
                            var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_20 [i_1] [i_2 - 1] [i_5 + 2] [i_5])) ? (((/* implicit */int) arr_20 [i_5] [i_6] [i_5 + 2] [i_5])) : (((/* implicit */int) arr_20 [i_1] [i_2] [i_5] [i_5])))))));
                        }
                    } 
                } 
            }
            arr_22 [i_1] [(signed char)22] |= ((/* implicit */signed char) (~(((/* implicit */int) ((((/* implicit */_Bool) (signed char)119)) || (((/* implicit */_Bool) arr_15 [i_2] [(signed char)17])))))));
            var_23 = ((/* implicit */signed char) min((var_23), ((signed char)4)));
        }
        for (signed char i_8 = 0; i_8 < 24; i_8 += 4) 
        {
            var_24 += arr_24 [i_1];
            var_25 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_6 [(signed char)9] [i_8])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_0))));
            var_26 -= ((/* implicit */signed char) ((((/* implicit */int) arr_7 [(signed char)6] [i_8] [i_1])) < (((/* implicit */int) var_12))));
        }
        for (signed char i_9 = 2; i_9 < 23; i_9 += 4) 
        {
            arr_29 [i_1] [i_1] [i_9] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_16 [i_1] [i_9 + 1] [i_9 - 2])) ? (((/* implicit */int) arr_16 [i_9] [i_9] [i_9 - 2])) : (((/* implicit */int) arr_16 [i_1] [i_1] [i_9 - 2]))));
            var_27 = ((/* implicit */signed char) (-(((/* implicit */int) (signed char)-85))));
            /* LoopSeq 1 */
            for (signed char i_10 = 2; i_10 < 23; i_10 += 4) 
            {
                arr_33 [(signed char)1] [(signed char)1] [i_1] [i_1] = var_6;
                var_28 = ((/* implicit */signed char) min((var_28), (((/* implicit */signed char) (+(((/* implicit */int) arr_8 [i_9])))))));
                var_29 ^= var_5;
            }
        }
        for (signed char i_11 = 2; i_11 < 20; i_11 += 3) 
        {
            var_30 ^= (signed char)56;
            var_31 = ((/* implicit */signed char) (~(((/* implicit */int) arr_11 [(signed char)4] [i_11 - 2] [i_11 + 2] [(signed char)4]))));
        }
        arr_38 [i_1] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (signed char)-125))));
        var_32 = ((/* implicit */signed char) ((((/* implicit */int) var_15)) <= (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (signed char)-80)) : (((/* implicit */int) arr_32 [i_1] [i_1] [i_1] [i_1]))))));
        arr_39 [i_1] = arr_16 [i_1] [(signed char)3] [i_1];
    }
    var_33 |= (signed char)-3;
    /* LoopNest 2 */
    for (signed char i_12 = 0; i_12 < 15; i_12 += 3) 
    {
        for (signed char i_13 = 0; i_13 < 15; i_13 += 3) 
        {
            {
                arr_46 [i_13] [i_13] = arr_27 [i_12];
                var_34 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)14))))) ? (((/* implicit */int) arr_10 [i_13] [i_13] [i_12])) : ((~(((/* implicit */int) (signed char)-43))))))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_0 [i_12]))));
                arr_47 [(signed char)2] &= min((var_1), (((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)28)) && (((/* implicit */_Bool) arr_27 [i_13]))))));
            }
        } 
    } 
    var_35 = var_10;
}
