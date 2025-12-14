/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40977
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40977 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40977
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    var_13 = (max(var_13, ((min(((min((!89578637), ((var_0 ? var_12 : var_10))))), ((((var_6 ? var_1 : var_12)) - (((var_8 ? var_4 : var_9))))))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                arr_15 [i_0] [i_1] [1] [12] [i_1] = (((((var_8 == var_2) / var_10))) ? ((min(var_3, var_2))) : ((((((max(var_3, var_6)))) / var_3))));
                                var_14 = (min((max((!var_1), (var_0 <= var_4))), (var_0 == var_4)));
                                var_15 = var_4;
                            }
                        }
                    }
                }
            }
        }
    }
    var_16 = (max(var_16, (((max(89578637, -89578638))))));
    var_17 = (((((((var_5 ? var_0 : var_11))) ? (var_0 * var_12) : (~var_1))) * ((min(((max(var_8, var_10))), (~var_11))))));
    #pragma endscop
}
