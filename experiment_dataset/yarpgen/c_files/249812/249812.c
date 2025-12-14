/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249812
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249812 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249812
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 -= (max(var_9, (((!(((var_2 ? var_0 : var_9))))))));
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                arr_4 [i_1] [i_1] [i_1] = ((3178878106656040751 ? (((3178878106656040751 ? (arr_0 [i_0 - 1]) : (arr_0 [i_0 - 1])))) : (((arr_0 [i_0 - 1]) ? var_6 : var_3))));
                var_11 = (max(var_11, ((((arr_3 [0] [i_0]) ? (max((var_3 < var_3), ((~(arr_1 [i_0]))))) : -1)))));
            }
        }
    }
    #pragma endscop
}
