/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43137
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43137 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43137
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 6;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 9;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 10;i_4 += 1)
                        {
                            {
                                arr_13 [i_0] = 64982;
                                var_19 = (-1128036287 ? (arr_2 [i_1] [i_4]) : var_2);
                                var_20 = 3974759017;
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 2; i_5 < 9;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 10;i_6 += 1)
                        {
                            {
                                arr_21 [i_0] [4] [0] [i_2 + 2] [i_1] [i_1] [i_0] = (min(((~(((arr_15 [i_1] [1] [i_0]) ? (arr_8 [i_0] [i_1] [i_0]) : (arr_3 [i_0] [i_2] [i_0]))))), ((((((arr_2 [i_5] [i_5]) ? (arr_7 [i_0] [i_0]) : (arr_19 [i_0] [i_0] [i_2])))) / (max(7321392978757400850, var_3))))));
                                var_21 *= ((((((arr_11 [i_2 + 2] [i_5] [i_5 - 2] [i_5 - 1]) ? var_14 : (arr_11 [i_2 + 3] [i_2 + 1] [i_5 - 1] [i_5 - 2])))) && (((((((arr_16 [i_0] [i_1] [i_2] [i_5] [i_6]) ? var_6 : -1893942608))) ? (!var_9) : var_5)))));
                                arr_22 [i_0] [i_1] [i_2 - 1] [i_5] [5] [i_6] = (arr_1 [i_0]);
                                arr_23 [i_0] = ((~(min(-77, 1893942608))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_22 = (min(var_22, var_15));
    #pragma endscop
}
