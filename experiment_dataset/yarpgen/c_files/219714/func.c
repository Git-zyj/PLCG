/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219714
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219714 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219714
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
    /* LoopSeq 4 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_18 = ((/* implicit */short) ((4294967295U) != (4294967295U)));
        var_19 += ((/* implicit */_Bool) ((unsigned int) ((((/* implicit */int) ((unsigned char) var_7))) != (((/* implicit */int) arr_1 [(_Bool)1])))));
        var_20 = (signed char)88;
    }
    /* vectorizable */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        var_21 = ((/* implicit */short) var_7);
        /* LoopNest 3 */
        for (unsigned char i_2 = 3; i_2 < 19; i_2 += 3) 
        {
            for (signed char i_3 = 4; i_3 < 22; i_3 += 3) 
            {
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    {
                        arr_12 [i_1] [i_2] [i_2] [i_1] = ((/* implicit */unsigned char) (((+(arr_4 [i_2] [i_1]))) * (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (signed char)60)) == (((/* implicit */int) var_3))))))));
                        var_22 = ((/* implicit */short) (-(((/* implicit */int) ((signed char) var_4)))));
                    }
                } 
            } 
        } 
        arr_13 [i_1] = ((/* implicit */short) (-(((/* implicit */int) arr_5 [i_1] [i_1] [i_1]))));
        var_23 = ((/* implicit */short) (+((+(((/* implicit */int) var_0))))));
    }
    for (signed char i_5 = 0; i_5 < 25; i_5 += 3) 
    {
        var_24 = ((/* implicit */signed char) arr_15 [i_5]);
        /* LoopSeq 4 */
        /* vectorizable */
        for (unsigned char i_6 = 1; i_6 < 22; i_6 += 2) 
        {
            /* LoopNest 3 */
            for (short i_7 = 0; i_7 < 25; i_7 += 4) 
            {
                for (unsigned int i_8 = 0; i_8 < 25; i_8 += 4) 
                {
                    for (_Bool i_9 = 0; i_9 < 0; i_9 += 1) 
                    {
                        {
                            var_25 = ((/* implicit */unsigned char) ((3217347807U) | (((/* implicit */unsigned int) ((/* implicit */int) arr_24 [i_6 + 1] [i_9 + 1])))));
                            arr_27 [i_9] [i_6] [i_7] [i_6] [i_5] = ((/* implicit */signed char) (+(((/* implicit */int) arr_18 [i_6] [i_9 + 1] [i_9 + 1]))));
                            var_26 = (!(((/* implicit */_Bool) ((((/* implicit */int) (short)-19539)) / (((/* implicit */int) (signed char)56))))));
                        }
                    } 
                } 
            } 
            arr_28 [i_6] [i_6] [i_6] = ((/* implicit */unsigned char) (+(((((/* implicit */int) var_13)) + (((/* implicit */int) var_12))))));
        }
        for (signed char i_10 = 0; i_10 < 25; i_10 += 3) 
        {
            arr_32 [i_5] [i_10] = ((/* implicit */short) var_16);
            var_27 = ((/* implicit */_Bool) min((var_27), (((((/* implicit */int) ((((/* implicit */int) ((signed char) var_15))) >= (((/* implicit */int) (_Bool)1))))) == (((/* implicit */int) (!(((/* implicit */_Bool) arr_30 [i_5] [i_5])))))))));
            var_28 = ((/* implicit */short) min((((/* implicit */unsigned char) max((arr_15 [i_10]), (arr_25 [i_10] [i_10] [i_10] [i_10] [i_5] [i_5])))), (min((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)232)))));
        }
        for (signed char i_11 = 1; i_11 < 23; i_11 += 1) 
        {
            var_29 = ((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) arr_33 [i_11])));
            arr_36 [i_5] [i_11] = ((/* implicit */unsigned int) var_5);
        }
        for (short i_12 = 1; i_12 < 22; i_12 += 3) 
        {
            var_30 = ((/* implicit */_Bool) arr_38 [3U] [i_12 + 1] [i_12 - 1]);
            var_31 = ((/* implicit */unsigned int) ((signed char) (+(((unsigned int) arr_26 [i_5] [i_5] [i_12] [i_5] [i_5] [i_5] [i_5])))));
        }
    }
    for (unsigned char i_13 = 0; i_13 < 18; i_13 += 4) 
    {
        /* LoopNest 2 */
        for (signed char i_14 = 1; i_14 < 16; i_14 += 1) 
        {
            for (signed char i_15 = 1; i_15 < 17; i_15 += 2) 
            {
                {
                    var_32 = ((/* implicit */short) (_Bool)1);
                    arr_47 [i_13] [i_14] [i_14] = ((/* implicit */short) ((unsigned char) var_1));
                }
            } 
        } 
        var_33 = ((/* implicit */_Bool) var_14);
    }
    var_34 = ((/* implicit */unsigned char) var_16);
}
