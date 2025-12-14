/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227086
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227086 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227086
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 *= 0;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    var_21 = 4005110969;
                    arr_8 [i_2] [i_1] [i_2] [1] = min(((var_8 ? (arr_7 [i_1] [i_2] [i_2] [i_0]) : (min(0, (arr_4 [i_0] [i_1] [i_2]))))), var_8);
                    arr_9 [i_0] [i_0] [i_1] [i_2] = (arr_6 [i_1] [20] [i_1] [i_1 + 1]);
                    var_22 = ((min((arr_7 [i_2] [i_1 + 1] [i_0] [i_2]), (arr_7 [19] [i_1 + 1] [i_2] [i_0]))) >> ((((arr_1 [i_1] [i_1]) == (max((arr_6 [i_0] [i_1 + 1] [i_2] [i_0]), var_7))))));
                }
            }
        }
    }
    var_23 = ((-(max(6861073698938993357, -80189586813080510))));
    #pragma endscop
}
