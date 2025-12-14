/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247005
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247005 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247005
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_15 = -23;
                var_16 |= (arr_2 [10] [10]);
            }
        }
    }
    var_17 = 13061012008505941921;
    var_18 = var_3;
    var_19 |= 858975888;
    /* LoopNest 2 */
    for (int i_2 = 1; i_2 < 23;i_2 += 1)
    {
        for (int i_3 = 3; i_3 < 20;i_3 += 1)
        {
            {

                for (int i_4 = 0; i_4 < 24;i_4 += 1)
                {

                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 24;i_5 += 1) /* same iter space */
                    {
                        var_20 *= (arr_14 [i_2] [i_5]);
                        var_21 |= 1105361019;
                        var_22 -= (arr_5 [i_2 - 1]);
                    }
                    for (int i_6 = 0; i_6 < 24;i_6 += 1) /* same iter space */
                    {
                        var_23 = 54;
                        var_24 = (arr_5 [i_4]);
                        arr_18 [i_2] [i_3] [i_3] [i_3] [i_3] = (arr_11 [i_3]);
                    }
                    /* vectorizable */
                    for (int i_7 = 0; i_7 < 1;i_7 += 1)
                    {
                        var_25 = (arr_14 [i_2] [22]);
                        var_26 = arr_8 [i_2];
                        var_27 |= (arr_16 [i_2] [i_2] [i_2]);

                        for (int i_8 = 0; i_8 < 24;i_8 += 1)
                        {
                            var_28 += -627215196837594098;
                            var_29 = (arr_17 [i_2 + 1] [9] [i_3] [i_3]);
                        }
                        for (int i_9 = 0; i_9 < 24;i_9 += 1)
                        {
                            var_30 ^= (arr_24 [i_2] [i_9] [i_2] [i_3] [i_2] [i_9] [i_2]);
                            var_31 = arr_12 [i_2] [i_2] [i_3];
                        }
                        var_32 = (arr_9 [i_3]);
                    }

                    /* vectorizable */
                    for (int i_10 = 1; i_10 < 23;i_10 += 1)
                    {
                        var_33 = (min(var_33, 627215196837594097));
                        var_34 |= 30;
                    }
                    for (int i_11 = 0; i_11 < 24;i_11 += 1)
                    {
                        var_35 = (arr_12 [i_3] [i_2 - 1] [i_3]);

                        for (int i_12 = 4; i_12 < 23;i_12 += 1)
                        {
                            var_36 = (arr_16 [16] [16] [i_12]);
                            var_37 = 627215196837594093;
                            var_38 = (min(var_38, 0));
                        }
                        var_39 -= 30;
                    }
                    var_40 = -7;
                }
                for (int i_13 = 1; i_13 < 21;i_13 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_14 = 2; i_14 < 22;i_14 += 1)
                    {
                        for (int i_15 = 0; i_15 < 24;i_15 += 1)
                        {
                            {
                                var_41 *= 1;
                                var_42 = 858975888;
                            }
                        }
                    }
                    var_43 = (arr_24 [i_2] [i_2 - 1] [i_3] [i_3] [i_13] [i_3] [1]);
                    var_44 = 7168;
                }
                for (int i_16 = 2; i_16 < 20;i_16 += 1)
                {
                    var_45 = (arr_20 [i_2 - 1]);
                    var_46 = 9165535072417682244;
                    /* LoopNest 2 */
                    for (int i_17 = 0; i_17 < 1;i_17 += 1)
                    {
                        for (int i_18 = 4; i_18 < 22;i_18 += 1)
                        {
                            {
                                var_47 = (arr_14 [i_3] [i_16]);
                                var_48 = -6800110122179254078;
                                var_49 = (arr_21 [i_3]);
                            }
                        }
                    }
                    var_50 += -17628;
                }
                arr_54 [i_2] [i_3] [i_3] = 9176244569916390529;
            }
        }
    }
    #pragma endscop
}
