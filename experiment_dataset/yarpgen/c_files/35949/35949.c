/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35949
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35949 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35949
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (var_4 / var_15);
    var_17 = ((!((max(((var_7 ? var_5 : 1620171281605487276)), ((min(5, 2909613588))))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    var_18 = (min(((((max((arr_3 [1] [i_1]), var_3))) ? ((max(39127, 28762))) : (arr_5 [i_1]))), ((var_0 ? ((var_9 ? 65534 : var_10)) : var_5))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 16;i_4 += 1)
                        {
                            {
                                arr_15 [i_4] [i_3] [i_0] [i_1] [i_0] = var_15;
                                arr_16 [9] = ((min((arr_9 [i_0] [i_0] [i_0] [11] [i_0] [i_0]), 44177066)));
                            }
                        }
                    }
                    arr_17 [i_0] [i_0] = (((min(var_7, (1024 | 974552544871535825))) >> (((max((max((arr_7 [1] [i_0] [i_0]), (arr_6 [3] [i_1] [i_2]))), (((-9014164220136875223 ? 36773 : 39151))))) - 11179551459546302395))));
                }
            }
        }
    }
    var_19 = var_15;
    #pragma endscop
}
