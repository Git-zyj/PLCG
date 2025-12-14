/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28113
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28113 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28113
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 6;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    var_20 = var_11;
                    arr_6 [i_0] = ((((((((224 ? 1 : 371667294))) ? (-2147483647 - 1) : -217718294))) ? ((((1586377244 >= (arr_4 [i_0 - 2] [i_0] [i_0] [i_0]))))) : (arr_0 [i_1 + 2] [i_0 - 2])));
                }
            }
        }
    }
    var_21 = (-2147483647 - 1);
    var_22 ^= ((((((~var_18) >> (2134422290 && 40)))) ? ((max(var_2, var_16))) : ((((var_2 < -25815) < (var_10 - var_1))))));
    #pragma endscop
}
