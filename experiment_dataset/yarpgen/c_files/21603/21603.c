/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21603
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21603 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21603
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                arr_7 [i_0] = ((-(min(((((arr_5 [i_0] [i_0]) * var_17))), ((17179836416 ? 14 : var_10))))));

                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    var_19 = (((210 ? 1 : -50)));
                    arr_10 [i_0] [i_1] [i_0] = (((((min(var_3, var_0)))) & (((arr_2 [i_0]) ? ((max((arr_3 [i_0]), 491393085))) : (((arr_8 [i_0] [i_0]) & (arr_4 [i_0] [i_0])))))));
                }
                arr_11 [i_0] = min(((((arr_5 [i_0] [i_1]) ? (arr_1 [i_0] [i_1]) : -13288))), (arr_4 [i_0] [i_0]));
            }
        }
    }
    var_20 = (((~var_7) ? (((-((var_17 ? 54449 : -26364))))) : var_3));
    #pragma endscop
}
