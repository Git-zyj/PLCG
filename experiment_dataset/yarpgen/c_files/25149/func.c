/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25149
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25149 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25149
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
    for (unsigned char i_0 = 1; i_0 < 9; i_0 += 2) 
    {
        var_16 = (unsigned char)159;
        var_17 = (unsigned char)177;
    }
    for (unsigned char i_1 = 0; i_1 < 19; i_1 += 3) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned char i_2 = 0; i_2 < 19; i_2 += 4) 
        {
            /* LoopSeq 2 */
            for (unsigned char i_3 = 2; i_3 < 17; i_3 += 4) 
            {
                /* LoopNest 2 */
                for (unsigned char i_4 = 0; i_4 < 19; i_4 += 1) 
                {
                    for (unsigned char i_5 = 0; i_5 < 19; i_5 += 2) 
                    {
                        {
                            var_18 = (unsigned char)69;
                            var_19 &= (unsigned char)224;
                            var_20 *= (unsigned char)152;
                        }
                    } 
                } 
                arr_17 [i_1] [i_1] [i_3] = (unsigned char)78;
                arr_18 [i_1] [i_2] [(unsigned char)11] [i_2] = (unsigned char)255;
                var_21 = (unsigned char)152;
            }
            for (unsigned char i_6 = 0; i_6 < 19; i_6 += 1) 
            {
                var_22 &= (unsigned char)255;
                var_23 = (unsigned char)255;
                var_24 = ((/* implicit */unsigned char) min((var_24), ((unsigned char)244)));
            }
            arr_22 [i_2] [i_2] |= (unsigned char)189;
        }
        for (unsigned char i_7 = 0; i_7 < 19; i_7 += 4) 
        {
            var_25 = (unsigned char)19;
            /* LoopSeq 1 */
            for (unsigned char i_8 = 0; i_8 < 19; i_8 += 3) 
            {
                var_26 = (unsigned char)206;
                var_27 = ((/* implicit */unsigned char) max((var_27), ((unsigned char)2)));
                arr_30 [i_1] [i_7] [i_8] [i_7] &= (unsigned char)130;
                var_28 = (unsigned char)255;
            }
            var_29 ^= (unsigned char)0;
        }
        arr_31 [i_1] = (unsigned char)19;
        var_30 = (unsigned char)78;
    }
    /* vectorizable */
    for (unsigned char i_9 = 2; i_9 < 13; i_9 += 2) 
    {
        var_31 *= (unsigned char)118;
        /* LoopNest 2 */
        for (unsigned char i_10 = 0; i_10 < 15; i_10 += 4) 
        {
            for (unsigned char i_11 = 3; i_11 < 14; i_11 += 3) 
            {
                {
                    var_32 += (unsigned char)242;
                    var_33 = (unsigned char)182;
                    var_34 = ((/* implicit */unsigned char) min((var_34), ((unsigned char)92)));
                }
            } 
        } 
    }
    /* LoopSeq 2 */
    for (unsigned char i_12 = 0; i_12 < 19; i_12 += 4) 
    {
        var_35 = (unsigned char)30;
        var_36 = (unsigned char)122;
    }
    for (unsigned char i_13 = 0; i_13 < 12; i_13 += 3) 
    {
        var_37 = (unsigned char)2;
        var_38 *= (unsigned char)255;
    }
    var_39 = var_12;
}
