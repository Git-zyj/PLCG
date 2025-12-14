/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216289
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216289 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216289
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 23;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_1] = (max(((max((arr_4 [i_1 - 1] [i_1 - 1]), (arr_4 [i_1 + 1] [i_1 + 1])))), (((arr_4 [i_1 + 1] [i_1 - 1]) ? (arr_4 [i_1 - 1] [i_1 + 1]) : var_10))));
                var_19 = (max(var_19, ((((-74 == -132) ? ((min(-65, -24))) : ((18 ? (((arr_4 [i_0] [i_1]) ? var_7 : 132)) : (((((arr_3 [i_0]) && 132)))))))))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 4; i_2 < 13;i_2 += 1)
    {
        for (int i_3 = 3; i_3 < 14;i_3 += 1)
        {
            {
                arr_10 [i_3] [i_3 - 1] [i_3] = 122;
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 15;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 15;i_5 += 1)
                    {
                        {
                            arr_15 [i_3] = (((-18 & (~2147483647))));
                            var_20 = (arr_6 [i_2] [0]);
                        }
                    }
                }
                arr_16 [i_3] = 117;
                var_21 = (max(var_21, -1));
            }
        }
    }
    var_22 -= (((var_11 != ((var_11 ? 7 : var_11)))));
    #pragma endscop
}
