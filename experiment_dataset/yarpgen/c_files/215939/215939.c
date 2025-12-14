/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215939
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215939 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215939
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 3; i_0 < 15;i_0 += 1)
    {
        var_11 += (arr_1 [i_0 + 2]);
        var_12 -= (220 && -31847);
        var_13 -= (((((var_1 + (arr_1 [i_0])))) != (arr_0 [i_0 - 1])));

        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            var_14 ^= (!193);
            var_15 = (min(var_15, (((((((arr_1 [i_1]) ? var_9 : 343063299))) ? ((var_7 ? var_3 : var_5)) : var_7)))));
            var_16 &= ((((((arr_1 [i_0 + 1]) + (arr_0 [i_1])))) ? var_4 : (var_2 != -16384)));
        }
        for (int i_2 = 0; i_2 < 17;i_2 += 1)
        {
            var_17 ^= (1 + 81);
            var_18 = (min(var_18, (arr_4 [i_0 + 2])));

            for (int i_3 = 1; i_3 < 15;i_3 += 1)
            {
                var_19 = (min(var_19, var_2));
                var_20 += var_3;
            }
            for (int i_4 = 0; i_4 < 17;i_4 += 1)
            {
                var_21 ^= var_7;
                var_22 ^= 4294967278;
                var_23 ^= (var_10 - var_8);
            }
            var_24 ^= ((var_6 ? (arr_9 [i_0 + 1] [i_0 - 2] [i_0 + 1] [i_0]) : -1745587890));
            var_25 -= (((!(arr_11 [i_0] [i_0 - 3] [i_0 - 3]))));
        }
    }
    var_26 -= var_8;
    /* LoopNest 3 */
    for (int i_5 = 1; i_5 < 18;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 19;i_6 += 1)
        {
            for (int i_7 = 4; i_7 < 18;i_7 += 1)
            {
                {
                    var_27 *= (((((!(((var_2 & (arr_19 [i_6] [i_6] [i_5 - 1]))))))) + (arr_13 [i_5])));
                    var_28 &= (max(((((var_4 == (arr_14 [i_5 + 1]))) ? ((1 ? 9086150075066190726 : 16361)) : (-6954589215304132752 | -1299348784))), (((!(arr_18 [i_7 - 3] [i_6] [i_5 - 1]))))));
                    var_29 &= ((180 << (2513332469 - 2513332456)));
                    arr_21 [i_7] [i_6] [i_7 - 4] [i_7] |= -29944;
                }
            }
        }
    }
    var_30 -= (((min(2839344361184988821, 9002801208229888)) >= (((-(var_3 || var_7))))));
    /* LoopNest 2 */
    for (int i_8 = 0; i_8 < 0;i_8 += 1)
    {
        for (int i_9 = 0; i_9 < 22;i_9 += 1)
        {
            {
                var_31 -= ((!(!-4998587798216040122)));
                var_32 *= ((((var_7 ? var_2 : 0)) / -175));
            }
        }
    }
    #pragma endscop
}
