/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18971
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18971 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18971
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_1;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 1; i_2 < 15;i_2 += 1)
                {
                    arr_7 [i_0] [i_1] [i_1] [i_2 + 1] &= (14274348784014308486 ^ 1643773047012361331);
                    arr_8 [i_0] = (arr_0 [0] [i_1]);
                    var_19 -= ((var_10 ? var_2 : ((24065 ^ (arr_0 [i_2 - 1] [13])))));
                }
                /* LoopNest 2 */
                for (int i_3 = 0; i_3 < 16;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 16;i_4 += 1)
                    {
                        {
                            var_20 = ((!(((var_6 | (min(var_4, var_1)))))));
                            var_21 = (max(var_21, (arr_1 [i_3] [1])));
                            var_22 = (max((arr_11 [i_1] [i_3] [i_4]), ((((arr_6 [i_0]) ? (arr_6 [i_0]) : var_17)))));

                            for (int i_5 = 2; i_5 < 13;i_5 += 1)
                            {
                                arr_18 [i_0] [i_0] [i_0] [i_4] [i_0] = ((((((arr_17 [1] [i_1] [i_1] [i_4] [i_5] [i_5 - 2]) ? (arr_17 [i_4] [i_1] [i_3] [i_4] [i_5] [i_5 + 2]) : var_13)) + 2147483647)) << (48501 - 48501));
                                var_23 = (min(((~(((((arr_13 [i_1] [i_1] [i_3] [4] [i_5 + 2] [i_5 - 1]) + 2147483647)) >> (var_6 + 26915))))), (max((((arr_14 [i_0] [i_0] [i_5 - 2]) & (arr_0 [i_4] [4]))), var_14))));
                            }
                            /* vectorizable */
                            for (int i_6 = 0; i_6 < 16;i_6 += 1)
                            {
                                var_24 ^= arr_17 [i_0] [i_1] [i_3] [i_3] [i_4] [i_6];
                                arr_21 [i_0] = ((var_17 ? 17041 : (arr_14 [i_0] [i_0] [i_0])));
                                var_25 = (max(var_25, (((48494 > (((arr_9 [i_0] [i_3] [i_1] [i_6]) ? (arr_20 [i_0] [i_1] [i_0] [i_4] [i_1] [i_1] [i_0]) : (arr_19 [i_1] [i_0]))))))));
                            }
                        }
                    }
                }

                /* vectorizable */
                for (int i_7 = 0; i_7 < 16;i_7 += 1)
                {
                    arr_24 [i_0] [i_1] [i_1] [i_1] &= var_5;
                    var_26 = (max(var_26, -84));

                    for (int i_8 = 0; i_8 < 16;i_8 += 1)
                    {
                        var_27 = (((arr_14 [i_0] [i_0] [i_7]) && (arr_14 [i_0] [i_1] [i_7])));
                        var_28 = (arr_2 [i_0]);
                    }
                }
                for (int i_9 = 3; i_9 < 15;i_9 += 1)
                {
                    var_29 -= ((arr_16 [i_9] [i_1] [i_1] [i_0] [i_1] [i_0]) ? ((((!(var_4 / var_12))))) : (min(((3379502325614966847 ^ (arr_19 [3] [i_1]))), var_2)));
                    var_30 = ((-((~(max(var_1, var_10))))));
                    var_31 = (arr_26 [i_9] [i_0] [i_0] [i_9 - 3]);
                    var_32 = ((!(65535 | 1643773047012361306)));
                    var_33 = (((((-((((arr_11 [i_9 - 1] [i_0] [i_0]) || var_0)))))) ? ((max(((max(24, (arr_20 [i_0] [i_0] [i_9 + 1] [i_1] [i_0] [i_9] [i_9 - 1])))), ((16802971026697190264 ? -1502928854 : 17040))))) : (arr_22 [i_1])));
                }
                arr_31 [i_0] [i_0] = (-((-var_1 ? var_2 : (var_10 * var_1))));
                arr_32 [i_1] [i_0] = (((max(var_16, var_8)) & -var_7));
            }
        }
    }
    var_34 *= (((min(var_2, (max(4172395289695243143, 5257553823266929895)))) <= var_2));
    var_35 -= ((~((min(var_15, var_10)))));
    #pragma endscop
}
