/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50426
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50426 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50426
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    var_13 = (max(var_13, -5235250996648809323));
                    var_14 = (max(var_14, ((((max(-5235250996648809339, (-5235250996648809323 | 18446744073709551615))) / 63488)))));
                    var_15 = 4325657701135322884;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            {
                                arr_15 [i_4] [i_3] [i_2] [i_3] [i_0] = (!5235250996648809349);
                                var_16 = (-(max((arr_11 [i_3] [i_1] [i_0]), ((max(5235250996648809313, 4294967295))))));
                                var_17 = 5235250996648809339;
                                var_18 = (((!((max((arr_12 [i_4] [i_3] [1] [16] [i_0]), (arr_7 [i_0] [i_0] [i_0] [i_4])))))) ? ((-var_12 ? (5235250996648809298 >= 4190910213223943957) : (arr_10 [i_0] [i_1] [i_2] [i_2]))) : (((arr_8 [i_0] [i_4] [i_3]) ? 16 : ((3558188804 ? (arr_5 [i_0] [i_4]) : var_5)))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_19 = ((((!(var_12 && var_5))) && (((!var_6) && (((var_10 ? 1 : var_8)))))));
    var_20 = (max(254177925, ((max(30491, 15872)))));
    #pragma endscop
}
