/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203157
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203157 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203157
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_19 = ((~(~-4)));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 10;i_3 += 1)
                {
                    {
                        arr_12 [i_0] [i_0] [i_1] [i_2] [9] [i_3] = (arr_5 [i_3] [i_2]);
                        var_20 += (((((max(-47, 51)))) != (((arr_9 [i_3] [i_2] [i_1] [i_0]) ? 283947132 : (arr_9 [i_0] [i_1] [i_2] [1])))));
                        arr_13 [i_2] = (max((arr_1 [i_3]), ((3 * (2097024 || 3)))));
                    }
                }
            }
        }
        var_21 = ((~(arr_10 [i_0] [i_0] [i_0] [i_0])));
    }
    var_22 = (!3);
    #pragma endscop
}
