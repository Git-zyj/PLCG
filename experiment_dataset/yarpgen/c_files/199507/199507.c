/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199507
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199507 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199507
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_18 = (max(var_18, (min(175, (((((0 - (arr_2 [i_2] [i_2] [i_2])))) ? ((((arr_3 [i_0]) < var_8))) : ((var_11 ? (arr_6 [i_0] [i_2]) : (arr_1 [i_0])))))))));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 23;i_4 += 1)
                        {
                            {
                                var_19 -= (((arr_14 [i_4] [i_3] [i_2] [i_0] [20] [i_0] [i_0]) >> (52443 - 52426)));
                                var_20 = (((arr_10 [i_3] [i_3 + 2] [i_2] [i_3] [i_4]) / 1));
                            }
                        }
                    }
                    var_21 &= 1;
                }
            }
        }
    }
    var_22 = (min(var_22, 13116));
    #pragma endscop
}
