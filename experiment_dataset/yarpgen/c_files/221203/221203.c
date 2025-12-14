/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221203
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221203 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221203
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max((~var_6), ((~(var_3 & var_11)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                var_14 = ((!((min(-7, -51)))));
                var_15 = (arr_1 [i_0]);
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 14;i_3 += 1)
                    {
                        {
                            var_16 = (~-1030);
                            var_17 = (((arr_3 [i_3 + 1]) / ((1 ? var_6 : (var_9 < var_3)))));
                            arr_9 [i_0] [i_2] [i_2] [i_2] = (5690613101277230646 >= var_9);
                            var_18 = (((((~(arr_3 [i_3 + 1])))) ? (((var_8 ^ var_8) ? (~var_12) : 10)) : (((+(((arr_4 [i_0] [i_1] [i_2] [i_3]) ? 1 : 3760727267)))))));
                        }
                    }
                }
            }
        }
    }
    var_19 = -4294967295;
    #pragma endscop
}
