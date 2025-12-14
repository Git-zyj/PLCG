/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24203
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24203 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24203
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((var_12 != (var_4 == var_3)));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0 + 4] [i_0] = (!40761);
                arr_6 [10] = ((((arr_2 [i_0] [i_1 + 4]) ? -4 : (arr_2 [i_0 + 4] [i_1 - 1]))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 18;i_3 += 1)
                    {
                        {
                            arr_11 [i_3] [i_2] [i_2] [i_0] |= ((((min(var_2, (var_16 % var_18)))) ? ((((((arr_4 [i_2]) ? (arr_8 [i_3] [i_1] [i_0]) : 3840637032849436894))) ? (((-1374631412048336036 ? 0 : -16))) : ((2061963574 ? 4206781607175763109 : -1613789150)))) : (~var_4)));
                            arr_12 [i_0] [i_0] [i_2] [i_2] [13] [8] = (min((arr_8 [i_0] [i_1 - 1] [i_2]), -7862528163646199288));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 1; i_4 < 1;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 19;i_5 += 1)
                    {
                        {
                            arr_18 [i_0] [i_0] = arr_13 [i_4] [i_0] [i_4] [i_5];
                            arr_19 [15] [i_0] [15] [i_0] [i_0] = (arr_17 [i_0]);
                            arr_20 [i_0] = (min(var_14, var_5));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
