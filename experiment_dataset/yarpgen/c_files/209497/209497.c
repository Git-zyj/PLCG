/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209497
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209497 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209497
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        {
                            var_13 = arr_5 [i_3] [i_2] [i_0 - 1];
                            var_14 = (~((((15 ? var_3 : 5455428548682214232)) >> (-264865874 >= var_12))));
                            var_15 &= var_3;
                        }
                    }
                }
                var_16 = (arr_5 [i_1] [i_0] [i_1]);
            }
        }
    }
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 1;i_4 += 1)
    {
        for (int i_5 = 1; i_5 < 1;i_5 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 17;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 1;i_7 += 1)
                    {
                        {
                            var_17 = (arr_10 [i_4]);
                            var_18 = var_7;
                            var_19 = ((-688554254 + 2147483647) << ((((0 ? var_5 : (arr_17 [i_7] [i_6] [i_5] [i_4]))) - 1)));
                        }
                    }
                }
                var_20 = (min(var_20, -860178055959237708));
            }
        }
    }
    #pragma endscop
}
