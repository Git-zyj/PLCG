/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241033
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241033 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241033
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_17 = (!-var_11);
        arr_3 [i_0] = (max((5653859408664828578 < 4096), (((arr_1 [i_0]) ? (arr_1 [i_0]) : (arr_1 [i_0])))));
        var_18 = ((!(((61431 ? 6 : 4088)))));
        var_19 = (max((max((((15579127183747217530 ? 4088 : (arr_0 [i_0])))), ((-343744947 ? var_9 : (arr_1 [i_0]))))), ((min(var_11, (arr_2 [i_0]))))));
        var_20 ^= var_15;
    }
    for (int i_1 = 1; i_1 < 23;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 1; i_2 < 24;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 25;i_3 += 1)
            {
                {
                    var_21 |= var_10;
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 25;i_4 += 1)
                    {
                        for (int i_5 = 1; i_5 < 24;i_5 += 1)
                        {
                            {
                                arr_18 [i_2] [i_2] [14] = (~var_13);
                                var_22 |= var_11;
                            }
                        }
                    }
                }
            }
        }
        var_23 = arr_7 [22];
    }
    var_24 = (min((max(-78, 88138631882357784)), var_14));
    var_25 += (((((-3050939442318592921 ? var_3 : (~-12723)))) ^ (((106 ^ 122) ? (2251799809490944 | var_8) : (((var_9 ? var_11 : var_7)))))));
    var_26 = ((var_1 >= ((((var_1 + var_8) == 6)))));
    #pragma endscop
}
