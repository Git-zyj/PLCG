/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212946
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212946 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212946
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 20;i_3 += 1)
                    {
                        {
                            arr_14 [i_0] [i_0] [i_2] [i_3] = ((arr_0 [i_1]) ^ ((0 ? ((((arr_9 [i_3]) & (arr_5 [i_0] [i_1] [i_2])))) : 576460752303422976)));
                            arr_15 [20] [i_1] [i_0] [i_3] = (928661054 * ((~((((-2147483647 - 1) == 0))))));

                            /* vectorizable */
                            for (int i_4 = 3; i_4 < 19;i_4 += 1)
                            {
                                arr_19 [i_0] [i_1] [15] [i_0] [i_4 - 3] = ((~(((arr_0 [i_2]) ? 0 : 11897))));
                                var_12 = arr_6 [i_4];
                                var_13 = (((((arr_2 [i_1] [i_0]) ? 14251 : 1193444648257690501)) % (arr_11 [i_0] [i_1] [i_2] [i_0] [i_0])));
                                var_14 = (arr_13 [i_0 - 1] [i_0 - 1] [i_2] [1] [i_0]);
                                arr_20 [i_0] [i_0] [i_2] [i_2] [i_2] [10] [i_2] = (arr_0 [i_2]);
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_5 = 1; i_5 < 19;i_5 += 1)
                {
                    for (int i_6 = 1; i_6 < 19;i_6 += 1)
                    {
                        {
                            arr_26 [i_0] = ((124 ? (((((arr_18 [i_0] [i_0] [i_5] [i_6 + 2]) ? 67108863 : 2097120)) * (arr_23 [i_0] [i_1] [15] [i_6] [i_6]))) : (-67108878 - -9)));
                            arr_27 [i_0] [i_1] [i_1] [i_1] [20] [i_6] = 39091093;
                            arr_28 [i_0] [i_1] [i_0] [i_6] = (~6014);
                            var_15 -= 65535;
                            arr_29 [i_0] [15] [i_1] [0] [i_0] = ((((((arr_22 [i_0 + 1]) ? ((min(22870, (-127 - 1)))) : ((48 ? 72 : -24473))))) ? (((((24461 ? (arr_9 [i_0]) : (arr_21 [i_1] [i_5] [i_0])))) ? 12 : -86)) : (((((var_0 ? (arr_10 [i_0 + 1] [i_0 + 1] [i_5] [i_0]) : var_3))) ? ((-1610324725 ? 0 : (arr_6 [i_0 - 1]))) : (arr_12 [i_0 - 1] [i_5 + 1] [i_5 + 2] [i_6 + 2])))));
                        }
                    }
                }
            }
        }
    }
    var_16 = (min((min(((3319265462 ? var_4 : var_8)), (var_4 > var_0))), ((((max(var_9, var_7)) / (((-13786 + 2147483647) << (((var_2 + 734653914698727318) - 22)))))))));
    var_17 = var_4;
    #pragma endscop
}
