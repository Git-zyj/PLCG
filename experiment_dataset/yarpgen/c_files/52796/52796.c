/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52796
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52796 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52796
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max(((786418998 ? 9223372036854775783 : 678123842)), ((min(var_7, ((678123841 ? 678123841 : 3616843443)))))));
    var_14 &= var_2;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_15 = (min(((1096615776 ? var_2 : (arr_0 [i_0]))), (((var_4 - (678123841 && 678123852))))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 11;i_2 += 1)
            {
                {
                    arr_9 [i_0] [6] [i_2] = ((238 >> (3906374963 - 3906374940)));
                    arr_10 [i_2 - 1] [i_0] [i_0] = (1617400177 && -2583929871177682136);
                }
            }
        }
    }
    for (int i_3 = 1; i_3 < 11;i_3 += 1)
    {
        arr_14 [i_3 + 3] |= (min(((min((arr_13 [i_3 + 1] [i_3 + 3]), (arr_13 [i_3] [i_3 + 1])))), 453378871));
        arr_15 [i_3] [i_3 + 1] = (max((arr_11 [i_3 + 2] [i_3 + 2]), (~var_7)));
    }
    #pragma endscop
}
