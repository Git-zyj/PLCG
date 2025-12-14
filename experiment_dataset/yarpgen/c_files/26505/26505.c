/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26505
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26505 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26505
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 4; i_0 < 15;i_0 += 1)
    {
        var_11 = (arr_1 [i_0] [i_0]);
        var_12 = (arr_0 [i_0]);
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 19;i_1 += 1)
    {
        arr_4 [i_1] [i_1] = (((arr_3 [i_1]) ? var_1 : var_7));
        arr_5 [17] = (((arr_2 [i_1]) | (~var_4)));
    }
    for (int i_2 = 2; i_2 < 21;i_2 += 1)
    {

        for (int i_3 = 0; i_3 < 22;i_3 += 1)
        {
            /* LoopNest 3 */
            for (int i_4 = 0; i_4 < 22;i_4 += 1)
            {
                for (int i_5 = 3; i_5 < 21;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 22;i_6 += 1)
                    {
                        {
                            var_13 -= ((((((arr_18 [i_3]) + (arr_18 [i_3])))) ? (arr_17 [i_4] [i_3] [i_4] [i_5 - 1]) : (((arr_13 [i_2] [i_2 - 1] [i_5 - 1]) ? (arr_13 [i_2 - 2] [i_2 - 2] [i_5 - 2]) : (arr_13 [i_2] [i_2 - 1] [i_5 + 1])))));
                            var_14 = var_7;
                            var_15 += var_2;
                            var_16 = min(((+((min((arr_6 [i_3]), (arr_6 [1])))))), (((arr_10 [i_2 + 1]) ? (arr_10 [i_2 - 2]) : (arr_10 [i_2 - 2]))));
                            var_17 += (arr_17 [i_3] [8] [i_2] [i_2 + 1]);
                        }
                    }
                }
            }
            arr_20 [i_2] = (min((arr_17 [i_2] [1] [21] [1]), (arr_8 [i_2])));
            var_18 = 1;
            /* LoopNest 2 */
            for (int i_7 = 0; i_7 < 22;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 22;i_8 += 1)
                {
                    {
                        var_19 = (min((((arr_8 [i_2]) ? var_6 : (arr_8 [i_2]))), 4));
                        var_20 = (((var_0 - (arr_12 [i_8] [i_7] [i_3] [4]))) * 1148417904979476480);
                        var_21 = (((9223372036854775806 ^ 0) / (((var_10 * (arr_12 [i_2 - 2] [i_2] [i_2 - 1] [i_2]))))));
                    }
                }
            }
        }
        var_22 -= (arr_16 [16] [2] [i_2 - 1]);
        var_23 *= var_2;
        var_24 = (!1009833352);
    }
    var_25 = var_1;
    var_26 = (min(-var_6, var_4));
    var_27 = var_7;
    #pragma endscop
}
