/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247907
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247907 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247907
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                var_17 = ((max((max((arr_1 [i_0] [8]), 1)), var_3)));
                var_18 *= (max((((arr_2 [i_0]) ? (var_13 | -449617861765949031) : ((var_6 | (arr_2 [12]))))), (arr_4 [i_0] [i_1] [i_1])));
                var_19 |= (((arr_1 [4] [4]) == (arr_1 [2] [2])));
            }
        }
    }
    var_20 = (-54 ^ 1);
    var_21 = 7208;
    #pragma endscop
}
