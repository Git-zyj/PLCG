/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242062
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242062 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242062
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_3;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        {
                            arr_10 [i_2] [i_1] [i_2] [i_3] = (arr_0 [i_0 + 2]);
                            arr_11 [i_2] [i_2] [i_0] = 31;
                            var_13 = (((((-1376444487 % -3324) > (min(var_0, (arr_0 [1]))))) ? 3556813086 : ((((!(arr_0 [18])))))));
                            arr_12 [i_0] [i_3] [0] [i_2] [i_3] |= ((((((-32767 - 1) > 4194303)))) ? ((((var_4 ? 11523 : (arr_4 [i_1] [i_1] [i_0]))))) : (max((((1 ? 524288 : var_4))), (min(4194303, 9607873727939273919)))));
                        }
                    }
                }
                arr_13 [i_1] = (max((((((arr_5 [i_1] [18]) ? 896 : var_0)))), (((max(596768598, (arr_1 [i_1]))) << (((arr_5 [i_0 - 1] [i_1 + 4]) - 3744075988))))));
            }
        }
    }
    #pragma endscop
}
