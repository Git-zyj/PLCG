/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205753
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205753 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205753
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] [i_0] = ((((((!var_13) > var_11))) - (((!((((-127 - 1) ? 1 : (arr_0 [i_1])))))))));
                var_16 *= (((((var_8 ? (arr_2 [i_0 + 1]) : (arr_2 [i_0 - 1])))) || ((((arr_3 [i_0 - 1] [i_0 - 1]) << 1)))));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 10;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 10;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 10;i_4 += 1)
            {
                {
                    var_17 = (max(var_17, var_6));
                    arr_14 [i_2] [i_3] [i_4] = (arr_4 [1] [i_2] [i_2]);
                    var_18 = (((-127 - 1) ? (-127 - 1) : 109));
                    var_19 = (min(var_19, ((max(1, 1)))));
                    arr_15 [i_4] = -1446631954200938115;
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 1; i_5 < 19;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 20;i_6 += 1)
        {
            {
                var_20 = (max(var_20, -var_6));
                arr_23 [i_5] [i_5] [1] = (((-(arr_20 [i_5 - 1] [i_6]))));
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 20;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 20;i_8 += 1)
                    {
                        {
                            var_21 = (-(((arr_16 [i_5 - 1]) - var_4)));
                            arr_30 [i_5] [i_6] [i_7] [i_8] [i_7] = (((arr_18 [i_5 - 1]) ? (((!(((0 ? (-127 - 1) : (-127 - 1))))))) : ((1805163967221934676 ? (~1) : var_6))));
                            var_22 += (((((-1146690331379139347 ? 70 : 46)))));
                            arr_31 [i_5] [i_5] [i_7] [i_8] [i_7] = (arr_26 [i_5] [1]);
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
