/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28984
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28984 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28984
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_9;

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = (max((arr_1 [i_0]), (arr_1 [i_0])));

        for (int i_1 = 3; i_1 < 10;i_1 += 1)
        {
            var_20 -= (((arr_1 [10]) ? var_1 : (((arr_1 [6]) ? var_7 : (arr_1 [2])))));
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 13;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 1;i_4 += 1)
                    {
                        {
                            var_21 |= var_4;
                            var_22 = (((max((((!(arr_11 [i_3] [i_3] [i_0] [i_3] [i_3])))), (arr_2 [i_1 + 3] [i_0]))) << (var_5 - 50726)));
                            var_23 = (arr_6 [i_0] [i_0] [i_0]);
                        }
                    }
                }
            }
            var_24 *= var_13;
            var_25 = (min(var_25, (((((min(((-(arr_0 [i_0]))), (((!(arr_13 [i_1 + 2] [i_1] [i_1 - 1] [i_1 - 3] [i_1] [i_1]))))))) ? -var_15 : (~8242092898513670254))))));
        }
        /* vectorizable */
        for (int i_5 = 2; i_5 < 11;i_5 += 1)
        {
            /* LoopNest 2 */
            for (int i_6 = 0; i_6 < 13;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 13;i_7 += 1)
                {
                    {
                        arr_25 [i_0] [i_5 + 2] [i_5 + 2] [i_6] [i_6] |= ((var_2 ? (arr_5 [i_5 + 1] [i_5] [i_5 + 1]) : (arr_15 [i_5 + 1] [i_5 + 2] [i_5 + 2] [i_5 + 2] [i_5 - 2])));
                        var_26 = (min(var_26, -var_17));
                    }
                }
            }
            var_27 |= (arr_14 [i_0] [i_5] [i_0] [i_0] [i_0]);
        }
    }
    for (int i_8 = 0; i_8 < 14;i_8 += 1)
    {
        var_28 = (((-32756 ? 126 : 16851131029111376613)) & -1942423421);
        var_29 *= (((arr_28 [i_8]) ? (((!((min(16851131029111376613, var_7)))))) : (((!(arr_26 [i_8]))))));
    }
    for (int i_9 = 2; i_9 < 10;i_9 += 1) /* same iter space */
    {
        var_30 &= (((arr_29 [i_9 + 1] [i_9 - 1]) >= (((((!(arr_10 [i_9] [i_9 - 2] [i_9]))))))));
        arr_34 [i_9] = var_5;
    }
    for (int i_10 = 2; i_10 < 10;i_10 += 1) /* same iter space */
    {
        var_31 = (max(var_31, ((min((max(((var_4 ? var_13 : (arr_7 [i_10 - 2] [i_10] [i_10]))), (arr_14 [i_10] [i_10] [i_10] [i_10 + 1] [i_10]))), (min(((var_9 & (arr_5 [i_10] [i_10] [i_10]))), (((arr_14 [i_10 - 2] [i_10 - 2] [i_10] [i_10 - 2] [i_10 + 1]) ? (arr_24 [i_10] [i_10 + 1] [i_10 + 1] [i_10 - 1]) : var_15)))))))));
        arr_37 [i_10] = var_4;
    }
    var_32 = var_11;
    var_33 = (min(((min(-1, (!var_13)))), (max(var_17, var_18))));
    var_34 *= 53;
    #pragma endscop
}
