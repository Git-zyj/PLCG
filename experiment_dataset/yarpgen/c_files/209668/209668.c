/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209668
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209668 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209668
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 -= max(var_10, -0);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    var_21 = var_9;
                    var_22 = ((var_4 & ((max((arr_3 [i_0] [i_1] [i_0]), ((((arr_0 [i_0] [i_1]) * (arr_6 [i_1] [i_1])))))))));
                }
            }
        }
    }

    for (int i_3 = 0; i_3 < 21;i_3 += 1)
    {
        var_23 &= (arr_1 [12]);
        var_24 = -7193;
        var_25 = 0;
        var_26 -= (((((var_8 ? var_12 : 4202735950188092918))) ? (arr_6 [i_3] [i_3]) : (arr_6 [i_3] [i_3])));
        var_27 = 2605723096;
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 25;i_4 += 1)
    {
        var_28 -= 4294967295;

        for (int i_5 = 0; i_5 < 25;i_5 += 1) /* same iter space */
        {
            var_29 = (min(var_29, (arr_10 [i_5])));
            var_30 = (max(var_30, 6334783221334180370));
        }
        for (int i_6 = 0; i_6 < 25;i_6 += 1) /* same iter space */
        {
            arr_16 [10] &= ((arr_10 [13]) % 6917);
            var_31 = (arr_12 [i_6]);
        }
        for (int i_7 = 0; i_7 < 25;i_7 += 1) /* same iter space */
        {
            var_32 -= ((~(arr_15 [i_4] [i_4] [i_4])));
            var_33 &= -0;
            arr_20 [i_4] [i_4] = ((~0) ? ((3874159311 ? var_18 : var_11)) : (arr_10 [i_4]));
            var_34 = ((!(arr_10 [i_7])));
            var_35 -= (arr_17 [i_4]);
        }
        var_36 &= (((arr_19 [i_4] [i_4] [i_4]) ? 334549433535688392 : 1158944365));
    }
    #pragma endscop
}
