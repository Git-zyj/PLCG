/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197308
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197308 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197308
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (max((min((max(var_5, 55310)), var_8)), ((-var_13 | (2147483629 | 231)))));
    var_21 ^= var_12;
    var_22 = (max(var_22, var_18));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 13;i_1 += 1)
        {
            {
                arr_6 [i_1] = (min(((-1792011814 / (arr_2 [i_0] [i_0]))), var_3));
                var_23 = (-1792011815 == 2817912945);
            }
        }
    }

    for (int i_2 = 0; i_2 < 15;i_2 += 1)
    {
        arr_10 [i_2] = max(((~(max(var_12, 1792011825)))), (~var_15));
        arr_11 [i_2] [i_2] = (arr_9 [i_2] [i_2]);

        /* vectorizable */
        for (int i_3 = 0; i_3 < 15;i_3 += 1)
        {
            arr_16 [i_2] [i_3] = (arr_4 [i_3] [i_3] [i_3]);
            var_24 ^= (!1792011816);

            for (int i_4 = 0; i_4 < 15;i_4 += 1) /* same iter space */
            {
                arr_19 [i_2] [i_3] [i_2] = (arr_12 [i_2]);
                var_25 = (-1792011814 ? -1792011805 : 2734526147);
                var_26 -= 14;
            }
            for (int i_5 = 0; i_5 < 15;i_5 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (int i_6 = 1; i_6 < 13;i_6 += 1)
                {
                    for (int i_7 = 1; i_7 < 14;i_7 += 1)
                    {
                        {
                            arr_28 [i_5] [i_5] [i_3] [i_2] [5] [i_2] = (arr_21 [i_7 - 1] [i_7] [i_2]);
                            var_27 ^= (((arr_7 [i_3] [i_3]) & (arr_7 [i_5] [i_5])));
                            arr_29 [i_2] [i_3] [i_3] [i_3] [i_2] = var_2;
                        }
                    }
                }
                arr_30 [i_2] [i_2] [i_5] = (!1783224136);
            }
            for (int i_8 = 0; i_8 < 15;i_8 += 1) /* same iter space */
            {
                var_28 = ((!(arr_18 [i_2] [i_3] [2] [i_8])));
                /* LoopNest 2 */
                for (int i_9 = 0; i_9 < 15;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 15;i_10 += 1)
                    {
                        {
                            arr_40 [14] [i_2] [i_3] [i_8] [i_9] [i_9] [i_2] = var_17;
                            var_29 = ((arr_33 [i_2]) / (arr_7 [i_2] [i_2]));
                            var_30 = var_9;
                            var_31 ^= (((arr_12 [i_9]) ? ((var_5 ? (arr_27 [12] [i_9] [12]) : 18856222)) : ((~(arr_17 [i_2] [i_2] [i_10])))));
                            arr_41 [i_10] [i_2] [i_8] [i_2] [i_2] = (((arr_9 [i_2] [i_9]) / (arr_9 [i_2] [i_8])));
                        }
                    }
                }
                arr_42 [i_2] = (171 ^ 4034009637);
            }
            for (int i_11 = 0; i_11 < 15;i_11 += 1) /* same iter space */
            {
                arr_47 [i_2] [i_2] [i_2] [i_2] = -1792011805;
                var_32 = (min(var_32, (36 ^ 789182357)));
                var_33 = ((216 ? var_12 : 181));
            }
        }
        for (int i_12 = 2; i_12 < 12;i_12 += 1)
        {
            var_34 = 3275629780;
            arr_51 [i_2] = ((((min(((min(44437, var_2))), (max((arr_32 [i_2] [i_2] [i_2] [i_12 - 2]), (arr_38 [i_2] [i_2] [i_2] [i_2])))))) ? ((216 ? 1378612774 : 4034009636)) : (min(((~(arr_8 [i_2]))), ((max(var_8, (arr_0 [i_2] [i_2]))))))));
        }
    }
    /* vectorizable */
    for (int i_13 = 0; i_13 < 12;i_13 += 1)
    {
        var_35 -= ((-(12 - 1792011794)));
        arr_54 [i_13] [i_13] = -3175906930;
    }
    #pragma endscop
}
