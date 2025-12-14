/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48538
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48538 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48538
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((0 ? ((((max(207643461, (-32767 - 1)))) ? (!var_7) : var_3)) : var_9));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {

                    for (int i_3 = 1; i_3 < 20;i_3 += 1)
                    {
                        arr_10 [i_2] [i_1] = ((((((max(var_1, (arr_3 [i_1] [i_2] [1])))) ? ((0 ? (arr_9 [i_2] [i_1 - 1] [i_2]) : var_1)) : (max((arr_5 [i_3 - 1] [i_2] [i_1] [2]), var_12)))) > ((-9218251612254466939 ? 18446744073709551615 : 3))));
                        var_15 = ((((((arr_9 [i_0] [i_0] [i_2]) % (arr_9 [14] [14] [i_2])))) ? ((~(arr_9 [i_2] [i_0] [i_2]))) : ((~(arr_9 [i_0] [i_0] [i_2])))));
                        var_16 &= ((15145138064810960343 || (arr_6 [i_0] [i_0] [i_0] [i_0])));
                    }
                    arr_11 [i_2] [i_1] [i_2] = (max((arr_9 [i_2] [i_1 + 3] [i_2]), ((min(var_3, (arr_4 [i_0] [i_0] [i_0] [i_2]))))));
                }
            }
        }
    }
    var_17 = (~var_10);
    #pragma endscop
}
