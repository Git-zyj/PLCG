/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48755
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48755 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48755
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = max(-var_0, (!var_9));
    var_14 &= var_6;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    arr_8 [i_2] [i_1] = (min((!var_7), var_2));
                    var_15 = 15;
                    var_16 = var_12;
                    arr_9 [i_0] [i_0] [i_0] [i_2] = ((-(max((((arr_2 [i_0]) ? var_1 : var_0)), 63554))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 12;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 12;i_4 += 1)
        {
            {
                arr_15 [10] = ((-(arr_14 [i_3])));

                for (int i_5 = 1; i_5 < 10;i_5 += 1)
                {
                    arr_18 [i_3] [i_3] = (1967 ? 1797396177 : 1979);
                    arr_19 [i_3] [i_3] [i_3] = (((((-var_9 + (((arr_10 [i_3] [i_3]) ? var_5 : (arr_16 [i_3] [1] [i_3])))))) ? ((((!var_9) >> (66 - 59)))) : (((!(arr_17 [i_3] [i_4] [i_3]))))));
                }
                for (int i_6 = 0; i_6 < 12;i_6 += 1)
                {
                    var_17 &= ((((min((min(var_11, (arr_12 [i_6] [i_6]))), ((min(var_12, var_1)))))) ? (var_2 == var_12) : ((1982 ? ((56907 ? 417629855681266879 : -66)) : 12999))));
                    var_18 = (min(var_18, var_5));

                    for (int i_7 = 0; i_7 < 12;i_7 += 1)
                    {
                        var_19 = (arr_23 [i_3] [i_4] [i_6]);
                        var_20 = (!var_1);
                        arr_25 [i_3] = (arr_13 [i_3] [i_3] [i_3]);
                    }
                }
            }
        }
    }
    #pragma endscop
}
