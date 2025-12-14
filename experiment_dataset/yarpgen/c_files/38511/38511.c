/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38511
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38511 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38511
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 18;i_0 += 1)
    {
        var_17 = ((((((arr_2 [i_0 - 1] [i_0 - 1]) << (arr_2 [i_0 + 1] [i_0 - 2])))) < var_5));
        var_18 = ((-(((((arr_0 [i_0]) / (arr_2 [i_0] [i_0]))) * (arr_0 [i_0])))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 16;i_2 += 1)
            {
                {
                    var_19 = 32764;
                    var_20 = arr_5 [i_1];
                    var_21 = var_14;
                    var_22 = var_12;
                }
            }
        }
        var_23 = ((!((((min(-110, var_9)) * (-9223372036854775807 - 1))))));
    }
    var_24 = var_1;
    var_25 = -13901060958146675699;
    var_26 = var_8;
    #pragma endscop
}
