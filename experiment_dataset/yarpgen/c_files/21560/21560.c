/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21560
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21560 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21560
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_3;

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_15 = (((~var_4) >= var_9));
        var_16 = (((((!-17) ? var_6 : (((arr_0 [i_0]) ? (arr_1 [i_0] [i_0]) : var_12))))) ? -112 : (((!(!1)))));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 21;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 22;i_3 += 1)
                {
                    {
                        arr_11 [i_0] = ((~((~(arr_9 [i_0] [i_1] [i_2] [i_3] [i_3])))));
                        var_17 = (((arr_7 [i_2] [i_2 - 1]) ? ((-17 ? (arr_8 [i_0] [i_0] [i_2 - 1] [14]) : 179)) : (((11 ? var_2 : var_7)))));
                    }
                }
            }
        }
    }
    var_18 = 255;
    var_19 = var_4;
    #pragma endscop
}
