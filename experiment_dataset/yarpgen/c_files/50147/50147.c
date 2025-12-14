/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50147
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50147 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50147
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 11;i_2 += 1)
            {
                for (int i_3 = 3; i_3 < 12;i_3 += 1)
                {
                    {
                        var_11 &= (((-2147483647 - 1) != 0));

                        for (int i_4 = 0; i_4 < 13;i_4 += 1)
                        {
                            var_12 = (arr_14 [i_0] [i_0] [9] [i_0] [i_3]);
                            var_13 = ((((((arr_3 [i_1] [i_1 + 1]) == (arr_3 [i_1] [i_1 + 1])))) < ((((((arr_3 [i_0] [i_4]) ^ (arr_0 [i_0] [i_1]))) < (arr_3 [i_1 + 1] [i_2 - 1]))))));
                        }
                    }
                }
            }
        }
        var_14 -= (arr_13 [i_0] [i_0] [i_0] [i_0] [i_0]);
        /* LoopNest 2 */
        for (int i_5 = 2; i_5 < 12;i_5 += 1)
        {
            for (int i_6 = 1; i_6 < 12;i_6 += 1)
            {
                {
                    arr_19 [i_6] [4] = ((((((arr_1 [i_5 - 2] [i_5 - 2]) + (arr_1 [i_5 - 1] [i_5 + 1])))) == (min((4120064262 != 1), (arr_16 [i_6] [8] [i_6 + 1])))));
                    arr_20 [i_0] [i_5] [i_5] [i_6] = (1 + 511);
                }
            }
        }
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 13;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 13;i_8 += 1)
            {
                {
                    var_15 = (((((arr_21 [i_0] [i_0]) - (arr_1 [i_0] [i_7]))) != (arr_9 [i_0])));
                    var_16 = ((((((arr_1 [i_8] [9]) ? (arr_1 [i_7] [i_7]) : (arr_1 [i_0] [10])))) ? (4179860831 > 1) : (arr_23 [12] [12] [i_8])));
                    arr_27 [i_0] [i_0] [i_0] = arr_4 [i_0];
                }
            }
        }
        var_17 = (arr_4 [i_0]);
    }
    var_18 = var_7;
    var_19 = var_4;
    var_20 = ((((((min(var_7, var_9)) + var_3))) ? var_4 : ((var_6 ? var_7 : var_0))));
    #pragma endscop
}
