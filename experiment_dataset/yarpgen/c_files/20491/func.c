/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20491
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20491 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20491
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
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned char) (+(((/* implicit */int) (unsigned char)255))));
        arr_3 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_1 [i_0]))));
    }
    for (unsigned char i_1 = 0; i_1 < 25; i_1 += 1) 
    {
        arr_6 [i_1] = ((/* implicit */unsigned char) (+(((/* implicit */int) (unsigned char)255))));
        arr_7 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)208)) < (((/* implicit */int) (((~(((/* implicit */int) arr_5 [(unsigned char)2])))) <= (((((/* implicit */_Bool) (unsigned char)15)) ? (((/* implicit */int) arr_4 [i_1])) : (((/* implicit */int) arr_5 [i_1])))))))));
        arr_8 [i_1] [i_1] = (unsigned char)248;
    }
    /* vectorizable */
    for (unsigned char i_2 = 0; i_2 < 11; i_2 += 1) 
    {
        /* LoopNest 3 */
        for (unsigned char i_3 = 0; i_3 < 11; i_3 += 3) 
        {
            for (unsigned char i_4 = 0; i_4 < 11; i_4 += 1) 
            {
                for (unsigned char i_5 = 0; i_5 < 11; i_5 += 1) 
                {
                    {
                        var_17 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_0 [i_5])) <= (((/* implicit */int) (unsigned char)240))));
                        /* LoopSeq 3 */
                        for (unsigned char i_6 = 0; i_6 < 11; i_6 += 4) 
                        {
                            var_18 += ((/* implicit */unsigned char) (-((-(((/* implicit */int) (unsigned char)100))))));
                            arr_22 [i_2] [i_3] [i_2] [i_2] = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_18 [i_2] [i_3] [i_4] [i_5] [i_6]))));
                        }
                        for (unsigned char i_7 = 0; i_7 < 11; i_7 += 1) 
                        {
                            arr_25 [i_2] [(unsigned char)4] [i_3] [i_7] = (unsigned char)0;
                            var_19 = ((/* implicit */unsigned char) (-(((/* implicit */int) (unsigned char)43))));
                            var_20 -= ((/* implicit */unsigned char) ((((/* implicit */int) arr_11 [i_7])) + (((/* implicit */int) arr_11 [i_5]))));
                        }
                        for (unsigned char i_8 = 0; i_8 < 11; i_8 += 4) 
                        {
                            var_21 = ((/* implicit */unsigned char) (+(((/* implicit */int) ((((/* implicit */int) (unsigned char)0)) < (((/* implicit */int) arr_23 [i_2] [(unsigned char)0] [i_4] [i_5] [i_5] [i_8] [i_8])))))));
                            var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)233)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (unsigned char)255))))) ? (((/* implicit */int) arr_19 [i_2] [i_2] [(unsigned char)0] [(unsigned char)4] [i_5] [i_8])) : (((/* implicit */int) (unsigned char)31))));
                            var_23 = (unsigned char)219;
                        }
                        var_24 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_23 [i_2] [i_2] [i_2] [i_2] [i_2] [(unsigned char)1] [i_2])) > (((/* implicit */int) (unsigned char)3))));
                        /* LoopSeq 1 */
                        for (unsigned char i_9 = 0; i_9 < 11; i_9 += 1) 
                        {
                            arr_32 [i_2] [i_3] [i_2] [i_2] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)15)) > (((((/* implicit */_Bool) (unsigned char)2)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (unsigned char)255))))));
                            arr_33 [i_3] [i_3] [i_3] [(unsigned char)1] = ((unsigned char) arr_24 [i_3] [i_2] [i_2] [i_2] [i_2] [i_2]);
                        }
                        var_25 = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)213)) <= (((/* implicit */int) arr_14 [i_2] [i_3] [i_3]))));
                    }
                } 
            } 
        } 
        arr_34 [i_2] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)232)) >> (((((/* implicit */int) (unsigned char)238)) - (234)))))) ? (((/* implicit */int) arr_23 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] [i_2])) : (((((/* implicit */_Bool) (unsigned char)135)) ? (((/* implicit */int) arr_4 [(unsigned char)17])) : (((/* implicit */int) (unsigned char)219))))));
        arr_35 [i_2] [(unsigned char)0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_19 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2])) ? (((/* implicit */int) arr_16 [i_2] [(unsigned char)4] [i_2] [i_2])) : (((/* implicit */int) (unsigned char)45))));
    }
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned char i_10 = 0; i_10 < 14; i_10 += 1) 
    {
        var_26 = ((/* implicit */unsigned char) max((var_26), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)211)) ? (((/* implicit */int) arr_39 [i_10] [(unsigned char)10])) : (((/* implicit */int) (unsigned char)0)))))));
        arr_40 [i_10] [(unsigned char)4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) (unsigned char)19)) : (((/* implicit */int) (unsigned char)49))))) || (((/* implicit */_Bool) (unsigned char)128))));
    }
}
