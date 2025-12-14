/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211614
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211614 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211614
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = -16383;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                var_18 = arr_3 [i_1];
                var_19 = (min(var_19, (arr_0 [i_1])));
                var_20 -= ((arr_4 [i_0]) ? (max(var_11, (arr_1 [i_1] [i_1]))) : (((!1062246009) ? (arr_1 [i_0] [i_1]) : ((var_8 ? var_2 : var_7)))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        {
                            arr_9 [i_0] [i_3] [13] [i_3] = (((max((((arr_1 [i_0] [i_0]) * 4294967295)), (min(var_16, (arr_4 [i_0])))))) ? var_16 : ((4294967295 ? (max(var_7, 32767)) : 972020094)));
                            var_21 = arr_3 [i_0];
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
