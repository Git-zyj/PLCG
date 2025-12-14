/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222064
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222064 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222064
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
    var_13 |= ((/* implicit */int) ((var_3) <= (var_5)));
    var_14 = ((/* implicit */_Bool) var_5);
    var_15 = ((((((var_0) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_4)))) - (((/* implicit */int) (unsigned short)34542)))) >= (((((/* implicit */int) (((_Bool)1) || (((/* implicit */_Bool) var_5))))) << (((var_3) + (1415108218))))));
    var_16 = ((/* implicit */signed char) var_10);
    /* LoopSeq 4 */
    for (int i_0 = 0; i_0 < 17; i_0 += 2) /* same iter space */
    {
        arr_2 [i_0] = ((/* implicit */_Bool) (~(var_9)));
        arr_3 [i_0] = ((/* implicit */unsigned short) ((((((/* implicit */int) arr_0 [i_0])) * ((+(((/* implicit */int) arr_0 [i_0])))))) >= (((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) <= (((/* implicit */int) (signed char)102)))))))));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 17; i_2 += 2) 
            {
                for (unsigned short i_3 = 0; i_3 < 17; i_3 += 1) 
                {
                    {
                        arr_12 [(unsigned short)10] [i_1] [i_2] [i_2] = ((/* implicit */_Bool) max((1335660864), (((/* implicit */int) (_Bool)1))));
                        var_17 = ((/* implicit */signed char) (_Bool)1);
                        arr_13 [i_3] [i_3] [i_3] [i_1] [i_1] [i_3] = ((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_8 [(signed char)3] [(signed char)3] [(signed char)3] [(signed char)3])) ? (((/* implicit */int) arr_4 [i_3])) : (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) (!(arr_4 [i_3]))))));
                    }
                } 
            } 
        } 
        var_18 -= ((/* implicit */unsigned short) (_Bool)1);
    }
    for (int i_4 = 0; i_4 < 17; i_4 += 2) /* same iter space */
    {
        var_19 = ((/* implicit */signed char) (+((-(((/* implicit */int) (_Bool)0))))));
        arr_16 [i_4] = ((/* implicit */_Bool) -1335660878);
        arr_17 [i_4] = ((/* implicit */unsigned short) (~(max((arr_10 [i_4] [i_4] [i_4] [i_4]), (((/* implicit */int) (_Bool)1))))));
        arr_18 [i_4] = var_2;
        var_20 ^= ((/* implicit */int) (!(((/* implicit */_Bool) ((var_4) ? ((+(((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) (unsigned short)64970)))))));
    }
    /* vectorizable */
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        arr_21 [i_5] = ((/* implicit */unsigned short) (((-(((/* implicit */int) (_Bool)1)))) != (((/* implicit */int) (_Bool)0))));
        arr_22 [i_5] = ((((/* implicit */int) arr_20 [i_5])) < (((/* implicit */int) arr_19 [i_5])));
    }
    /* vectorizable */
    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
    {
        var_21 = ((/* implicit */_Bool) (-(((arr_5 [i_6] [i_6] [i_6]) ? (arr_1 [i_6]) : (((/* implicit */int) (signed char)23))))));
        arr_25 [(signed char)3] = var_0;
        /* LoopNest 2 */
        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
        {
            for (signed char i_8 = 0; i_8 < 11; i_8 += 3) 
            {
                {
                    var_22 = ((/* implicit */_Bool) (-(((/* implicit */int) arr_24 [i_6]))));
                    /* LoopSeq 1 */
                    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                    {
                        var_23 *= ((/* implicit */signed char) -1768944706);
                        var_24 = (!(((/* implicit */_Bool) (~(1314412130)))));
                        arr_34 [i_7] [i_9] [i_6] [i_8] [i_8] [i_7] = var_10;
                        var_25 = ((/* implicit */int) min((var_25), (((/* implicit */int) arr_7 [(signed char)4] [i_7] [4]))));
                    }
                    arr_35 [i_7] [10] [i_7] [i_7] = ((/* implicit */_Bool) (-(((/* implicit */int) (signed char)121))));
                }
            } 
        } 
        /* LoopSeq 2 */
        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
        {
            var_26 = ((((/* implicit */int) arr_19 [i_6])) - (((/* implicit */int) arr_19 [i_6])));
            arr_38 [(_Bool)0] [(_Bool)0] [i_10] = ((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)-1))))) ? (((/* implicit */int) arr_32 [i_6] [i_10] [3])) : (((/* implicit */int) (((_Bool)1) || (((/* implicit */_Bool) arr_29 [i_10] [(_Bool)1] [i_6]))))));
            arr_39 [i_6] [i_10] [(signed char)1] = (!(((/* implicit */_Bool) var_2)));
        }
        for (int i_11 = 3; i_11 < 9; i_11 += 4) 
        {
            var_27 = ((/* implicit */signed char) (~(arr_10 [i_6] [i_11 + 2] [(signed char)16] [i_11])));
            arr_43 [(_Bool)1] [(signed char)8] = ((/* implicit */_Bool) ((arr_0 [i_11 - 1]) ? (var_9) : (((/* implicit */int) (unsigned short)29739))));
            var_28 *= ((/* implicit */unsigned short) arr_9 [i_6] [(unsigned short)15] [i_11] [0]);
        }
    }
}
