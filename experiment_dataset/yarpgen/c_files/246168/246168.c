/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246168
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246168 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246168
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 16;i_2 += 1)
            {
                {
                    var_12 = ((((max(var_1, -1))) & 1));
                    arr_8 [i_0] [i_1] [i_2] [i_0] = 2574213478;
                }
            }
        }
    }
    var_13 = max((max(((max(var_3, var_1))), ((var_8 ? var_5 : 16450437764918266474)))), -var_9);
    var_14 = (~248);
    var_15 = (min(var_15, var_10));

    for (int i_3 = 2; i_3 < 21;i_3 += 1)
    {
        /* LoopNest 3 */
        for (int i_4 = 0; i_4 < 22;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 1;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 22;i_6 += 1)
                {
                    {
                        var_16 += 18;
                        var_17 = (((((4355 ? var_6 : 2312313548))) >= ((var_11 ? ((((arr_9 [i_3]) ? 4294967295 : (arr_13 [i_4] [i_3] [i_6])))) : (max(var_4, 61180))))));
                    }
                }
            }
        }
        arr_17 [8] &= (min((max((arr_10 [i_3] [i_3]), 61169)), ((var_0 ? var_4 : (arr_11 [i_3 + 1] [i_3 - 2] [i_3 + 1])))));
    }
    #pragma endscop
}
