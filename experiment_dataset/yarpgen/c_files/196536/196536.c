/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196536
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196536 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196536
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_13;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 15;i_1 += 1)
        {
            {
                arr_6 [15] [i_0] = (((arr_5 [i_0] [i_1 + 2] [i_1]) + (max(var_5, (((arr_1 [i_0] [6]) ? (arr_2 [i_0]) : (arr_0 [i_0] [i_1])))))));
                var_15 = var_11;
                var_16 = ((((min(((var_3 ? (arr_1 [i_0] [0]) : 14687516033736392227)), ((min(var_13, var_13)))))) ? (max((arr_1 [i_1] [i_1 + 3]), var_4)) : (var_13 && var_2)));
                var_17 = (max(((((max(var_7, 1281))) ? ((((-651087996 + 2147483647) << var_1))) : var_13)), (min((min(var_4, var_5)), (var_5 | var_8)))));
            }
        }
    }
    var_18 = (!var_13);
    var_19 = var_3;
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 24;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 24;i_3 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 24;i_4 += 1)
                {
                    for (int i_5 = 2; i_5 < 23;i_5 += 1)
                    {
                        {
                            arr_17 [20] [10] [16] [i_3] [i_3] [i_3] = (~174);
                            arr_18 [i_4] &= (max((arr_9 [i_2] [11]), (~250)));
                            arr_19 [19] = ((((((min(var_12, var_7))) ? (min(var_8, var_5)) : (~var_10)))) ? (((!(arr_8 [i_5 - 2])))) : (!var_5));
                            var_20 = (max(var_20, (((-(min((arr_15 [i_5 - 1] [i_5 + 1] [i_5 + 1] [i_5 + 1]), var_12)))))));
                        }
                    }
                }
                arr_20 [i_2] [i_2] [i_2] = max(26321, (-2147483647 - 1));
                var_21 = (min(((((min(var_5, (arr_8 [i_2])))) % (arr_13 [i_2] [i_3] [i_2] [i_2] [i_3] [i_2]))), (~var_6)));
                var_22 = (arr_14 [5] [i_3] [i_2] [i_2]);
                arr_21 [i_3] [i_2] [i_2] = -var_3;
            }
        }
    }
    #pragma endscop
}
