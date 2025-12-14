/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238127
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238127 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238127
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 12;i_4 += 1)
                        {
                            {
                                var_20 = (((max(11631, -1891380044))) ? (((!8795) ? ((max(0, -806579530))) : 1945615737)) : (1945615740 - 44597));
                                var_21 = ((((((~var_15) - 48))) | ((((((arr_2 [i_2]) ? -1891380058 : 28942))) ? -var_6 : (((arr_2 [i_0]) ? 1891380058 : (arr_3 [i_2] [i_3])))))));
                                var_22 = (min(var_22, (arr_12 [i_0] [i_2] [i_0] [i_0] [i_0])));
                                var_23 = ((~(((arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) ? (arr_13 [i_2] [i_1] [i_2] [i_1] [i_4] [i_2]) : (arr_13 [i_0] [i_0] [i_1] [i_3] [i_4] [i_4])))));
                            }
                        }
                    }
                    arr_14 [i_0] [i_0] [i_2] [i_2] &= var_6;
                }
            }
        }
    }
    var_24 = (!var_7);
    #pragma endscop
}
