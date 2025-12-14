/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41827
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41827 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41827
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 15;i_4 += 1)
                        {
                            {
                                var_18 -= (min((arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]), ((((min(244, 226))) ? var_17 : (min(136, (arr_8 [i_1])))))));
                                var_19 &= (arr_3 [1] [i_0]);
                            }
                        }
                    }
                }
                arr_12 [i_0] [i_1] [i_1] = (((arr_8 [i_0]) ^ (min(-var_14, -1752202202))));
            }
        }
    }
    var_20 = (max(var_20, var_16));
    #pragma endscop
}
