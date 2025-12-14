/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197683
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197683 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197683
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        arr_4 [i_0] [i_0] = ((min(((max((arr_2 [i_0] [i_0]), var_4))), (arr_1 [i_0]))) < (((((max(4855291166802436077, var_9)) <= (!var_10))))));
        arr_5 [i_0] = 1;
        arr_6 [i_0] &= ((-(arr_2 [i_0] [i_0])));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 20;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 22;i_3 += 1)
                {
                    {

                        for (int i_4 = 1; i_4 < 22;i_4 += 1)
                        {
                            var_14 = 426663170;
                            arr_17 [i_0] [i_0] [i_0] [i_0] [i_0] = ((4287518806 * (((min(1, (((-2147483647 - 1) != var_9))))))));
                            arr_18 [i_2] [i_2 - 2] [i_2] [i_2] [i_2] = ((-(((20019 ? 7448490 : var_2)))));
                            arr_19 [i_2 + 1] [i_1] [i_2] [i_3] [4] [i_0] = (max((arr_15 [i_3] [1] [i_3] [i_4 + 1] [14] [i_4 + 1]), (arr_16 [i_2] [i_2] [i_2] [i_2 + 3])));
                        }
                        var_15 = 27334;
                        var_16 -= var_4;
                    }
                }
            }
        }
        arr_20 [i_0] = ((((!((max((arr_1 [i_0]), 1840917256))))) ? ((max(4287518805, (arr_10 [14] [i_0] [17] [i_0])))) : (arr_7 [1] [i_0])));
    }
    var_17 = (((var_7 < 5449199225197725658) <= (((((1 ? var_8 : -66))) ? 562949953421311 : (!var_10)))));
    #pragma endscop
}
