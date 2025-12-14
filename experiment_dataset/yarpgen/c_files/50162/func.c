/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50162
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50162 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50162
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
    /* LoopNest 2 */
    for (signed char i_0 = 3; i_0 < 9; i_0 += 2) 
    {
        for (unsigned short i_1 = 1; i_1 < 9; i_1 += 4) 
        {
            {
                var_16 ^= ((/* implicit */signed char) 2452049474185941462LL);
                arr_5 [i_1] = ((/* implicit */int) var_12);
            }
        } 
    } 
    var_17 = ((/* implicit */_Bool) 16909997738011921939ULL);
    /* LoopSeq 2 */
    for (unsigned char i_2 = 0; i_2 < 19; i_2 += 4) 
    {
        var_18 = ((/* implicit */unsigned int) min((var_18), (((/* implicit */unsigned int) var_1))));
        arr_8 [i_2] = 86474514;
    }
    for (unsigned int i_3 = 1; i_3 < 18; i_3 += 4) 
    {
        /* LoopNest 2 */
        for (signed char i_4 = 0; i_4 < 19; i_4 += 1) 
        {
            for (unsigned char i_5 = 0; i_5 < 19; i_5 += 1) 
            {
                {
                    var_19 = ((/* implicit */int) var_3);
                    /* LoopNest 2 */
                    for (unsigned long long int i_6 = 0; i_6 < 19; i_6 += 2) 
                    {
                        for (unsigned char i_7 = 3; i_7 < 17; i_7 += 3) 
                        {
                            {
                                var_20 -= var_3;
                                arr_25 [i_3 - 1] [i_4] [i_3 - 1] [i_3 + 1] [(short)5] [i_5] [8] = ((/* implicit */unsigned char) var_14);
                                var_21 = ((/* implicit */signed char) var_6);
                            }
                        } 
                    } 
                    arr_26 [i_3] [i_4] [i_5] = ((/* implicit */unsigned int) var_2);
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 19; i_8 += 2) 
                    {
                        for (long long int i_9 = 0; i_9 < 19; i_9 += 2) 
                        {
                            {
                                var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) var_13))));
                                var_23 = ((/* implicit */long long int) var_2);
                            }
                        } 
                    } 
                    /* LoopSeq 3 */
                    for (unsigned long long int i_10 = 0; i_10 < 19; i_10 += 3) 
                    {
                        arr_36 [i_3 - 1] [i_4] [i_5] [i_10] = ((/* implicit */unsigned int) 86474514);
                        var_24 = ((/* implicit */long long int) -86474522);
                        arr_37 [i_3 + 1] [i_4] [i_5] [i_10] = ((/* implicit */unsigned char) var_5);
                    }
                    for (int i_11 = 0; i_11 < 19; i_11 += 3) 
                    {
                        var_25 ^= ((/* implicit */int) var_13);
                        var_26 &= ((/* implicit */_Bool) var_0);
                        arr_40 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5] = ((/* implicit */signed char) 86474521);
                        arr_41 [i_3] [i_3] [i_3] [i_3] [i_11] = ((/* implicit */_Bool) -86474515);
                    }
                    for (signed char i_12 = 0; i_12 < 19; i_12 += 1) 
                    {
                        arr_44 [i_12] = ((/* implicit */signed char) -714008610);
                        arr_45 [i_12] [i_5] [(short)4] = ((/* implicit */_Bool) var_14);
                        arr_46 [i_4] [i_12] [i_4] [7U] [7U] = ((/* implicit */unsigned char) 394998593U);
                        var_27 ^= ((/* implicit */unsigned int) var_14);
                    }
                }
            } 
        } 
        arr_47 [i_3] [i_3] = ((/* implicit */unsigned long long int) 2847438151U);
        var_28 = ((/* implicit */int) var_13);
        var_29 ^= ((/* implicit */unsigned long long int) var_6);
        arr_48 [i_3] = ((/* implicit */unsigned int) var_13);
    }
}
