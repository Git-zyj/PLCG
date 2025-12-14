/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22445
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22445 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22445
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
    var_14 = ((/* implicit */unsigned short) var_4);
    /* LoopSeq 2 */
    /* vectorizable */
    for (int i_0 = 2; i_0 < 11; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_1 [i_0] [i_0 - 1]))));
        /* LoopSeq 2 */
        for (unsigned char i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            var_15 = ((/* implicit */int) (!(((/* implicit */_Bool) var_13))));
            /* LoopNest 2 */
            for (unsigned char i_2 = 0; i_2 < 12; i_2 += 2) 
            {
                for (unsigned short i_3 = 4; i_3 < 11; i_3 += 3) 
                {
                    {
                        arr_12 [i_0] [i_1] [i_1] [i_2] [i_1] [i_1] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (unsigned char)38))));
                        var_16 = ((/* implicit */int) (!(((/* implicit */_Bool) var_3))));
                    }
                } 
            } 
        }
        for (int i_4 = 0; i_4 < 12; i_4 += 2) 
        {
            var_17 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_10 [i_0 - 2] [i_0] [i_0 - 2] [i_0 - 1]))));
            var_18 = ((/* implicit */unsigned short) min((var_18), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_14 [i_0] [i_0 + 1])))))));
        }
        arr_15 [i_0] |= (+(((/* implicit */int) var_3)));
    }
    /* vectorizable */
    for (unsigned short i_5 = 0; i_5 < 10; i_5 += 2) 
    {
        var_19 ^= ((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [i_5] [i_5] [i_5] [i_5]))));
        /* LoopSeq 2 */
        for (unsigned char i_6 = 3; i_6 < 9; i_6 += 4) 
        {
            var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) (unsigned short)15)) : (((/* implicit */int) (unsigned char)145))));
            var_21 = ((/* implicit */unsigned short) var_1);
            var_22 = ((/* implicit */unsigned short) (-(-635597266)));
        }
        for (int i_7 = 2; i_7 < 7; i_7 += 3) 
        {
            /* LoopNest 2 */
            for (int i_8 = 0; i_8 < 10; i_8 += 1) 
            {
                for (unsigned short i_9 = 1; i_9 < 9; i_9 += 4) 
                {
                    {
                        /* LoopSeq 3 */
                        for (int i_10 = 1; i_10 < 8; i_10 += 4) 
                        {
                            arr_33 [i_5] [i_5] [i_5] [i_9] = ((/* implicit */int) (unsigned char)0);
                            var_23 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((unsigned char) arr_11 [i_5])))));
                        }
                        for (unsigned short i_11 = 1; i_11 < 9; i_11 += 3) 
                        {
                            arr_37 [i_9] = ((((/* implicit */int) (unsigned short)65535)) | (((((/* implicit */int) (unsigned char)99)) + (((/* implicit */int) (unsigned char)48)))));
                            arr_38 [i_11] [i_11] [i_9] [i_9] [i_11] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [(unsigned char)7])) ? (-635597285) : (((/* implicit */int) (unsigned char)214)))))));
                            arr_39 [(unsigned char)4] [i_5] [i_7] [i_8] [i_9] [i_9] [i_9] = ((/* implicit */int) (unsigned short)0);
                        }
                        for (int i_12 = 0; i_12 < 10; i_12 += 3) 
                        {
                            var_24 = ((/* implicit */unsigned short) (unsigned char)232);
                            var_25 += ((/* implicit */unsigned char) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))));
                        }
                        arr_42 [i_5] [i_5] [i_8] [i_9] [i_5] [i_9] = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned short)0)) > (8191)));
                    }
                } 
            } 
            arr_43 [i_5] [i_5] [i_7] = ((/* implicit */unsigned short) var_0);
        }
        /* LoopNest 2 */
        for (int i_13 = 2; i_13 < 7; i_13 += 4) 
        {
            for (unsigned char i_14 = 2; i_14 < 9; i_14 += 4) 
            {
                {
                    var_26 = ((/* implicit */unsigned char) max((var_26), (((/* implicit */unsigned char) arr_22 [i_13 - 1] [i_13 - 2]))));
                    arr_50 [i_5] [i_13] [i_5] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_5 [i_5] [0] [i_14 + 1])) << (((((int) (unsigned short)56793)) - (56773)))));
                    var_27 = ((/* implicit */unsigned short) arr_31 [i_5] [i_5] [i_14] [i_14] [i_14]);
                }
            } 
        } 
        var_28 = ((/* implicit */int) (!(((/* implicit */_Bool) arr_22 [3] [i_5]))));
        var_29 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) -943722098))));
    }
    var_30 = var_13;
}
