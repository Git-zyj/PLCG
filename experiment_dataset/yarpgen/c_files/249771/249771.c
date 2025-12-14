/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249771
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249771 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249771
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_16 = (arr_0 [i_0] [i_0]);
        var_17 = (max(var_1, (((max(11704021047479441165, (arr_0 [1] [i_0])))))));
    }
    var_18 -= var_5;
    var_19 = var_11;
    var_20 = (min(var_6, 127));
    /* LoopNest 2 */
    for (int i_1 = 0; i_1 < 24;i_1 += 1)
    {
        for (int i_2 = 4; i_2 < 22;i_2 += 1)
        {
            {

                for (int i_3 = 3; i_3 < 20;i_3 += 1)
                {
                    arr_11 [i_1] [i_2] [i_1] [i_1] = ((max((arr_5 [i_1] [i_1]), 6742723026230110450)));
                    var_21 ^= (min((((~(arr_4 [i_1])))), (((var_7 && 127) ? -var_4 : (((arr_5 [i_3] [i_1]) & 1553797363))))));
                    var_22 = ((((!(-32767 - 1))) ? (((((((arr_5 [i_1] [i_1]) ? (-127 - 1) : 110))) || 6297))) : (arr_9 [i_3] [1] [i_3] [i_3 + 2])));
                    arr_12 [i_3 + 2] [i_1] = ((((237 ? 112 : 6742723026230110450))));
                    var_23 = ((18 - (arr_8 [i_3 - 2] [i_3 + 2])));
                }
                var_24 = (max(var_24, ((max((((arr_8 [i_2] [i_2 - 4]) ? -106 : (max((arr_2 [i_1]), (arr_7 [i_2]))))), (((153 - (arr_10 [i_1])))))))));
                arr_13 [2] [i_1] [3] = (arr_10 [i_1]);
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 24;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 24;i_5 += 1)
                    {
                        {
                            var_25 = (max(var_25, (((~((-((238 ? 805306368 : 1)))))))));
                            var_26 = (max(var_26, 127));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
