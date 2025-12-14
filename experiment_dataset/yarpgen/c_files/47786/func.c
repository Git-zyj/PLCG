/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47786
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47786 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47786
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
    var_15 -= ((/* implicit */int) var_7);
    /* LoopSeq 3 */
    for (unsigned int i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (long long int i_1 = 3; i_1 < 24; i_1 += 1) 
        {
            for (long long int i_2 = 1; i_2 < 24; i_2 += 4) 
            {
                {
                    /* LoopSeq 2 */
                    for (int i_3 = 1; i_3 < 22; i_3 += 1) 
                    {
                        var_16 = var_4;
                        var_17 = ((/* implicit */unsigned char) var_1);
                        arr_10 [i_3] [11U] [i_2] [i_1 - 2] [(unsigned char)15] [i_3] = ((/* implicit */unsigned char) var_7);
                        var_18 = ((/* implicit */long long int) var_0);
                    }
                    for (unsigned char i_4 = 0; i_4 < 25; i_4 += 4) 
                    {
                        var_19 = ((/* implicit */unsigned char) var_1);
                        arr_13 [i_0] [i_1] [i_0] [i_0] = var_4;
                        var_20 = ((/* implicit */long long int) var_11);
                    }
                    var_21 = ((/* implicit */unsigned char) var_0);
                    var_22 = ((/* implicit */unsigned int) min((var_22), (((/* implicit */unsigned int) var_4))));
                    arr_14 [15U] [15U] [i_2 + 1] [i_2 + 1] = ((/* implicit */long long int) var_1);
                }
            } 
        } 
        var_23 = ((/* implicit */int) var_2);
        var_24 -= ((/* implicit */unsigned int) var_12);
    }
    for (long long int i_5 = 1; i_5 < 16; i_5 += 2) /* same iter space */
    {
        arr_17 [(unsigned char)15] [(unsigned char)15] = ((/* implicit */int) var_2);
        /* LoopSeq 3 */
        for (int i_6 = 0; i_6 < 17; i_6 += 2) /* same iter space */
        {
            arr_20 [i_6] [i_5] = ((/* implicit */unsigned char) var_7);
            arr_21 [8U] [2U] [i_6] = ((/* implicit */unsigned int) var_10);
        }
        for (int i_7 = 0; i_7 < 17; i_7 += 2) /* same iter space */
        {
            arr_24 [i_5] [i_7] = var_8;
            arr_25 [i_5 - 1] = ((/* implicit */int) var_4);
            arr_26 [i_5] [i_5 + 1] [i_5 + 1] = ((/* implicit */int) var_13);
            var_25 = ((/* implicit */int) var_9);
        }
        for (int i_8 = 0; i_8 < 17; i_8 += 2) /* same iter space */
        {
            arr_29 [i_5 - 1] [i_8] [(unsigned char)2] = var_13;
            arr_30 [i_5 + 1] [i_5 + 1] = ((/* implicit */unsigned char) var_6);
            var_26 = ((/* implicit */unsigned int) var_0);
            var_27 = ((/* implicit */long long int) min((var_27), (((/* implicit */long long int) var_5))));
            var_28 = ((/* implicit */unsigned char) max((var_28), (var_13)));
        }
        arr_31 [i_5] = ((/* implicit */unsigned char) var_6);
    }
    for (long long int i_9 = 1; i_9 < 16; i_9 += 2) /* same iter space */
    {
        arr_35 [i_9] = ((/* implicit */long long int) var_8);
        arr_36 [i_9 + 1] = ((/* implicit */int) var_7);
    }
}
