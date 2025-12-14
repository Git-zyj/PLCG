/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210951
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210951 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210951
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_18;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                arr_8 [i_1] = (min((((arr_2 [i_0]) ? (((3637802680 ? var_14 : 14340))) : (4607003884375228400 / -16139))), ((min(246, (~16139))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        {
                            var_20 = ((-(max((arr_3 [i_3]), (arr_3 [i_0])))));
                            arr_15 [i_2] [i_1] [i_1] [i_3] = var_12;
                        }
                    }
                }
            }
        }
    }
    var_21 &= (min(var_10, var_1));
    #pragma endscop
}
