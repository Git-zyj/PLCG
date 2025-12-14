/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236708
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236708 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236708
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 &= (var_7 >= var_5);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 15;i_1 += 1)
        {
            {
                var_13 |= (min((((arr_3 [i_0] [i_1 - 3]) ? (((arr_1 [i_1 + 2]) ? (arr_2 [0]) : (arr_3 [1] [i_0]))) : (((min(var_6, var_6)))))), ((max((arr_4 [i_1 - 1] [i_1 + 3]), (arr_4 [i_1 + 4] [i_1 + 3]))))));
                var_14 = (max(var_14, (((((arr_4 [i_1 + 4] [i_1 + 3]) ? (arr_4 [i_1 + 2] [i_1 + 3]) : ((((arr_0 [4]) < (arr_4 [14] [i_0]))))))))));
            }
        }
    }
    var_15 = (var_2 ^ var_9);
    var_16 = ((((!(((var_1 ? var_8 : var_3))))) ? var_7 : var_11));
    var_17 *= (min((((((min(-391883176, -52))) && ((max(var_5, var_3)))))), (var_10 % var_9)));
    #pragma endscop
}
