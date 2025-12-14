/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51305
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51305 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51305
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 18;i_3 += 1)
                {
                    {
                        var_15 = 3298838226;
                        var_16 = ((~(~var_14)));
                    }
                }
            }

            for (int i_4 = 2; i_4 < 15;i_4 += 1)
            {
                var_17 = (min(var_17, (!var_9)));
                var_18 = ((((arr_7 [17] [i_1] [i_4] [i_4 + 1]) || var_1)));
                /* LoopNest 2 */
                for (int i_5 = 2; i_5 < 14;i_5 += 1)
                {
                    for (int i_6 = 3; i_6 < 16;i_6 += 1)
                    {
                        {
                            var_19 += (arr_8 [i_1]);
                            var_20 = var_14;
                        }
                    }
                }
                arr_19 [i_1] [i_1] &= var_9;
                arr_20 [i_0] [i_1] [i_4] = ((var_14 >> ((((((4899 ? 153 : (arr_11 [i_0] [i_1] [i_4]))) >> 1)) - 67))));
            }
            for (int i_7 = 0; i_7 < 18;i_7 += 1)
            {
                var_21 *= var_5;
                var_22 = var_2;
            }
            var_23 = (max(var_23, (((!(!var_8))))));
            var_24 = -var_0;
        }
        for (int i_8 = 1; i_8 < 15;i_8 += 1)
        {
            arr_27 [i_0] = ((var_0 ? (((arr_24 [i_0] [i_0] [2]) >> (((var_14 == (arr_15 [0] [i_8] [i_8 + 3] [i_0] [i_0] [i_0])))))) : (!var_3)));
            var_25 ^= var_0;
        }
        var_26 -= ((!(~74)));

        /* vectorizable */
        for (int i_9 = 1; i_9 < 16;i_9 += 1)
        {
            arr_32 [i_9] [i_0] = var_3;
            var_27 = 996129081;
            arr_33 [i_0] [i_9] [i_9] = ((!(arr_14 [i_0] [i_0] [i_9])));

            for (int i_10 = 0; i_10 < 18;i_10 += 1)
            {
                /* LoopNest 2 */
                for (int i_11 = 1; i_11 < 15;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 18;i_12 += 1)
                    {
                        {
                            var_28 = (((arr_0 [i_0 - 1]) | (arr_0 [i_0 - 1])));
                            arr_42 [i_9] [i_9] [i_10] [11] [i_0] [i_0] = 1;
                        }
                    }
                }
                var_29 = (max(var_29, var_7));
                arr_43 [i_0] [i_10] = (~var_6);
                var_30 ^= var_13;
                /* LoopNest 2 */
                for (int i_13 = 3; i_13 < 16;i_13 += 1)
                {
                    for (int i_14 = 0; i_14 < 18;i_14 += 1)
                    {
                        {
                            var_31 &= var_6;
                            var_32 = -4900;
                        }
                    }
                }
            }
            for (int i_15 = 0; i_15 < 1;i_15 += 1)
            {
                var_33 = arr_45 [i_9] [i_0] [i_0] [i_9];
                var_34 += ((-(~255)));
            }
        }
        /* vectorizable */
        for (int i_16 = 0; i_16 < 18;i_16 += 1)
        {
            var_35 = (var_10 & 3787901434);
            var_36 = ((!(arr_47 [i_0] [i_0] [16] [i_0] [i_0] [i_0 - 1] [i_0 + 2])));
        }
        /* vectorizable */
        for (int i_17 = 1; i_17 < 15;i_17 += 1)
        {
            var_37 += (arr_46 [0] [i_17 + 2] [i_17 + 2] [i_17] [i_17]);
            var_38 = (min(var_38, var_9));
            arr_56 [i_0] [i_0] = ((-(var_13 + var_10)));
        }
    }
    var_39 = var_2;
    var_40 = var_7;
    var_41 = (!var_14);
    #pragma endscop
}
