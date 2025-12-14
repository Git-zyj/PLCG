/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28303
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28303 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28303
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_11 = ((~(max((arr_3 [i_1 - 2]), (arr_2 [i_1 - 1] [i_0 + 3])))));
                    var_12 = ((((1 * (arr_4 [i_1] [i_2])))) > (((!(arr_1 [i_0])))));
                }
            }
        }
        var_13 ^= arr_1 [2];
    }
    var_14 = var_0;
    #pragma endscop
}
