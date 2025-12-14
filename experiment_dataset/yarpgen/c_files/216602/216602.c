/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216602
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216602 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216602
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((~(((((var_8 ? var_6 : var_10)) > (var_2 * var_2))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 9;i_3 += 1)
                    {
                        {
                            arr_9 [i_0] [i_0] [i_0] [1] = ((!((max((arr_6 [i_0] [i_0] [i_3 + 3]), ((max((arr_1 [i_3]), var_2))))))));
                            var_14 *= (!-102);
                            var_15 += ((~(((((14762766471653484787 << (((arr_0 [i_3 + 3]) - 6208254479387211584))))) ? 12048117121428235505 : var_0))));
                            var_16 = (max(14762766471653484804, 5928929732676608307));
                        }
                    }
                }
                arr_10 [i_1] [i_0] [2] = (((var_6 ? -52 : 0)));
            }
        }
    }
    #pragma endscop
}
