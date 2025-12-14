/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228560
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228560 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228560
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_2;
    var_11 = (min((!3404550156), var_9));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    arr_10 [i_0] [i_0] = (min((-1 % 3404550153), ((((41 + 97) != (4 >= 20712))))));
                    arr_11 [i_0] [i_0] = (((((~(arr_8 [i_0] [i_1] [i_0] [i_0])))) ^ (arr_6 [i_0] [i_0] [i_0])));
                }
            }
        }
    }
    #pragma endscop
}
