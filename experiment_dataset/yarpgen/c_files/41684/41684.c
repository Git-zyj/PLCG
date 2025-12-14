/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41684
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41684 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41684
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        arr_3 [i_0] = (((~var_9) ? 19480 : ((127 ? -113 : (arr_1 [i_0] [i_0])))));
        var_13 = ((~(arr_2 [i_0] [i_0])));

        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            arr_6 [i_0] [i_0] [i_0] = (arr_4 [i_0] [19] [i_0]);
            var_14 &= (min(((~((0 ? -127 : 113)))), (arr_5 [i_0] [i_0] [i_0])));
            arr_7 [i_0] [i_0] [i_0] = (((((((max(-1, 127))) ? (((arr_0 [i_0]) ? (arr_0 [i_1]) : (arr_5 [i_0] [11] [i_0]))) : ((var_5 ? (arr_5 [i_0] [i_0] [i_0]) : 90))))) ? ((((arr_2 [i_0] [i_0]) ? (arr_2 [i_0] [i_0]) : (arr_2 [i_0] [i_1])))) : (arr_1 [i_0] [i_1])));
        }
        var_15 = (arr_2 [i_0] [i_0]);
    }
    /* vectorizable */
    for (int i_2 = 2; i_2 < 22;i_2 += 1)
    {
        var_16 &= ((~(arr_10 [i_2 + 1])));
        arr_12 [i_2 + 1] = (arr_8 [i_2 - 2]);
        arr_13 [i_2] [i_2] = (~16);

        for (int i_3 = 4; i_3 < 21;i_3 += 1)
        {
            var_17 = (arr_8 [i_3 - 4]);
            arr_17 [i_2 - 1] [i_3] = -114;
        }
        for (int i_4 = 0; i_4 < 23;i_4 += 1)
        {
            arr_20 [i_2] [i_2] [i_4] = (arr_16 [i_2 - 2] [i_4] [i_4]);
            /* LoopNest 2 */
            for (int i_5 = 0; i_5 < 23;i_5 += 1)
            {
                for (int i_6 = 1; i_6 < 21;i_6 += 1)
                {
                    {

                        for (int i_7 = 1; i_7 < 22;i_7 += 1)
                        {
                            arr_29 [i_5] [i_2] [i_2] [i_2 - 2] [i_2] [i_2] = (((arr_23 [i_2 - 1] [i_2] [i_2 - 2] [i_2 - 1] [i_2 + 1]) ? -19 : (arr_15 [i_6 + 1] [i_7 - 1])));
                            arr_30 [i_5] [i_4] [i_4] [i_6] = (arr_27 [i_2] [i_4] [i_4] [i_6] [i_7 - 1]);
                        }
                        for (int i_8 = 0; i_8 < 23;i_8 += 1)
                        {
                            var_18 = ((!32767) ? (!166) : (arr_31 [i_2 + 1] [i_4] [i_5] [i_4] [9]));
                            var_19 = ((~(arr_25 [i_2 - 1] [i_2 - 1] [i_5] [i_2 - 1] [i_6])));
                            arr_34 [i_6 - 1] [i_5] [i_6 - 1] [i_6 + 2] = ((var_8 || (arr_23 [i_2] [i_4] [i_6 - 1] [i_6] [i_8])));
                        }
                        arr_35 [i_2] [i_2] [i_5] [i_6] [i_4] = (arr_21 [i_2] [i_4]);
                    }
                }
            }
        }
        arr_36 [i_2] [i_2 + 1] = (((arr_23 [i_2] [i_2 - 1] [i_2] [i_2] [18]) ? 31 : (arr_14 [i_2 + 1] [i_2 + 1])));
    }
    for (int i_9 = 0; i_9 < 23;i_9 += 1)
    {
        var_20 = (!3283039925);
        var_21 = ((-0 ? (max(48234, 16303012453004136685)) : ((min((arr_25 [i_9] [i_9] [i_9] [i_9] [i_9]), (arr_25 [i_9] [i_9] [i_9] [i_9] [i_9]))))));
        var_22 = ((((min(761568531, (~157)))) ? 227 : 65022));
    }
    for (int i_10 = 0; i_10 < 1;i_10 += 1)
    {
        /* LoopNest 2 */
        for (int i_11 = 0; i_11 < 25;i_11 += 1)
        {
            for (int i_12 = 4; i_12 < 23;i_12 += 1)
            {
                {
                    var_23 ^= 65002;
                    var_24 = ((((((arr_44 [i_12] [i_10] [i_12 + 2] [i_12 - 3]) ? (arr_44 [i_12] [i_10] [i_12 - 3] [i_12 - 1]) : (arr_44 [i_12 + 2] [i_10] [i_12] [i_12 - 3])))) ? (((arr_44 [i_12] [i_10] [i_12 + 2] [i_12 - 2]) ? (arr_44 [i_12] [i_10] [i_12 - 3] [i_12 - 1]) : (arr_44 [i_12 - 3] [i_10] [i_12 - 2] [i_12 - 2]))) : ((-1 ? -9223372036854775795 : var_0))));
                }
            }
        }
        arr_46 [i_10] = 65022;
        /* LoopNest 2 */
        for (int i_13 = 0; i_13 < 25;i_13 += 1)
        {
            for (int i_14 = 1; i_14 < 21;i_14 += 1)
            {
                {
                    var_25 = 12;
                    var_26 = 172;
                }
            }
        }
        arr_52 [i_10] = ((~(min((((761568531 ? var_7 : var_4))), ((var_4 ? (arr_39 [i_10]) : (arr_49 [i_10] [i_10] [i_10])))))));
    }
    var_27 -= var_9;
    #pragma endscop
}
