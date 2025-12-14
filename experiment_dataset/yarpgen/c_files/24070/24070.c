/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24070
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24070 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24070
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 21;i_3 += 1)
                    {
                        {
                            var_18 -= (!var_5);
                            var_19 = min(((((max(1897787368, 1897787377))) ? 0 : (min(var_0, var_7)))), ((-(arr_9 [i_1] [i_3]))));
                            var_20 ^= (3758096384 ? (arr_3 [i_3 + 2]) : (arr_9 [i_2] [i_2]));
                            var_21 += min(3581786514, (min((arr_10 [i_3] [i_3 + 3] [i_3 - 1] [i_3] [i_3 + 3]), (arr_11 [i_1] [i_1] [i_2] [i_1] [i_3 + 1] [i_1]))));
                            var_22 = (((((2397179927 != var_8) * (min(var_5, 3758096384))))) ? 2219148397 : 1897787352);
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 24;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 24;i_5 += 1)
                    {
                        {
                            var_23 += (-(arr_2 [i_0]));
                            arr_18 [i_0] [0] [i_1] [i_5] = (arr_1 [i_0]);
                            var_24 = (max(var_24, (((arr_16 [i_5] [i_5]) + (((arr_12 [i_0] [i_1] [i_5]) | (!2397179918)))))));
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_6 = 0; i_6 < 19;i_6 += 1)
    {
        for (int i_7 = 0; i_7 < 19;i_7 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_8 = 1; i_8 < 15;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 19;i_9 += 1)
                    {
                        for (int i_10 = 4; i_10 < 18;i_10 += 1)
                        {
                            {
                                var_25 = 17;
                                var_26 = var_12;
                                var_27 = (max(var_27, (min(((((((arr_12 [i_8] [i_9] [i_10]) - (arr_5 [i_6])))) ? var_17 : var_10)), var_2))));
                                arr_34 [i_6] [i_6] [i_8 - 1] [i_8] [i_10] = (0 | ((min(2219148390, 1897787360))));
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_11 = 3; i_11 < 17;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 19;i_12 += 1)
                    {
                        {
                            var_28 = arr_6 [i_6] [i_7] [i_6] [i_11];
                            arr_42 [i_7] [i_11] [2] [i_12] = (((min((arr_30 [i_6] [i_7] [i_11] [i_11] [i_12]), var_16)) >= (arr_9 [i_6] [i_6])));
                            var_29 = ((+((((arr_0 [i_6]) || (((4294967282 | (arr_24 [i_6] [i_7] [i_7])))))))));
                            var_30 = (max(var_30, var_13));
                            arr_43 [i_6] [i_6] [i_6] [1] [i_6] [i_11] = arr_32 [i_6] [i_6];
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
