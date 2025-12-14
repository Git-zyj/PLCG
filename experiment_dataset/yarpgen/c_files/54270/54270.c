/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54270
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54270 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54270
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 -= ((((((0 && -1) - var_4))) ? -1 : var_16));
    var_21 = ((((max(var_12, (0 | 0)))) ? 22 : var_2));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            {
                var_22 = (min(var_22, (((+(((arr_4 [i_0 - 1] [i_0 + 1]) * (arr_3 [i_0]))))))));
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 12;i_3 += 1)
                    {
                        {
                            arr_10 [i_0] [i_0] [i_1] [i_1] [i_2] [i_3] = (max(((((((arr_7 [i_0] [i_0] [i_0 + 1] [i_0]) * 22))) ? (max(1, 4586590568481847716)) : (((15550525726115294122 ? var_6 : 6))))), (((var_4 ? (var_8 + var_7) : (((var_8 * (arr_5 [i_0] [i_1] [i_0])))))))));
                            var_23 = (min(var_23, 1781579778682236094));
                            var_24 = 254758671;
                        }
                    }
                }
            }
        }
    }
    var_25 = var_11;
    #pragma endscop
}
