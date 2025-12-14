/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223884
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223884 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223884
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 20;i_2 += 1)
            {
                {
                    arr_6 [i_0] [4] = ((-((~(arr_4 [3] [i_2 - 2] [8] [i_2])))));
                    var_16 = (arr_5 [6]);
                }
            }
        }
        var_17 ^= ((-107 <= (max((arr_5 [i_0]), -96))));
    }
    var_18 = max(var_8, ((((min(3814422408393200101, 160))) ? (max(var_8, var_13)) : 1)));
    #pragma endscop
}
