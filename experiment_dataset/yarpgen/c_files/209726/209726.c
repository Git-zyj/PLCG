/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209726
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209726 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209726
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_9;
    var_18 = ((min(15, 647302195)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 22;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 4; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 23;i_4 += 1)
                        {
                            {
                                arr_13 [i_0] [i_0] = (((min(3647665101, -386305913)) << (var_12 + 2022136329)));
                                var_19 = (((arr_9 [i_0] [i_0] [i_3 - 1] [i_4]) || (arr_12 [i_0] [i_0])));
                            }
                        }
                    }
                }
                var_20 = (((!(((9223372036854775807 ? var_2 : var_10))))));
                arr_14 [i_0] = (min((((((min(-5491675056605435477, var_13))) ? 386305912 : (arr_12 [i_1 + 1] [i_1 + 1])))), (max(-5691160728226656090, (arr_2 [i_1 - 3] [i_1 + 1] [i_0])))));
            }
        }
    }
    #pragma endscop
}
