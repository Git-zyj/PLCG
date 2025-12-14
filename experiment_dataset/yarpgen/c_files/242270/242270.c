/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242270
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242270 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242270
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 |= ((((((var_13 ? var_1 : var_7)) ^ ((var_17 ? var_5 : var_11))))));
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    var_20 = (min(var_20, 1972958404345407727));
                    var_21 ^= ((((~(((var_2 <= (arr_0 [i_2]))))))) ? ((((min(1542624001615357670, 6882))) ? ((var_15 ? (arr_4 [i_2] [i_1]) : var_9)) : (arr_6 [1] [i_1] [1]))) : var_0);
                }
            }
        }
    }
    var_22 |= var_6;
    #pragma endscop
}
