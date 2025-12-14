/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234881
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234881 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234881
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 &= ((((var_5 ? (!var_12) : var_1)) & ((~((var_7 ? var_3 : var_8))))));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 23;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 25;i_4 += 1)
                        {
                            {
                                var_15 = (((~var_4) ? ((~(arr_11 [i_0] [i_0] [i_1] [i_1] [i_0 - 1] [i_1] [i_3 + 1]))) : (min((arr_11 [i_0] [i_0] [i_1] [i_0] [i_0 - 1] [i_0] [i_3 - 1]), var_3))));
                                arr_13 [i_1] = -7;
                                arr_14 [i_4] [i_1] [i_0] [i_3] = (-(min(var_4, (((!(arr_1 [20])))))));
                                var_16 = (min(var_16, (((-35 ? -13687 : 2)))));
                                arr_15 [i_0] [2] [i_0] [i_3] [i_4] [2] |= ((+((1982600456 ? (arr_5 [i_3] [2] [i_3 + 1]) : (arr_5 [i_0 + 2] [1] [1])))));
                            }
                        }
                    }
                    arr_16 [7] [i_1] [i_2 + 2] = (arr_5 [1] [i_1] [i_1]);
                }
            }
        }
    }
    #pragma endscop
}
