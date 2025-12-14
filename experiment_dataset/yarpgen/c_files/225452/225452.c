/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225452
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225452 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225452
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 10;i_2 += 1)
            {
                {
                    arr_6 [10] &= (max(6648788790403066401, (((6503228637178439506 >= (arr_2 [i_2 - 2]))))));
                    var_19 ^= (((arr_2 [i_2]) / (max(((min(32767, (arr_2 [i_1])))), -3901518953611436489))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_20 &= (var_5 ? ((((arr_12 [3] [i_1] [i_2] [8] [i_4]) ^ 2083805479))) : (min(((min(1, (arr_2 [i_2])))), (max((arr_12 [i_0] [i_0] [i_0] [i_0] [i_0]), 2907322471250152436)))));
                                arr_13 [i_0] [i_1] [6] [i_0] [i_1] [i_0] = (min(((max((arr_0 [i_0 - 1]), (arr_0 [i_0 + 1])))), (max((arr_5 [i_1] [i_2 - 3]), (min(-3639277539646474914, var_8))))));
                                var_21 = (max((arr_12 [i_0] [i_0 + 1] [i_0] [i_0 + 1] [i_3]), (((max((arr_2 [i_0]), (arr_1 [5]))) << (((min(-1239062822, (arr_0 [i_3]))) + 1239062851))))));
                                arr_14 [i_4] [i_1] [i_1] [i_1] [i_0] = ((0 ? 127 : (min(7, var_12))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_22 = var_13;
    var_23 = (max(var_23, ((max(var_8, (max(((min(2863, -15425))), (max(var_12, var_3)))))))));
    #pragma endscop
}
