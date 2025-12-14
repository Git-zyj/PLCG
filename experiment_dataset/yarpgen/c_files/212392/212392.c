/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212392
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212392 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212392
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((var_14 - (!var_2)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        {
                            var_17 -= (((((((!(arr_7 [i_0] [i_1 - 1] [i_0] [i_1 - 1] [i_3] [7]))))) == ((1 ? (arr_3 [i_3]) : (arr_7 [i_3] [i_3] [i_3] [i_3] [6] [11]))))));

                            for (int i_4 = 0; i_4 < 23;i_4 += 1)
                            {
                                var_18 -= var_10;
                                arr_12 [i_0] [i_1] [i_2] [i_3] [i_4] [i_4] = (min((((~(arr_11 [i_0] [i_2] [i_3] [i_4])))), (max((arr_11 [i_0] [i_1 - 1] [i_2] [i_3]), 4294967295))));
                                var_19 = ((+(max((arr_7 [i_0] [i_0] [i_0] [i_1 - 1] [i_4] [i_3]), (arr_7 [i_0] [i_1 - 1] [i_0] [i_1 - 1] [i_4] [i_1])))));
                            }
                            for (int i_5 = 4; i_5 < 22;i_5 += 1)
                            {
                                var_20 = (max(var_20, (((((-(arr_3 [i_1 - 1]))) * (arr_6 [i_1 + 1] [i_5 - 1] [i_5 - 2]))))));
                                var_21 = (max(var_21, var_7));
                            }
                            for (int i_6 = 0; i_6 < 1;i_6 += 1)
                            {
                                var_22 = (min(var_22, (((23197 ? (((min(-5423884179289512698, 36)) & (arr_15 [1] [i_1] [i_2] [i_3] [i_6]))) : ((~(max(8889336792943183437, var_3)))))))));
                                var_23 -= max((max((arr_5 [6] [i_1] [i_1 + 1] [i_1]), 17572)), (min(var_0, (arr_5 [i_0] [i_1] [i_1 - 1] [i_1]))));
                                var_24 = var_15;
                                arr_18 [i_0] [i_1] [4] [i_1] [i_0] [i_3] [i_1] |= (max(1, 47963));
                                var_25 -= (arr_9 [1] [i_1 - 1] [i_2] [i_3]);
                            }
                            var_26 -= (arr_5 [i_0] [i_2] [i_0] [20]);
                            var_27 = (~var_15);
                        }
                    }
                }
                var_28 = (max((arr_9 [1] [i_1] [i_1 + 1] [i_1]), ((((arr_9 [i_1 + 1] [15] [i_1 + 1] [i_0]) != (arr_9 [6] [13] [i_1 - 1] [i_0]))))));
                var_29 -= max(((max((((!(arr_9 [i_0] [4] [4] [i_0])))), (arr_13 [i_1 - 1] [i_1 - 1] [i_1 - 1])))), (max((arr_11 [i_1 - 1] [i_0] [i_0] [i_0]), 4294967295)));
                arr_19 [22] [i_0] = min((((!(arr_1 [i_1 + 1])))), (-2147483647 - 1));
                var_30 = -10;
            }
        }
    }
    /* LoopNest 2 */
    for (int i_7 = 0; i_7 < 23;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 23;i_8 += 1)
        {
            {
                var_31 *= (1 && 2147483647);
                var_32 = min((min(((max(56579, var_14))), 0)), (((((min(1, -1371551012))) < (min(3059943299258039123, -7652444548317423768))))));
                var_33 = ((((~(arr_10 [i_7] [i_7] [i_7] [i_7] [1]))) * 255));
            }
        }
    }
    var_34 = ((max(((2147483647 << (5 - 5))), 32742)));
    #pragma endscop
}
