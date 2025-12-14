/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218235
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218235 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218235
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                arr_7 [i_1] [7] = ((+(min((((25 ? (arr_1 [9]) : 65535))), 9135113863508618241))));
                var_18 = (((min((arr_3 [i_0] [i_0]), var_7)) << ((3009423591879989142 * (2449760102 > var_8)))));

                for (int i_2 = 0; i_2 < 14;i_2 += 1)
                {
                    var_19 = (max(var_19, (arr_8 [i_0] [1] [i_2])));
                    var_20 = (max(((2449760109 ? -1845207180 : (1197036243937035858 || var_10))), var_1));
                    var_21 = ((!(((((max((arr_2 [11]), var_8))) ? (max((arr_8 [i_0] [i_0] [i_0]), 4319147174290053555)) : 1845207193)))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 20;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {
            {
                var_22 = (max(var_22, (arr_12 [i_4])));
                arr_15 [i_3] &= ((~((~((-(arr_11 [13])))))));
                arr_16 [i_3] [i_4] = (!(((14127596899419498075 + (arr_11 [i_3])))));
            }
        }
    }
    var_23 = ((4319147174290053562 && (0 > -12781)));
    var_24 = var_6;
    #pragma endscop
}
