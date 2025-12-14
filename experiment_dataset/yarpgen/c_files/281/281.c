/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 281
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=281 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/281
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((((((~107) - var_3))) ? var_0 : (var_2 && var_4)));
    var_12 = ((var_5 >> (var_9 + 13620)));
    var_13 = (-104 ^ 43438);
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    var_14 = ((~(arr_8 [i_0] [i_1] [i_2] [i_0 + 1])));
                    arr_10 [i_0] |= (arr_9 [i_1]);
                }
            }
        }
    }
    #pragma endscop
}
