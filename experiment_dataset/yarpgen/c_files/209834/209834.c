/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209834
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209834 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209834
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_10;
    var_16 = (((1 ? (~1) : (66 << var_11))));

    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        var_17 = var_5;
        var_18 = ((arr_1 [i_0]) & (min(((max(242, var_0))), 4913687315637041994)));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    arr_9 [i_1] |= ((-(arr_8 [i_0] [i_1] [i_2])));

                    for (int i_3 = 3; i_3 < 11;i_3 += 1)
                    {
                        var_19 = (min(var_19, (arr_5 [i_0 + 1])));
                        var_20 = (arr_11 [i_2] [i_2] [i_2] [i_2]);
                    }
                    arr_13 [i_2] = ((((((((arr_3 [i_0] [i_1] [i_0]) ? -583623352 : 103))) ? (!33554431) : 38021)) - var_8));
                    var_21 = (arr_12 [i_0 + 1] [i_2] [i_0 - 1]);
                }
            }
        }
    }
    for (int i_4 = 0; i_4 < 23;i_4 += 1)
    {
        arr_16 [i_4] [i_4] &= ((~(((!(arr_14 [i_4]))))));
        var_22 = var_7;
        var_23 = (((arr_15 [i_4]) * ((((max((arr_14 [i_4]), 1))) ? (17477388438126487298 <= 1) : 239))));
    }
    var_24 = var_14;
    #pragma endscop
}
