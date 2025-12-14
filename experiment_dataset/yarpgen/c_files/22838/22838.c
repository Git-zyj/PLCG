/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22838
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22838 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22838
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = min(40567, 40567);
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    var_13 = ((var_11 ? (max((~var_10), 2047)) : (((((min((arr_2 [i_0] [i_0]), 2189859138))) ? (~var_5) : ((2105108158 ? 4044273496 : 0)))))));
                    var_14 = (-(((arr_1 [i_2] [i_1]) ? var_6 : (arr_2 [4] [i_1]))));
                    var_15 |= 40570;
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 21;i_4 += 1)
                        {
                            {
                                var_16 = -819;
                                var_17 = ((-1171 ? ((min((arr_10 [i_4 + 2] [i_3 + 1] [i_0 - 1] [i_0] [i_0 - 1] [i_0]), 47313))) : (arr_10 [i_4 + 3] [i_3 - 2] [i_0 - 1] [1] [i_0 - 1] [i_0])));
                                var_18 *= var_11;
                            }
                        }
                    }
                }
            }
        }
    }
    var_19 = (!-var_7);
    var_20 = ((!(((var_0 * (var_11 == var_0))))));
    #pragma endscop
}
