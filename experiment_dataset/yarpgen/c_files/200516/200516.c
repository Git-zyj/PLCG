/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200516
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200516 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200516
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_15 *= -5083;
        var_16 -= (min((((!1) ? (((arr_0 [i_0]) ? (arr_3 [i_0]) : var_4)) : (arr_1 [1]))), 5079));
        var_17 = (max(5079, (max((arr_2 [i_0]), -5082))));

        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 15;i_3 += 1)
                {
                    {
                        var_18 = var_13;
                        var_19 *= 17937861434385451058;
                    }
                }
            }
            var_20 = min(var_9, (((!((min(5082, (arr_8 [i_0] [i_1] [i_1] [i_1]))))))));
            var_21 = (min(((((arr_4 [i_0] [i_1]) ? 8191 : (arr_11 [i_0])))), var_4));
            /* LoopNest 2 */
            for (int i_4 = 0; i_4 < 15;i_4 += 1)
            {
                for (int i_5 = 2; i_5 < 13;i_5 += 1)
                {
                    {
                        var_22 = (!((max(5082, 5082))));
                        var_23 = ((!(arr_1 [i_5 + 2])));
                    }
                }
            }
        }
    }
    for (int i_6 = 0; i_6 < 1;i_6 += 1)
    {
        var_24 *= (((((((var_11 ? var_5 : (arr_18 [i_6] [i_6])))) || var_6)) && ((5082 || (arr_16 [i_6] [i_6] [4] [i_6] [i_6])))));
        var_25 = ((((((arr_11 [i_6]) * (((!(arr_9 [i_6] [i_6]))))))) ? (min((var_6 * 5080), (!var_0))) : ((5081 ? (arr_15 [i_6] [i_6] [i_6] [i_6]) : (arr_1 [i_6])))));
    }
    var_26 = ((-4267342359268132718 & (~5073)));
    #pragma endscop
}
