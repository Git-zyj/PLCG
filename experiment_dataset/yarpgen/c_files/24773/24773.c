/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24773
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24773 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24773
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            {
                arr_4 [i_1] [i_1] [i_1] = var_7;
                /* LoopNest 3 */
                for (int i_2 = 2; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 4; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 14;i_4 += 1)
                        {
                            {
                                var_12 = (max(((((arr_2 [i_2 - 2] [i_2 - 2] [10]) >= (125 ^ var_10)))), var_8));
                                var_13 -= (~1189012434);
                                arr_12 [i_0] [i_1] [7] [i_4] = (min((var_11 && -1189012431), (((var_0 * var_6) / (((max(-126, 124))))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_14 = (max(((var_8 + (((min(var_2, var_7)))))), (((-21 - var_8) + (((var_10 ? 124 : -1189012452)))))));
    var_15 = ((((~(min(17603543680540502009, var_3)))) << ((((var_11 & (-125 & -1))) + 2068452510491101324))));
    var_16 = -38;
    #pragma endscop
}
