/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28244
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28244 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28244
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (((max(var_9, (min(var_4, var_3)))) == var_1));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 23;i_2 += 1)
            {
                {
                    arr_8 [i_1] [i_1] [i_2] [i_2] = (max((((((max((arr_2 [i_0]), (arr_1 [i_0]))))) | (arr_4 [i_0] [i_1 + 1] [i_2 - 2]))), (max((min((arr_4 [i_0] [i_1] [i_2 - 2]), (arr_4 [8] [i_1 + 1] [i_2]))), (min((arr_4 [20] [i_1 + 1] [20]), (arr_5 [i_1])))))));
                    arr_9 [i_0] [i_1] [i_1] [i_2 + 1] = (((((arr_0 [i_2 + 1]) + (arr_3 [i_2 - 1]))) / (((min(8, 11054))))));
                    arr_10 [i_0] [i_1] [i_1] [i_2] = (arr_1 [i_0]);
                    arr_11 [i_1] [i_1 - 1] [i_1] = (((23720 / -23721) / ((max((arr_1 [5]), (arr_7 [i_1] [i_1 - 1] [i_1 - 1] [i_2 - 2]))))));
                    var_11 = (min(((~(arr_4 [14] [i_1 - 1] [i_2 - 2]))), (arr_2 [i_1 - 1])));
                }
            }
        }
    }
    #pragma endscop
}
