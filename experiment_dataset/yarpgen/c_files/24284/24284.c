/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24284
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24284 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24284
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (min((max((-9223372036854775807 - 1), (-127 - 1))), ((((var_10 > var_0) | -1)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_1] [i_1] = 1;
                arr_7 [i_0] [i_1] = (max(var_8, (max(((min((arr_1 [i_0] [i_0]), var_4))), 6589553761941066318))));
                arr_8 [i_0] = (!164);
                arr_9 [i_0] = -2059986194;
            }
        }
    }
    #pragma endscop
}
