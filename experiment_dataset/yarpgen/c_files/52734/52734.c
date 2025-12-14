/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52734
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52734 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52734
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_10 ^= (arr_2 [i_0]);
        /* LoopNest 3 */
        for (int i_1 = 4; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 20;i_3 += 1)
                {
                    {
                        var_11 = ((-1266116388 <= (max((arr_14 [i_3] [i_3]), (min(var_5, (arr_6 [i_0] [i_0])))))));
                        var_12 *= max(1, (~3896777190805623213));
                    }
                }
            }
        }
        arr_15 [16] = ((((-(arr_10 [i_0] [i_0] [i_0]))) / (arr_0 [i_0] [i_0])));
    }
    var_13 = var_4;
    #pragma endscop
}
