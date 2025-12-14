/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225152
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225152 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225152
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                var_17 = (min(var_17, (((arr_1 [i_0] [i_1]) ? (arr_3 [i_0] [i_1]) : (((29077 ? (arr_1 [i_0] [i_1]) : (((arr_4 [i_0] [i_0]) * 29077)))))))));
                var_18 = (max(var_18, (arr_0 [i_0])));
                var_19 = -8695321853069911189;
            }
        }
    }
    var_20 = 30493;
    #pragma endscop
}
