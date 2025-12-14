/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46277
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46277 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46277
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_3;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_15 = ((242561824 ? -11516 : 6));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_16 ^= (((0 >> 1) >> (((min((arr_4 [i_0] [i_1] [i_1]), (arr_4 [12] [i_1] [i_2]))) - 7062974706374895015))));
                    arr_8 [i_0] [i_1] [i_0] = ((0 ? 210 : 11));
                }
            }
        }
        var_17 = (min(var_17, (((((((((23520 ? var_2 : (arr_1 [i_0])))) ? var_5 : ((((arr_7 [0] [12] [0] [i_0]) < (arr_6 [2] [4] [i_0] [i_0]))))))) ? ((~(arr_0 [2] [i_0]))) : (0 > -1793867748))))));
        arr_9 [i_0] = ((((((arr_0 [i_0] [0]) ? (arr_5 [i_0] [i_0] [i_0] [i_0]) : (((arr_3 [i_0] [i_0]) ? 120 : (arr_2 [i_0] [i_0] [3])))))) / (min((arr_7 [i_0] [i_0] [i_0] [i_0]), (arr_2 [i_0] [i_0] [i_0])))));
    }
    var_18 = 768;
    var_19 = (((var_7 != var_4) ? (min((max(-7217074847350624188, var_1)), var_6)) : var_4));
    #pragma endscop
}
