/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226760
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226760 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226760
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((var_16 ? var_14 : (((((max(-42, 1))) && var_5)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                arr_5 [i_0] [16] |= (~var_2);
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 19;i_3 += 1)
                    {
                        {

                            for (int i_4 = 3; i_4 < 18;i_4 += 1)
                            {
                                arr_15 [i_0] [i_1] [i_2] [i_3] [10] [i_0] = (-(--3));
                                arr_16 [i_1] [i_1] [i_4 + 3] = var_12;
                                var_18 &= var_6;
                                arr_17 [i_2] [i_2] |= 41;
                            }
                            var_19 = (((((arr_0 [i_3 + 3]) ? (((arr_1 [i_1] [i_2]) ? var_15 : 16445629756605917541)) : ((-7954550338994653599 ? (arr_7 [i_3] [i_2]) : (arr_14 [i_3] [i_3] [i_0] [i_1] [i_1] [i_1] [i_0]))))) << (((!-7954550338994653584) >> (((arr_11 [i_0] [i_1] [12] [i_3 + 3]) - 64))))));
                        }
                    }
                }
                var_20 = (min(var_20, (((((((!(arr_13 [7] [4] [i_1] [4] [18]))))) != var_12)))));
            }
        }
    }
    #pragma endscop
}
