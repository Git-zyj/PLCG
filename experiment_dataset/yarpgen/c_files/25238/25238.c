/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25238
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25238 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25238
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_10 -= (min((arr_3 [i_0 + 2] [12] [i_1]), (((-1015758920 ? -1015758920 : -1015758920)))));
                var_11 = (((max(15, -1978677517)) > (var_8 || 1978677505)));
                var_12 = (arr_1 [i_0]);
                arr_6 [i_0] [i_0] [i_1] = var_2;
            }
        }
    }
    var_13 = ((((max((min(var_2, 8765697636269403845)), ((min(var_0, -1015758922)))))) ? ((min((~var_9), (~var_2)))) : ((min(1847872884771660585, var_7)))));
    /* LoopNest 3 */
    for (int i_2 = 3; i_2 < 15;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 18;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 1;i_4 += 1)
            {
                {
                    var_14 &= (+((max((!61143), (!var_6)))));
                    /* LoopNest 2 */
                    for (int i_5 = 1; i_5 < 17;i_5 += 1)
                    {
                        for (int i_6 = 2; i_6 < 17;i_6 += 1)
                        {
                            {
                                arr_18 [i_2] [i_2] [i_2] [i_3] [6] = min((max(1978677485, var_9)), var_1);
                                arr_19 [10] [i_4] [i_2] [i_6] = min((((var_7 && ((max(-10400, var_9)))))), (arr_12 [i_2] [14] [i_2]));
                                arr_20 [i_2] [i_2] [i_3] [i_5 - 1] = ((+((((var_3 ? (arr_12 [i_4] [i_4] [i_2]) : var_0)) | (((((arr_16 [i_2] [i_2] [i_2 + 3] [i_2 + 3] [11] [i_2]) > (arr_13 [i_2] [i_4] [i_2] [i_2] [16] [15])))))))));
                            }
                        }
                    }
                    var_15 = var_7;
                }
            }
        }
    }
    var_16 = (~(1978677524 ^ var_1));
    var_17 = (max(((max(var_8, var_6))), ((10397 ? var_3 : -8765697636269403846))));
    #pragma endscop
}
