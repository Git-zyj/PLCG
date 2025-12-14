/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232908
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232908 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232908
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((((min((10092035273473171233 / 8354708800236380382), 1143027924300150374))) ? var_7 : -22061));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    arr_9 [i_2] [i_0] [i_0] [i_0] = (((arr_0 [i_1 + 2] [i_0]) < (arr_7 [i_1 + 1] [i_1 + 2] [i_1 - 1])));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 25;i_4 += 1)
                        {
                            {
                                arr_16 [i_0] = (((~var_10) ? 13418 : (((-9223372036854775807 - 1) ? var_6 : (arr_15 [i_0] [i_1 - 1] [i_0] [i_0] [i_4])))));
                                var_12 *= ((-8816946654043954795 / (arr_5 [i_1 - 1] [3] [3])));
                            }
                        }
                    }
                }
            }
        }
        arr_17 [i_0] [24] &= (2147467264 & -9223372036854775805);
    }
    #pragma endscop
}
