/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40810
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40810 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40810
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        var_11 = (arr_1 [i_0 + 1]);
        arr_2 [7] [7] = 1335;
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 17;i_4 += 1)
                        {
                            {
                                arr_13 [i_3] [i_2] = (((var_2 ? 39839 : (arr_4 [i_2]))));
                                arr_14 [i_0] [i_0] [i_0] [i_2] [i_0] [i_0] [5] = 25715;
                                var_12 &= 0;
                            }
                        }
                    }
                    var_13 = (min(var_13, ((((arr_7 [i_0] [i_1] [i_1] [i_2]) ? 58004 : ((65535 << (48300 - 48299))))))));
                }
            }
        }
        var_14 = (min(var_14, (max(((min(var_9, (arr_6 [i_0] [i_0 - 1])))), ((min(26772, 16376)))))));
    }
    for (int i_5 = 2; i_5 < 18;i_5 += 1)
    {
        arr_17 [i_5] = arr_15 [i_5 + 1] [13];
        arr_18 [i_5 + 3] [i_5 - 2] = 27227;

        for (int i_6 = 0; i_6 < 21;i_6 += 1)
        {
            /* LoopNest 2 */
            for (int i_7 = 0; i_7 < 21;i_7 += 1)
            {
                for (int i_8 = 1; i_8 < 20;i_8 += 1)
                {
                    {
                        arr_28 [i_7] [i_8] [i_8] [i_7] [i_6] [i_7] &= min(var_2, ((min(var_4, 39745))));
                        var_15 = (max(var_15, 39820));
                    }
                }
            }
            arr_29 [i_5 + 3] [i_6] [i_6] = 4;
            var_16 = 26772;
            arr_30 [i_5 - 2] [i_6] = ((4518 ? ((((49160 ? var_4 : 15)))) : 52033));

            for (int i_9 = 0; i_9 < 21;i_9 += 1)
            {
                var_17 = 65535;
                arr_34 [i_6] [i_6] [i_6] = (max(((25715 ? ((42631 ^ (arr_33 [i_5 + 1] [i_9]))) : (46028 | 25715))), 39745));
            }
        }
        /* vectorizable */
        for (int i_10 = 3; i_10 < 19;i_10 += 1)
        {
            /* LoopNest 3 */
            for (int i_11 = 0; i_11 < 21;i_11 += 1)
            {
                for (int i_12 = 0; i_12 < 21;i_12 += 1)
                {
                    for (int i_13 = 1; i_13 < 19;i_13 += 1)
                    {
                        {
                            arr_44 [i_5] [i_10 - 3] [i_11] [i_12] [i_13 - 1] &= 65512;
                            arr_45 [i_5] [i_5] &= (((arr_36 [i_10]) ? 25736 : 61620));
                            var_18 -= ((!(arr_20 [i_5])));
                        }
                    }
                }
            }
            var_19 = arr_39 [i_5] [i_5 - 1] [i_5];
        }
    }
    for (int i_14 = 0; i_14 < 23;i_14 += 1)
    {
        var_20 = (min(var_20, ((((min((max(49155, 13911), (arr_46 [i_14] [i_14])))))))));
        arr_48 [i_14] = (min((max(((22905 >> (((arr_47 [i_14]) - 55843)))), ((((arr_46 [i_14] [i_14]) != (arr_46 [i_14] [i_14])))))), (((65535 ? 0 : 16381)))));
    }
    var_21 = (max(var_21, (max(15134, 14553))));
    var_22 = ((var_10 + ((max(26826, (var_0 > 30541))))));
    #pragma endscop
}
