/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38620
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38620 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38620
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_2;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 20;i_2 += 1)
            {
                {
                    var_11 ^= (((((arr_5 [0] [8] [i_1 + 1] [i_1 + 1]) / (arr_0 [i_2 + 1]))) * (arr_5 [20] [i_0] [i_0] [i_2 - 4])));
                    var_12 |= ((max(-102, -61)));
                    arr_7 [i_1] [i_1] [19] = ((~(arr_5 [i_1] [i_1 + 1] [i_1 - 1] [i_1 - 1])));
                }
            }
        }
    }
    var_13 = (min(var_13, var_6));
    #pragma endscop
}
