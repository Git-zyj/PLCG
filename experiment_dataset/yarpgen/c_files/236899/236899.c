/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236899
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236899 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236899
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 |= ((((511 || var_17) && var_14)) ? var_16 : 0);
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 11;i_2 += 1)
            {
                {
                    var_20 = ((-(((arr_3 [i_2] [i_1]) << (var_8 - 621311354)))));
                    var_21 = (max(-22, (arr_3 [i_2] [i_2 - 1])));
                    var_22 = ((min((((arr_5 [i_0] [i_0] [i_1] [i_2]) - var_18)), var_2)));
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_3 = 0; i_3 < 14;i_3 += 1)
    {
        for (int i_4 = 1; i_4 < 11;i_4 += 1)
        {
            for (int i_5 = 2; i_5 < 13;i_5 += 1)
            {
                {
                    arr_19 [i_3] = (arr_14 [i_3]);
                    var_23 = (((((arr_11 [i_3]) || (arr_11 [i_3]))) ? (((((arr_11 [i_3]) && var_14)))) : (arr_11 [i_3])));
                }
            }
        }
    }
    var_24 = var_15;
    #pragma endscop
}
