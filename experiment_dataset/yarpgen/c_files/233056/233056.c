/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233056
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233056 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233056
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    var_16 = (max(var_16, ((max((min(((min(var_2, 397231688))), (min(3417857760500017098, var_12)))), ((min((max((arr_3 [i_0 - 1] [i_1]), var_14)), ((min((arr_4 [i_0] [6] [i_0]), (arr_2 [i_0] [i_1] [i_2]))))))))))));
                    var_17 = (min(((min((min((arr_4 [0] [i_1] [i_0]), (arr_0 [i_0 - 1]))), ((max((arr_2 [i_0 - 2] [1] [i_0 - 2]), (arr_4 [10] [1] [1]))))))), (max(((min(11944, (arr_3 [i_0] [6])))), (max(var_1, var_8))))));
                }
            }
        }
    }
    var_18 = (max((max(((min(var_3, var_12))), (min(-11944, var_14)))), (max(((max(1, var_3))), (min(var_14, var_0))))));
    #pragma endscop
}
