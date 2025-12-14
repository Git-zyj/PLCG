/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44232
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44232 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44232
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((262112 ? (262143 && -1060) : 15436));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_0] [i_0] = (((-27 - 262142) ? (((arr_4 [10] [i_1]) + var_7)) : (arr_1 [i_0] [i_1])));
                var_11 -= 3571291748;
                arr_7 [i_0] [i_0] [i_0] = (min(var_6, 1050533849));
                /* LoopNest 3 */
                for (int i_2 = 2; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 16;i_4 += 1)
                        {
                            {
                                arr_16 [1] [i_3] [i_0] [i_3] [8] &= ((3 ? 53493 : 0));
                                var_12 = var_5;
                                arr_17 [i_1] [i_0] &= ((27442 ? ((min((min(-28, -1)), (~-30)))) : (min((arr_8 [i_3 + 2] [i_3] [i_2 + 1]), 64341))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_13 -= -3860534291276713624;
    var_14 -= ((((min(18446744073709289446, ((max(1599184263, 614229072)))))) || 12));
    #pragma endscop
}
