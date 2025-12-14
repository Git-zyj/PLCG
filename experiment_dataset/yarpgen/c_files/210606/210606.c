/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210606
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210606 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210606
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 |= (!var_5);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    var_16 = (((((arr_1 [i_1] [i_2]) ? 2242322844 : var_9)) == ((min(2242322854, -59)))));
                    var_17 = (((((min((arr_3 [i_0] [i_0]), (arr_5 [3] [3])))) > (((-29724 + 2147483647) >> (var_8 - 2339733830337419558))))));
                    var_18 = (min(var_18, var_3));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 24;i_4 += 1)
                        {
                            {
                                arr_12 [i_0] [0] [4] [i_0] [i_0] |= ((((((((var_5 ? var_13 : var_12)) | (~29724))) + 2147483647)) >> (((((((min(var_7, -29724)))) * (max(var_6, 9621046583886058152)))) - 1783433))));
                                arr_13 [i_0] [i_1] = (min(((((arr_8 [i_0] [i_1] [i_2] [i_1] [i_4] [i_4]) != 4294967294))), 2052644441));
                                var_19 = 1492022321;
                                var_20 = (min(var_20, 13190));
                            }
                        }
                    }
                    arr_14 [i_0] [9] [1] [i_2] = ((2141 ? 1 : var_6));
                }
                var_21 = (max(var_21, (29723 || 1)));
            }
        }
    }
    var_22 = var_12;
    var_23 = var_0;
    #pragma endscop
}
