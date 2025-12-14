/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217091
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217091 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217091
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
    var_15 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) ((((/* implicit */int) var_0)) | (((/* implicit */int) var_2))))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) var_14))))) : (((/* implicit */int) ((((/* implicit */int) var_13)) != (((/* implicit */int) var_7))))))) - (((/* implicit */int) ((var_0) || (((/* implicit */_Bool) var_11)))))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 1; i_0 < 21; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_16 = var_1;
                    arr_8 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_3 [i_0] [i_1]))))) ? (((/* implicit */int) arr_3 [i_0] [i_1])) : (((/* implicit */int) arr_3 [i_0] [i_1]))));
                }
            } 
        } 
        arr_9 [i_0] = ((/* implicit */unsigned char) var_1);
        var_17 = var_11;
    }
    var_18 = ((/* implicit */_Bool) ((((/* implicit */int) var_4)) ^ (((/* implicit */int) var_6))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned char i_3 = 3; i_3 < 21; i_3 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned char i_4 = 0; i_4 < 23; i_4 += 1) 
        {
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                {
                    arr_16 [i_3] [i_3] [i_3] [i_5] = (!(arr_4 [i_3 - 2] [i_3 + 2] [i_3]));
                    arr_17 [(_Bool)1] [(unsigned char)18] [(unsigned char)10] &= ((/* implicit */unsigned char) ((((var_6) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_11)))) - (((/* implicit */int) arr_13 [(unsigned char)20]))));
                    /* LoopNest 2 */
                    for (unsigned char i_6 = 0; i_6 < 23; i_6 += 1) 
                    {
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                        {
                            {
                                arr_25 [i_3] [i_4] [i_3] [i_3] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */int) var_14)) * (((/* implicit */int) arr_3 [i_3] [i_3]))));
                                var_19 = arr_7 [i_3] [i_3] [i_6] [i_3];
                                var_20 = ((/* implicit */_Bool) ((((/* implicit */int) arr_2 [i_3] [i_7])) * (((/* implicit */int) arr_2 [i_3] [i_3]))));
                            }
                        } 
                    } 
                }
            } 
        } 
        /* LoopSeq 2 */
        for (_Bool i_8 = 0; i_8 < 0; i_8 += 1) 
        {
            var_21 = arr_22 [i_3] [i_3] [i_8 + 1] [i_8 + 1] [i_8 + 1] [i_3] [i_3];
            arr_28 [i_3] [(unsigned char)2] |= arr_7 [(_Bool)1] [(_Bool)1] [(_Bool)1] [(_Bool)1];
        }
        for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) 
        {
            arr_33 [i_3] = ((/* implicit */_Bool) var_9);
            var_22 ^= ((/* implicit */unsigned char) (-(((/* implicit */int) arr_11 [(_Bool)1]))));
        }
        arr_34 [i_3 - 1] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) arr_5 [i_3] [i_3] [i_3])) : (((/* implicit */int) var_13))));
        var_23 = ((/* implicit */_Bool) ((((/* implicit */int) arr_31 [i_3 + 2] [i_3])) % (((/* implicit */int) arr_5 [i_3] [i_3] [i_3]))));
        var_24 = ((/* implicit */unsigned char) arr_27 [i_3] [i_3]);
    }
}
