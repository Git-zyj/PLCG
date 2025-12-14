/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193055
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193055 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193055
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (~var_11);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 15;i_2 += 1)
            {
                {
                    var_13 = var_5;
                    arr_8 [i_0] [13] = 3;
                    var_14 = (min(var_14, (((2499763383 % (-624073242 <= -536870912))))));
                }
            }
        }
    }
    #pragma endscop
}
