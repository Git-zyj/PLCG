/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41760
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41760 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41760
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_15 ^= max(((min((max(32352, -1)), (min(-32352, (arr_1 [i_0])))))), (max((min(-32353, (arr_6 [i_0 - 1] [i_1] [i_1]))), ((min(32365, (arr_5 [i_1])))))));
                arr_7 [i_0] [i_1] [i_1] = (min((min((max(var_2, var_1)), ((min((arr_5 [i_0 - 1]), (arr_3 [i_0 - 1] [i_1] [i_1])))))), ((max((max(0, 29)), (min((arr_5 [i_0 - 1]), 29)))))));
                arr_8 [i_1] = min(((min(((max(0, (arr_5 [i_1])))), (min(30057, (arr_0 [i_0] [i_1])))))), (min((max((arr_0 [i_0 - 1] [i_1]), (arr_4 [i_0 - 1] [i_1] [i_1]))), (min((arr_6 [i_0 - 1] [i_0 - 1] [i_1]), (arr_5 [i_0 - 1]))))));
            }
        }
    }
    var_16 = min(((max((max(var_13, 1)), ((min(32, 4)))))), (min((min(var_9, var_4)), ((min(268402688, 209))))));
    #pragma endscop
}
