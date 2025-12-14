/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248149
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248149 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248149
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
    /* vectorizable */
    for (short i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        var_20 = ((/* implicit */signed char) var_7);
        /* LoopSeq 1 */
        for (unsigned int i_1 = 3; i_1 < 19; i_1 += 4) 
        {
            var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) var_12))));
            var_22 = var_4;
            arr_5 [i_1] [(unsigned short)15] [i_1] = ((/* implicit */unsigned short) var_13);
            /* LoopNest 2 */
            for (unsigned char i_2 = 0; i_2 < 20; i_2 += 4) 
            {
                for (unsigned long long int i_3 = 1; i_3 < 16; i_3 += 2) 
                {
                    {
                        arr_12 [i_1] = ((/* implicit */signed char) var_13);
                        var_23 = ((/* implicit */short) min((var_23), (((/* implicit */short) var_16))));
                        /* LoopSeq 2 */
                        for (unsigned short i_4 = 3; i_4 < 19; i_4 += 1) 
                        {
                            var_24 = ((/* implicit */short) max((var_24), (((/* implicit */short) var_3))));
                            var_25 = var_14;
                            var_26 = ((/* implicit */short) var_18);
                            var_27 = ((/* implicit */signed char) var_0);
                            var_28 = ((/* implicit */short) min((var_28), (var_2)));
                        }
                        for (unsigned char i_5 = 0; i_5 < 20; i_5 += 4) 
                        {
                            arr_18 [i_1] [i_3 + 3] [(unsigned char)9] [i_1] [i_0] [6LL] [i_1] = ((/* implicit */_Bool) var_8);
                            var_29 &= ((/* implicit */_Bool) var_18);
                        }
                        arr_19 [i_1] = ((/* implicit */long long int) var_3);
                        arr_20 [i_2] [i_2] [i_1] [i_1] [(short)0] [i_0] = ((/* implicit */short) var_4);
                    }
                } 
            } 
        }
        arr_21 [i_0] = ((/* implicit */unsigned short) var_11);
    }
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned short i_6 = 0; i_6 < 24; i_6 += 2) 
    {
        arr_24 [i_6] [i_6] = var_15;
        /* LoopNest 3 */
        for (unsigned int i_7 = 0; i_7 < 24; i_7 += 4) 
        {
            for (long long int i_8 = 0; i_8 < 24; i_8 += 2) 
            {
                for (short i_9 = 0; i_9 < 24; i_9 += 1) 
                {
                    {
                        var_30 = ((/* implicit */unsigned short) var_2);
                        arr_32 [i_9] [i_7] = ((/* implicit */unsigned long long int) var_4);
                        var_31 = ((/* implicit */_Bool) min((var_31), (((/* implicit */_Bool) var_18))));
                        var_32 ^= ((/* implicit */_Bool) var_10);
                    }
                } 
            } 
        } 
    }
}
