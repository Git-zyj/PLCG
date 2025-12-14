/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217354
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217354 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217354
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (max(var_17, 1100336711));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            {
                var_18 = 1100336699;
                arr_5 [i_0] [i_0] = (2979497508 & -1761291217);
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 19;i_3 += 1)
                    {
                        {
                            var_19 = ((((arr_4 [i_0]) ? ((-1761291217 ? (arr_1 [i_0] [i_1]) : var_3)) : var_12)));
                            arr_13 [i_0] [i_1 + 1] [i_0] [i_3] = (-232168799 & -232168780);
                        }
                    }
                }
                arr_14 [10] |= var_16;
            }
        }
    }
    #pragma endscop
}
