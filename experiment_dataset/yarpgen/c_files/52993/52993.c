/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52993
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52993 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52993
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_1] [i_1] = ((((arr_2 [i_0 - 1] [i_1] [1]) < (~var_13))));
                var_18 = (max((min(0, (arr_1 [i_0 - 1]))), ((((-1629019555 - 33024) ? ((((arr_3 [i_1]) && 4466319926261579637))) : (!var_2))))));
                var_19 = (max(var_19, (arr_3 [i_0])));
            }
        }
    }
    var_20 |= var_7;
    var_21 = (max(var_21, var_3));
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 12;i_3 += 1)
        {
            {
                var_22 = ((((((arr_1 [i_2]) * (arr_1 [i_2])))) + (((max(1, 18074414494859179845)) / (~255)))));
                arr_10 [i_2] [i_3] [i_3] |= (1 * -18579);
                var_23 = ((min((arr_9 [i_3] [i_2] [i_2]), (arr_9 [i_2] [i_2] [i_3]))));
            }
        }
    }
    #pragma endscop
}
