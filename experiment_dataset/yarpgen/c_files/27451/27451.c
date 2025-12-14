/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27451
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27451 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27451
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_15 = (((max(var_9, ((~(arr_2 [i_0])))))) ? var_7 : var_0);
        var_16 *= (arr_2 [i_0]);
        var_17 = (((((arr_1 [i_0] [i_0]) && 834)) ? (((arr_2 [i_0]) ? (arr_2 [i_0]) : (arr_2 [i_0]))) : ((((~1428737205) != -8936426614122104121)))));
    }
    for (int i_1 = 2; i_1 < 20;i_1 += 1)
    {
        var_18 &= (((max(6, -78)) + (((-78 ? -100 : 64709)))));
        var_19 &= (min((min((arr_4 [i_1 + 1]), (arr_4 [i_1 - 2]))), (((arr_4 [i_1 + 2]) & (arr_4 [i_1 - 1])))));
    }
    for (int i_2 = 1; i_2 < 22;i_2 += 1)
    {
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 24;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 24;i_4 += 1)
            {
                {
                    var_20 = 127;
                    var_21 = var_7;
                    var_22 = var_1;
                    var_23 = (((((854 ? (arr_4 [i_2 + 2]) : (arr_4 [i_2 + 1])))) ? (arr_4 [i_2 + 2]) : (min(64718, (arr_4 [i_2 - 1])))));
                    var_24 = ((10402656331648911620 ? ((((!(arr_4 [i_3]))) ? (var_1 && var_12) : ((1428737205 ? -75 : 1896893075)))) : (arr_9 [i_3])));
                }
            }
        }

        for (int i_5 = 1; i_5 < 22;i_5 += 1) /* same iter space */
        {
            var_25 = (min(((52439 ? (arr_9 [i_2 + 2]) : var_3)), (arr_9 [i_2 + 2])));
            var_26 = (-4981 ? (((max(53976, 3561474133)) << ((4987 ? var_13 : var_5)))) : (min((arr_11 [i_2] [i_2] [i_2]), (max((arr_8 [i_2]), 1)))));

            for (int i_6 = 0; i_6 < 24;i_6 += 1)
            {
                var_27 = min((min((min((arr_10 [i_5 + 1] [i_2]), var_3)), (arr_9 [i_2 - 1]))), (((((-(arr_4 [i_2 - 1]))) ^ (arr_4 [i_5])))));
                var_28 = (~var_7);
            }
        }
        for (int i_7 = 1; i_7 < 22;i_7 += 1) /* same iter space */
        {
            /* LoopNest 3 */
            for (int i_8 = 0; i_8 < 24;i_8 += 1)
            {
                for (int i_9 = 1; i_9 < 21;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 24;i_10 += 1)
                    {
                        {
                            var_29 *= 4964;
                            var_30 = (min(var_30, (arr_21 [i_8] [i_8] [i_8])));
                            var_31 = (((min((((arr_7 [i_2]) ? (arr_15 [i_7]) : 64689)), (3061417263105656922 != var_3))) == (arr_11 [i_2 + 2] [i_9 + 2] [i_2])));
                        }
                    }
                }
            }
            var_32 = var_14;
            /* LoopNest 2 */
            for (int i_11 = 1; i_11 < 22;i_11 += 1)
            {
                for (int i_12 = 0; i_12 < 24;i_12 += 1)
                {
                    {
                        var_33 = ((((max((arr_6 [i_2]), 1274755259))) ? (arr_32 [i_2] [i_2]) : ((max(var_1, (arr_26 [i_7 - 1] [i_7 - 1] [i_2] [i_12] [i_12]))))));
                        var_34 = ((((max(1, (arr_25 [i_2] [i_2 + 1])))) ? (((((arr_7 [i_2]) || var_10)) ? var_12 : (var_1 && var_11))) : var_0));
                    }
                }
            }
        }
        var_35 = (min(var_35, (((((min((min(1428737188, (arr_4 [i_2 - 1]))), (arr_17 [i_2 + 1] [18] [i_2 + 1] [i_2 + 1])))) - (12931374002705156956 - 65534))))));
    }
    var_36 = (min((((var_12 + var_11) * (((min(var_1, 0)))))), ((max(-12, 0)))));
    var_37 = max(((min(var_13, ((((-127 - 1) == var_4)))))), (max((!-1340803835), var_2)));
    #pragma endscop
}
