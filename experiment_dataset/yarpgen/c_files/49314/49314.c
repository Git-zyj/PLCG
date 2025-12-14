/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49314
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49314 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49314
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = 215;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                var_11 = var_8;

                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    arr_11 [i_2] [i_1] = max(var_9, 0);
                    var_12 = (max(((var_8 ? ((min(215, 1))) : -var_4)), (((min(var_3, var_6))))));
                    var_13 = (max(var_13, (((0 ? ((max(0, 51))) : ((-var_4 ? ((max(var_0, var_3))) : var_8)))))));
                }
                var_14 = max((min((min(var_8, 1875073249)), var_6)), var_7);
            }
        }
    }
    #pragma endscop
}
