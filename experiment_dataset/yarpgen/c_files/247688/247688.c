/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247688
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247688 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247688
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (min(var_15, (((((((~15) <= 255))) >> (((min(var_14, (1100122555 - 170772341))) + 3438680460297067294)))))));
    var_16 = (var_3 & (!65535));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 24;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 25;i_4 += 1)
                        {
                            {
                                var_17 = ((!(~var_4)));
                                var_18 = ((-520344180063174007 ? 231 : 1100122561));
                                var_19 = (min(var_19, ((max(((((arr_9 [19] [i_2] [i_2 + 1] [i_2 - 1]) > 23156))), var_1)))));
                                arr_14 [i_0] [i_1] [i_0] [i_3] [23] = ((((~(max((arr_2 [i_4]), 0)))) >= var_3));
                            }
                        }
                    }
                    var_20 ^= (arr_13 [i_0] [i_1] [i_1] [i_1] [i_2 - 1]);
                    arr_15 [i_2] [i_1 + 1] [i_0] [i_0] = (max(var_11, (((arr_12 [i_1 + 1] [i_2 - 1]) / (arr_12 [i_1 - 1] [i_2 - 1])))));
                }
            }
        }
    }
    #pragma endscop
}
