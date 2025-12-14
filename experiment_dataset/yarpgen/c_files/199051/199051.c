/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199051
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199051 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199051
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (min(((((min(var_13, var_10))))), ((~(min(31204, var_14))))));
    var_16 ^= max(((max(((max(var_4, var_6))), (max(253, var_11))))), (max((max(var_14, var_10)), (!var_4))));
    var_17 = (min((min(var_1, (~-354188247679254489))), ((((max(var_10, 15)))))));
    var_18 = (max(var_18, ((min(1, (!var_1))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_0] [i_0] = max((+-31217), (min((~1183950346388306494), (max(var_9, (arr_3 [i_0] [i_1] [i_2]))))));
                    var_19 = (min((((!((max(var_12, var_13)))))), (max((((~(arr_5 [i_2] [i_1] [i_0])))), (min(58790, 0))))));
                    arr_9 [i_0] [i_0] [i_2] = (min(((max(0, (!-112)))), (min((arr_1 [i_2]), (((!(arr_6 [i_0] [i_1] [i_2] [i_2]))))))));
                }
            }
        }
    }
    #pragma endscop
}
