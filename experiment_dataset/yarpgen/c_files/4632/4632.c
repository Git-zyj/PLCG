/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4632
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4632 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4632
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        var_13 = (((arr_2 [i_0]) > (2898008201112572856 - var_4)));
        var_14 ^= ((((!(arr_3 [i_0]))) ? -1984446909 : ((max(((-(arr_1 [i_0 - 1]))), (max((arr_0 [11]), var_9)))))));
        var_15 = (max((!var_0), (((arr_1 [i_0 - 2]) <= ((((arr_2 [i_0]) >= 65535)))))));
    }
    for (int i_1 = 2; i_1 < 15;i_1 += 1)
    {
        var_16 = (min(var_16, (arr_4 [i_1 + 3])));
        var_17 -= 184;
        var_18 = ((-((((127 ? 5850163590741148510 : (arr_4 [i_1]))) - ((var_8 & (arr_4 [i_1 + 1])))))));
        var_19 = arr_5 [i_1] [i_1];
    }

    for (int i_2 = 3; i_2 < 18;i_2 += 1)
    {
        arr_10 [i_2] = 1984446892;
        var_20 = (max(var_20, ((max((arr_8 [i_2] [i_2 - 2]), (9223372036854775807 >= 1245860038))))));
    }
    for (int i_3 = 0; i_3 < 12;i_3 += 1)
    {
        var_21 = 25331;
        var_22 &= var_3;

        for (int i_4 = 0; i_4 < 12;i_4 += 1)
        {
            arr_17 [i_3] = (arr_9 [i_4] [i_3]);
            /* LoopNest 2 */
            for (int i_5 = 3; i_5 < 10;i_5 += 1)
            {
                for (int i_6 = 2; i_6 < 9;i_6 += 1)
                {
                    {
                        var_23 = (((arr_9 [i_5 - 3] [i_5 - 3]) ? (arr_9 [i_5 - 1] [i_5 + 2]) : (arr_9 [i_5 - 3] [i_5 - 1])));
                        var_24 = (max(((~(((arr_22 [7] [i_4]) ? 255 : -4045800613295337746)))), (((127 ^ (arr_18 [i_3] [i_5 - 2] [i_6 + 3]))))));
                        var_25 = arr_9 [i_4] [i_5 + 2];
                        var_26 = (arr_16 [i_3] [i_3] [4]);
                    }
                }
            }
        }
        for (int i_7 = 4; i_7 < 9;i_7 += 1)
        {
            arr_25 [1] [i_7] = (((arr_22 [i_3] [i_7]) ? var_12 : 13873));
            /* LoopNest 3 */
            for (int i_8 = 0; i_8 < 12;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 12;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 12;i_10 += 1)
                    {
                        {
                            var_27 -= (max(((~((~(arr_4 [i_7]))))), (((~(arr_22 [1] [i_7]))))));
                            var_28 *= (arr_8 [16] [i_8]);
                        }
                    }
                }
            }
        }
    }
    for (int i_11 = 4; i_11 < 20;i_11 += 1)
    {

        for (int i_12 = 3; i_12 < 20;i_12 += 1)
        {
            arr_39 [i_12] = (~1984446897);
            var_29 = (min(var_29, (((+((((arr_36 [i_11] [i_12 - 2] [i_11]) >= var_0))))))));
        }
        /* vectorizable */
        for (int i_13 = 0; i_13 < 24;i_13 += 1)
        {
            var_30 = 20743;
            arr_44 [i_13] = (arr_34 [i_11 + 4]);
            var_31 = (((arr_42 [i_11 + 4]) <= (arr_42 [i_11 + 2])));
            var_32 = 252;
        }
        var_33 = (((-(-10 ^ var_9))));
        var_34 = (max(var_34, ((max(-1195777540, ((-(arr_34 [i_11]))))))));
        var_35 = (arr_40 [i_11] [i_11]);
    }
    /* vectorizable */
    for (int i_14 = 4; i_14 < 21;i_14 += 1)
    {
        var_36 = (arr_45 [i_14 - 3] [i_14 - 4]);
        var_37 |= ((arr_38 [i_14] [i_14 - 4]) ? 1195777553 : var_0);
    }
    #pragma endscop
}
