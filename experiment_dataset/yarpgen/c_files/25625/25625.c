/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25625
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25625 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25625
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 |= (((((((max(var_9, var_2))) << (var_10 && 0)))) ? ((((max(var_5, 6738656047453471082)) < 3945585788909679825))) : ((((var_2 ? var_0 : var_1)) % ((var_0 ? var_1 : var_5))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 1;i_2 += 1)
            {
                {
                    var_13 -= ((-0 ? ((max((var_1 / -4604862724566029485), (-3945585788909679826 + 4070897180)))) : ((max((arr_1 [i_1]), (arr_4 [i_0] [i_1] [10] [10]))))));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 13;i_4 += 1)
                        {
                            {
                                arr_13 [i_0] [i_1] [i_2] [i_3] [1] [i_2] [i_1] &= 1;
                                arr_14 [i_2] [i_1] [0] &= (((((var_7 ? (max((arr_6 [4] [i_4] [10] [10] [i_1] [i_0]), 1)) : 1))) && (((var_0 ? 0 : (arr_11 [i_4] [12] [i_2] [12] [i_0]))))));
                                arr_15 [i_0] [12] [i_1] [i_1] [i_2] [i_3] [i_4] = var_10;
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
