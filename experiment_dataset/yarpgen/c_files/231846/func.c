/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231846
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231846 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231846
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
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */int) arr_0 [i_0]);
        arr_3 [i_0] [i_0] |= ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_1 [i_0]))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned int i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            arr_7 [i_0] [(_Bool)1] [i_0] = arr_1 [i_1];
            /* LoopNest 3 */
            for (unsigned int i_2 = 2; i_2 < 13; i_2 += 1) 
            {
                for (signed char i_3 = 3; i_3 < 13; i_3 += 1) 
                {
                    for (unsigned int i_4 = 0; i_4 < 15; i_4 += 1) 
                    {
                        {
                            arr_16 [i_0] [i_0] [2] [i_2] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_0 [i_0]))));
                            arr_17 [i_0] [i_0] [i_2] [i_0] [12] = ((/* implicit */int) (!(((/* implicit */_Bool) 33554431U))));
                            arr_18 [i_2] [i_3 - 3] [i_2] [i_2] [i_1] [(unsigned short)2] [i_2] = arr_9 [i_0] [i_2];
                        }
                    } 
                } 
            } 
            /* LoopSeq 2 */
            for (unsigned char i_5 = 3; i_5 < 14; i_5 += 4) 
            {
                arr_22 [i_0] [i_5] = ((/* implicit */unsigned int) arr_4 [i_0] [i_1] [i_5 - 2]);
                arr_23 [(_Bool)1] = ((/* implicit */signed char) arr_20 [i_5] [i_1] [i_5 + 1]);
            }
            for (int i_6 = 0; i_6 < 15; i_6 += 3) 
            {
                arr_27 [i_6] = ((/* implicit */unsigned char) (~((~(((/* implicit */int) arr_4 [i_1] [i_1] [i_1]))))));
                arr_28 [8U] [8U] [i_1] [8U] |= ((/* implicit */long long int) (+(arr_5 [i_0] [i_1] [i_6])));
                arr_29 [i_6] [i_0] = (-((+(((/* implicit */int) arr_24 [1U] [i_1] [i_1])))));
                arr_30 [4] = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_26 [i_6] [14] [i_0]))));
                arr_31 [8U] [8U] [i_6] [i_6] &= ((/* implicit */unsigned int) (!(arr_4 [(unsigned short)1] [i_1] [i_6])));
            }
            /* LoopNest 2 */
            for (signed char i_7 = 4; i_7 < 13; i_7 += 2) 
            {
                for (long long int i_8 = 1; i_8 < 14; i_8 += 1) 
                {
                    {
                        arr_37 [i_8] [i_1] = ((/* implicit */_Bool) (+(((/* implicit */int) arr_12 [i_8] [i_1] [i_7] [i_8] [i_1] [i_7 + 2]))));
                        arr_38 [i_0] [0LL] [8LL] [i_7] |= ((/* implicit */int) arr_13 [i_0] [i_7] [6U] [i_7] [i_8]);
                        arr_39 [i_8] = arr_21 [i_0] [i_0] [i_0] [i_0];
                    }
                } 
            } 
            arr_40 [i_0] [i_0] [(_Bool)1] = ((/* implicit */unsigned int) (~(arr_5 [i_0] [(unsigned char)11] [5U])));
        }
        /* vectorizable */
        for (long long int i_9 = 0; i_9 < 15; i_9 += 1) 
        {
            arr_43 [i_0] [i_0] [(unsigned char)3] = ((/* implicit */_Bool) (-(((/* implicit */int) arr_4 [i_9] [i_0] [(unsigned short)7]))));
            arr_44 [i_0] [i_0] [7LL] = ((/* implicit */unsigned short) arr_36 [i_0] [i_9] [i_9] [i_9] [(_Bool)1]);
        }
        arr_45 [i_0] = ((/* implicit */unsigned short) (!((!(((/* implicit */_Bool) (+(arr_21 [i_0] [i_0] [12U] [i_0]))))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (int i_10 = 1; i_10 < 13; i_10 += 1) 
        {
            arr_49 [i_0] [i_0] = ((/* implicit */unsigned short) (~((~(arr_6 [i_0] [i_10] [i_10])))));
            arr_50 [(_Bool)1] [i_10] = ((/* implicit */_Bool) arr_21 [i_0] [i_0] [i_10] [i_0]);
        }
    }
    var_10 = ((/* implicit */unsigned int) (-((+(var_0)))));
    var_11 = ((/* implicit */int) var_8);
    var_12 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (+(var_7))))));
}
