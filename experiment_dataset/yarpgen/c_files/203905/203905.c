/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203905
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203905 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203905
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = min((max((var_17 != var_9), (~var_15))), var_4);
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_1] [i_0] = ((+(((arr_1 [i_0 - 1] [i_1]) << (((arr_1 [i_0 + 1] [i_0 + 1]) - 205987826))))));
                arr_6 [i_0] [i_0] [i_0] = (((((30948 ? 188 : -111))) | ((max(var_11, ((((arr_4 [i_0 + 1] [i_1] [i_1]) <= 124))))))));
                arr_7 [i_0] = ((-(min(43095, (1 % -121)))));
                var_20 ^= (((arr_2 [i_0]) < (arr_1 [i_0 + 1] [i_0])));
                var_21 = (max(var_21, ((((((min((arr_3 [i_0] [i_1] [13]), (arr_1 [i_0 + 1] [i_0 + 1])))) ? -20 : ((max((arr_4 [i_1] [9] [i_0 + 1]), 20763)))))))));
            }
        }
    }

    for (int i_2 = 0; i_2 < 19;i_2 += 1)
    {
        var_22 = (max(var_22, (arr_8 [i_2])));
        var_23 += var_4;
        arr_12 [5] [5] = 99;
    }
    #pragma endscop
}
