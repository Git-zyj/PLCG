/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216287
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216287 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216287
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 *= ((var_6 ? var_2 : (((var_7 && (!45585))))));
    var_13 = (min((((!((max(5840319650318810699, var_6)))))), (var_7 / var_0)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                var_14 *= (min((min(((24047 ? (arr_2 [i_0] [i_0]) : 4559505636348828985)), var_8)), var_4));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {
                            var_15 = (max((arr_6 [i_0] [i_1] [i_0]), ((max((arr_1 [i_1]), (arr_4 [i_1] [i_1] [i_1]))))));
                            var_16 -= (((+-144) ? (arr_5 [i_0] [i_2] [i_2]) : (max(41810642, (var_6 - 13887238437360722657)))));
                        }
                    }
                }
                var_17 = (min(var_17, (min(var_11, (-125 % 1)))));
            }
        }
    }
    #pragma endscop
}
