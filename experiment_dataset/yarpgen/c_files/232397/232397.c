/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232397
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232397 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232397
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (var_14 % 32767);
    var_20 = var_8;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    var_21 &= (((((arr_7 [i_1 + 1] [i_1] [i_1]) & var_14)) / 32767));
                    var_22 = (arr_0 [i_0]);
                    var_23 = (-((8992 ? (arr_6 [i_1 - 4] [i_1 - 2] [i_1] [i_1 + 1]) : 65535)));
                    var_24 = (min(var_24, ((((((var_2 != 65535) ? ((41914 ? var_5 : var_15)) : (~51415))) + var_14)))));
                }
            }
        }
    }
    #pragma endscop
}
