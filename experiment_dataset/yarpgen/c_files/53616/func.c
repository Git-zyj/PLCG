/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53616
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53616 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53616
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
    var_18 = var_8;
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_19 = ((/* implicit */_Bool) min(((-(((((/* implicit */int) (_Bool)0)) - (((/* implicit */int) (_Bool)1)))))), (((((/* implicit */_Bool) arr_2 [i_0])) ? (((arr_1 [i_0] [i_0]) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)1)))) : (((/* implicit */int) ((signed char) (_Bool)0)))))));
        /* LoopNest 2 */
        for (signed char i_1 = 2; i_1 < 13; i_1 += 4) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
                    {
                        for (signed char i_4 = 2; i_4 < 13; i_4 += 3) 
                        {
                            {
                                arr_16 [(_Bool)1] [(signed char)0] [i_3] [(signed char)11] [i_3] [i_3] [i_4] = ((/* implicit */_Bool) ((min((((/* implicit */int) ((_Bool) (_Bool)1))), ((-(((/* implicit */int) (_Bool)1)))))) * ((~(((/* implicit */int) (_Bool)1))))));
                                var_20 ^= ((/* implicit */signed char) ((_Bool) ((arr_8 [i_0] [i_1] [i_4]) ? (((/* implicit */int) min((var_12), ((_Bool)1)))) : (((/* implicit */int) (!(var_15)))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        for (signed char i_6 = 0; i_6 < 17; i_6 += 4) 
                        {
                            {
                                arr_21 [i_5] [i_1] [i_2] [i_5] [i_6] = ((/* implicit */signed char) max(((_Bool)1), ((_Bool)1)));
                                var_21 = ((/* implicit */_Bool) ((((arr_10 [(_Bool)1] [i_6] [(signed char)14] [i_1 - 1]) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_10 [i_6] [i_6] [(signed char)1] [i_1 - 2])))) - (((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) (signed char)-9))))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_22 [i_0] = (_Bool)0;
        arr_23 [i_0] = (signed char)31;
    }
    /* vectorizable */
    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
    {
        /* LoopNest 2 */
        for (signed char i_8 = 0; i_8 < 22; i_8 += 2) 
        {
            for (signed char i_9 = 0; i_9 < 22; i_9 += 3) 
            {
                {
                    var_22 = (_Bool)0;
                    arr_33 [i_8] [i_7] = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_32 [i_7])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)-32)))) << (((((/* implicit */int) arr_28 [i_7] [i_8])) + (53)))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
        {
            for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
            {
                {
                    arr_42 [i_10] [i_11] = ((signed char) (signed char)-90);
                    arr_43 [(_Bool)1] [(_Bool)1] &= ((_Bool) ((((/* implicit */_Bool) (signed char)7)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (_Bool)1))));
                    /* LoopNest 2 */
                    for (_Bool i_12 = 0; i_12 < 0; i_12 += 1) 
                    {
                        for (signed char i_13 = 2; i_13 < 21; i_13 += 4) 
                        {
                            {
                                var_23 *= ((/* implicit */_Bool) (+(((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) (_Bool)1))))));
                                arr_50 [(_Bool)1] [(_Bool)1] [i_10] [i_11] [(signed char)10] [i_11] [i_13] = ((_Bool) arr_32 [i_13 + 1]);
                                arr_51 [i_11] [i_10] [i_11] [(_Bool)1] [i_13] = arr_37 [(signed char)6] [(signed char)6] [i_11];
                                var_24 = ((/* implicit */_Bool) (-(((/* implicit */int) arr_30 [i_10] [i_11] [i_12]))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
}
