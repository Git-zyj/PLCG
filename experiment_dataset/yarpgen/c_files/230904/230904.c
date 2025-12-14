/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230904
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230904 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230904
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 4; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 9;i_4 += 1)
                        {
                            {
                                var_19 = (min(var_19, (((-((((((arr_6 [i_4] [i_4] [1] [i_4]) ? var_10 : (arr_13 [i_0] [i_0] [i_0 - 2] [i_0] [i_0 - 1] [i_0 - 2])))) ? (arr_0 [i_0]) : (arr_8 [6] [i_1] [i_1] [i_1]))))))));
                                var_20 += max(-0, (max(1190260864, 17906760646698710711)));
                            }
                        }
                    }
                }
                var_21 = (min(var_21, (((((((~-15299) ? var_1 : (max(1581971297, -15318))))) ? ((((15300 > var_7) ? ((max((arr_2 [i_1]), 15318))) : var_10))) : 2712995999)))));
            }
        }
    }
    var_22 = (min(var_22, var_8));
    #pragma endscop
}
