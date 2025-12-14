/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45651
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45651 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45651
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_2;

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 3; i_1 < 23;i_1 += 1)
        {
            var_11 = ((~var_9) << (-104 + 114));
            var_12 = ((-(arr_4 [i_1 - 1] [i_0] [i_0])));
            var_13 -= var_1;
            var_14 -= (((((arr_2 [i_0]) ? var_2 : var_9)) * (!var_6)));
        }
        /* vectorizable */
        for (int i_2 = 1; i_2 < 22;i_2 += 1)
        {
            var_15 ^= (arr_3 [i_0] [i_0] [i_0]);
            var_16 = ((3647209579 ? 62 : 2147483647));
        }
        for (int i_3 = 3; i_3 < 23;i_3 += 1)
        {
            var_17 = ((+((11 ? (arr_7 [i_0] [i_3 + 1]) : var_6))));
            arr_10 [i_3] [i_3] = (min(((967955343 ? var_0 : (arr_9 [i_0]))), (((arr_6 [i_3] [i_0]) ? (~1) : (((arr_6 [i_0] [i_0]) ? (arr_7 [i_0] [i_0]) : var_1))))));
            var_18 = (((((+(((arr_6 [i_3 + 1] [i_0]) ? var_1 : (arr_5 [i_0] [i_0])))))) ? (647757733 != var_0) : ((((var_2 > (arr_2 [i_0]))) ? var_0 : (max(var_4, var_9))))));
        }
        var_19 = ((((((((255 + (arr_0 [0])))) ? 13 : (((arr_8 [i_0]) ? 1165110762 : var_4))))) ? (((((var_6 ? 148499746 : var_8))) ? (arr_4 [i_0] [i_0] [i_0]) : (~-31))) : ((var_8 * (!var_4)))));
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 17;i_4 += 1)
    {
        arr_13 [i_4] = ((((2147483647 ? var_6 : (arr_0 [i_4])))) ? ((((arr_7 [i_4] [i_4]) <= var_1))) : (((!(arr_12 [i_4] [i_4])))));

        for (int i_5 = 2; i_5 < 14;i_5 += 1)
        {
            var_20 += -15;
            var_21 += (~-126);
            arr_16 [i_5] [i_5] [i_5 - 2] = ((arr_14 [i_4] [i_5 - 2]) ? (arr_7 [i_4] [i_5 + 3]) : (arr_5 [i_4] [i_5]));
        }
        var_22 -= (~65);
        var_23 = var_1;
        /* LoopNest 2 */
        for (int i_6 = 1; i_6 < 13;i_6 += 1)
        {
            for (int i_7 = 3; i_7 < 14;i_7 += 1)
            {
                {
                    var_24 = (((((var_5 ? var_9 : (arr_18 [i_4] [i_4])))) ? (!10) : (((arr_8 [15]) / var_6))));

                    for (int i_8 = 4; i_8 < 16;i_8 += 1)
                    {
                        var_25 = (max(var_25, (arr_0 [i_7 + 3])));
                        var_26 ^= ((!(arr_20 [14] [i_6 + 1] [i_7 - 2] [i_4])));
                    }
                    for (int i_9 = 1; i_9 < 16;i_9 += 1)
                    {
                        var_27 = (((arr_2 [i_6]) ? ((~(arr_8 [i_4]))) : (((var_6 ? (arr_14 [i_6] [i_7]) : (arr_0 [i_4]))))));
                        var_28 = (((~var_2) * -8733530440592268024));
                        var_29 = 236;
                        var_30 = ((var_7 ? (~var_7) : var_3));

                        for (int i_10 = 2; i_10 < 15;i_10 += 1)
                        {
                            var_31 = -236019029;
                            var_32 += var_4;
                        }
                        for (int i_11 = 2; i_11 < 14;i_11 += 1)
                        {
                            var_33 &= ((+((((arr_22 [i_4] [i_6 + 4]) && var_4)))));
                            var_34 = (max(var_34, ((((arr_21 [i_6 + 2] [i_6 + 1] [i_7 - 1] [i_11 - 1]) ? var_3 : (arr_8 [i_6 + 3]))))));
                            var_35 = ((237 ? (((arr_22 [i_4] [i_4]) * (arr_22 [i_4] [i_4]))) : (((arr_11 [i_11]) ? var_9 : var_5))));
                            var_36 = -59;
                        }
                    }
                }
            }
        }
    }
    var_37 = ((~((((((var_0 ? var_8 : var_7))) != var_2)))));
    #pragma endscop
}
