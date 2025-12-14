/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218318
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218318 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218318
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 ^= (((((var_12 ? var_10 : 161812641))) ? (1 & 0) : ((min(1, 1)))));

    /* vectorizable */
    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        var_17 -= ((1 ? var_7 : 1));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_18 ^= 42967;
                    arr_9 [1] [i_1] [i_0] [i_2] = ((1 * ((52041 ? (arr_8 [10] [i_1] [i_0] [i_2]) : 1))));
                    var_19 ^= (var_8 >= var_7);
                    var_20 = ((-(arr_3 [i_0])));
                }
            }
        }
        var_21 += 1;
    }
    var_22 = min((((1 ? 0 : var_9))), var_7);
    #pragma endscop
}
