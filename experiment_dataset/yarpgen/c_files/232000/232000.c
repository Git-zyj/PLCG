/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232000
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232000 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232000
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (max(var_19, var_11));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                var_20 = (min(var_20, ((((((((min((arr_1 [i_1]), 8525))) ? (arr_2 [i_1]) : ((-930934162 & (arr_3 [i_0] [i_0] [i_1])))))) | (min(3024909934749153951, -1)))))));
                var_21 = var_14;
            }
        }
    }
    var_22 = 0;
    #pragma endscop
}
