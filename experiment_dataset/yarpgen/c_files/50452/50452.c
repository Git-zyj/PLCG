/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50452
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50452 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50452
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 14;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 14;i_4 += 1)
                        {
                            {
                                var_16 = (((min((arr_2 [i_0 - 1] [i_0 - 1]), var_10))) ? (min((arr_2 [i_1] [i_1]), (arr_2 [11] [i_1]))) : (min((arr_2 [i_4 + 1] [i_2 - 2]), var_12)));
                                arr_14 [i_2 - 1] [i_0] [1] = var_3;
                                arr_15 [i_0] [i_3] [11] [i_1] [i_0] = (max((min(12, (arr_2 [i_2 - 1] [i_0 + 1]))), 59100));
                            }
                        }
                    }
                    var_17 = (max(var_17, (((59112 || (((arr_0 [i_1]) != 6431)))))));
                    var_18 = 59105;
                }
            }
        }
    }
    var_19 &= (((((((min(var_8, 19624))) ? var_3 : (0 ^ var_13)))) ? ((min(var_4, ((min(var_15, var_14)))))) : ((6749006252519381719 & (2569583639 & 6423)))));
    #pragma endscop
}
