/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41728
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41728 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41728
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = max(93, (max((min(var_13, var_1)), ((min(113, -105))))));
    var_18 = var_0;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                var_19 = (max(var_19, ((min(((min((arr_3 [i_0]), (arr_3 [i_0])))), (arr_0 [i_1] [i_0]))))));

                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {
                    arr_8 [i_0] [i_1] [i_0] [i_0] = -1;
                    arr_9 [i_2] |= ((!(~var_7)));
                    var_20 = (arr_7 [i_2] [i_1] [i_1] [i_0]);
                }
                var_21 *= -8116;
                var_22 = (((arr_3 [i_1]) > (min(((var_13 ? -1766502113 : var_3)), -92))));
                arr_10 [i_0] = ((((min((93 ^ var_4), ((var_12 ? var_0 : var_6))))) & (max(4294967295, var_11))));
            }
        }
    }
    #pragma endscop
}
