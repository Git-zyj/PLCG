/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215217
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215217 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215217
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 13;i_2 += 1)
            {
                {
                    var_18 += (-127 - 1);
                    arr_6 [i_1] [i_1] [i_1] = ((((min((arr_4 [i_2 + 1] [i_2 + 3] [i_2] [i_2 + 3]), (arr_4 [i_2 + 3] [i_2 + 3] [i_2] [i_2 + 2])))) ? (arr_0 [i_0]) : ((-(min(-8059137762366759963, (arr_2 [i_0] [i_1])))))));
                    var_19 = (max(var_19, (((((max((arr_5 [i_2 + 2] [i_2 + 4] [2]), var_17))) ? (arr_5 [i_2 + 4] [i_2 + 1] [14]) : (((!(arr_5 [i_2 + 2] [i_2 + 1] [2])))))))));
                }
            }
        }
    }

    for (int i_3 = 0; i_3 < 12;i_3 += 1)
    {
        arr_9 [i_3] [i_3] = ((var_15 / (((((((arr_0 [i_3]) - (arr_5 [i_3] [i_3] [i_3])))) ? var_16 : (arr_0 [i_3]))))));
        arr_10 [i_3] = (max((arr_3 [i_3] [i_3]), ((var_1 / (arr_7 [i_3])))));
    }
    var_20 = 1389996474;
    var_21 ^= var_12;
    var_22 = var_0;
    #pragma endscop
}
