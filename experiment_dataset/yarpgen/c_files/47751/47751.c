/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47751
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47751 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47751
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_4;
    var_16 |= (~var_6);

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_17 *= ((-(((arr_0 [i_0]) ? -13542 : ((161 ? var_14 : (arr_1 [i_0])))))));

        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {

            /* vectorizable */
            for (int i_2 = 3; i_2 < 24;i_2 += 1)
            {
                arr_8 [i_1] [i_2] = ((-(arr_5 [i_2 + 1])));
                var_18 -= ((~(arr_0 [i_2 - 3])));
            }
            var_19 -= ((!((min(var_14, (3325385083 + var_14))))));
            arr_9 [i_1] [i_0] &= (arr_0 [15]);
        }
        for (int i_3 = 0; i_3 < 25;i_3 += 1)
        {
            /* LoopNest 3 */
            for (int i_4 = 0; i_4 < 25;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 25;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 25;i_6 += 1)
                    {
                        {
                            var_20 = ((~(((((~(arr_3 [15] [15])))) ? (arr_13 [i_0] [i_3] [i_3] [i_5]) : (((arr_16 [i_0] [i_3] [i_0] [i_5] [i_6] [i_0]) ? (arr_10 [i_3] [i_4] [22]) : 1954698157))))));
                            var_21 = var_9;
                            var_22 = (max((((~(arr_5 [i_0])))), (max((((arr_16 [i_5] [12] [i_5] [i_4] [12] [12]) / (arr_7 [18] [18]))), ((~(arr_1 [i_4])))))));
                            arr_18 [19] [19] [19] [19] [i_6] [19] [19] = (arr_0 [i_3]);
                        }
                    }
                }
            }
            arr_19 [i_0] = (((~(arr_13 [i_0] [i_3] [i_0] [i_0]))));
        }
        arr_20 [i_0] = (((((arr_5 [i_0]) || (arr_12 [i_0]))) ? (((!((((arr_4 [21]) ? -1 : var_8)))))) : (((!(arr_1 [i_0]))))));
    }
    var_23 = var_12;
    #pragma endscop
}
