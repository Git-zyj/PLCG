/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46523
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46523 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46523
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (min(var_2, -66));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    var_21 = (!var_1);
                    var_22 = ((var_13 ? (!1478672722) : ((((var_3 ? (arr_6 [i_0] [i_1] [14] [i_2]) : -776169531)) + (max(var_0, (arr_7 [i_1] [i_2] [i_1] [i_0])))))));
                }
                var_23 = (~96);
            }
        }
    }
    var_24 = var_17;
    #pragma endscop
}
