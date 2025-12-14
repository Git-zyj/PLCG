/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234893
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234893 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234893
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 &= min(-49, 1);
    var_11 = var_1;
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    var_12 = var_1;
                    arr_8 [i_0] [i_2] [i_2] [i_2] = ((((min(var_2, var_3))) ? (((max(var_7, var_9)))) : (~var_3)));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 17;i_4 += 1)
                        {
                            {
                                var_13 = min((max((min(var_5, var_2)), var_9)), (((~((max(var_8, var_4)))))));
                                var_14 = (max((max(var_3, (max(var_1, var_3)))), ((((((var_5 ? var_2 : var_9))) ? (max(3112079979, -6636561741285325084)) : var_4)))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
