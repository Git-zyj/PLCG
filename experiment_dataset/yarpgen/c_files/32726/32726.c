/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32726
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32726 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32726
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_13;
    var_18 = -var_2;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 22;i_2 += 1)
            {
                {
                    arr_8 [i_1] [i_1] = ((((max((arr_1 [i_2 + 1]), 15436418239665218419))) && ((min((arr_1 [i_2 - 3]), (arr_1 [i_2 + 3]))))));
                    arr_9 [i_1] [i_1] [i_1] = (((arr_6 [i_1]) == (min((~1), var_12))));
                    arr_10 [i_2 - 2] [i_1] [i_0] = ((arr_2 [i_0]) + (((!(arr_5 [i_1] [i_1] [i_2 - 4])))));
                    var_19 = (max(var_19, (arr_0 [i_0] [i_0])));
                }
            }
        }
    }
    var_20 = 218;
    var_21 |= min(-6782, ((min(-67, var_2))));
    #pragma endscop
}
