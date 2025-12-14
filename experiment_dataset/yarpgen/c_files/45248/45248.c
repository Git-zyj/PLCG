/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45248
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45248 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45248
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (((((((min(var_4, var_2))) ? var_3 : ((max(var_6, var_4)))))) ? (((((var_9 ? 83 : var_3))) ? (max(var_3, var_2)) : var_9)) : (1 < 40869)));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                var_13 = (min(var_13, (((((-1 ? (((arr_0 [i_0] [i_0]) ? (arr_5 [1] [i_1]) : (arr_5 [12] [i_1]))) : (((arr_3 [3] [i_1]) - (arr_4 [2] [i_0] [i_1]))))) - (((var_5 ? 39921 : (arr_5 [20] [20])))))))));
                var_14 = -var_5;
            }
        }
    }
    var_15 += (max(((var_6 ? var_5 : ((-1073741824 ? 1073741826 : -3617368998650031802)))), (((1 ? 1073741849 : -852337192)))));
    var_16 *= var_8;
    #pragma endscop
}
