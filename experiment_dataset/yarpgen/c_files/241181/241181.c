/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241181
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241181 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241181
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = 42347;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 1;i_2 += 1)
            {
                {
                    arr_10 [i_0] [i_1] [i_2 - 1] = ((((((max(var_10, 1))) == (0 <= var_3))) ? ((min(0, 1))) : (min(var_7, (((arr_7 [i_2 - 1]) ? (-2147483647 - 1) : 1))))));
                    var_14 = var_8;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 25;i_4 += 1)
                        {
                            {
                                arr_17 [i_0] [i_0] [i_0] [i_0] [i_1] &= var_2;
                                var_15 = ((((9205357638345293824 ? 11355107568097085838 : -419)) - (max(((127 ? var_2 : 4294967295)), (0 * 4294967295)))));
                            }
                        }
                    }
                    arr_18 [i_1] = max((~1), (~var_9));
                    var_16 = (min(var_16, (((((min((arr_5 [i_2 - 1] [i_2 - 1] [i_0]), 0))) ? (arr_4 [i_2 - 1] [i_2 - 1] [i_2 - 1]) : (((arr_4 [i_2 - 1] [i_2 - 1] [i_2 - 1]) ? var_9 : (arr_4 [i_2 - 1] [i_2 - 1] [i_2 - 1]))))))));
                }
            }
        }
    }
    var_17 = (((-32767 - 1) ? (((var_6 ? var_12 : 2862083919536024586))) : (!var_3)));
    var_18 = (((((max(var_12, 5328085034464975326)))) ? (max((var_0 % var_10), var_8)) : var_4));
    #pragma endscop
}
