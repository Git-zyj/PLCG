/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202887
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202887 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202887
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (((var_5 ? var_10 : ((var_3 ? 2072872869 : -1833570385)))) % (((1833570364 - var_6) ? 1 : 31)));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 21;i_4 += 1)
                        {
                            {
                                var_13 = 1833570372;
                                var_14 = (min(var_14, ((+(((1833570364 >= 1833570381) / (max(-1833570391, var_8))))))));
                            }
                        }
                    }
                    var_15 = (arr_6 [i_0] [i_0]);
                }
            }
        }
    }
    var_16 = (max(var_6, 67108863));
    #pragma endscop
}
