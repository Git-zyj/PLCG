/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37447
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37447 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37447
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (var_6 / var_4);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_20 = 91;
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        {
                            arr_9 [i_0] [i_0] [i_0] [i_1] [i_0] = ((1 >> ((((-17200 ? var_4 : (arr_0 [i_0] [0])))))));
                            arr_10 [i_0] [i_2] [i_2] [i_1] [i_0] = ((-(((arr_3 [i_0] [i_0]) ? 210 : (((arr_3 [i_0] [1]) ? 116 : (arr_4 [i_0])))))));
                            arr_11 [i_0] [i_1] [i_1] [8] [14] |= (arr_2 [4]);
                        }
                    }
                }
            }
        }
    }
    var_21 = ((var_9 ? (((var_5 - ((var_11 ? 1 : 138))))) : var_8));
    #pragma endscop
}
