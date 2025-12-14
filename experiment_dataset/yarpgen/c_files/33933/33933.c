/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33933
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33933 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33933
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 21;i_1 += 1)
        {
            {
                var_14 ^= (var_9 % var_7);
                var_15 = ((min((arr_2 [21] [6] [i_1]), var_3)));
                var_16 *= ((23 & (arr_2 [i_1 - 3] [1] [i_1])));
                var_17 -= (max(((~(arr_2 [18] [i_1 - 3] [i_1 + 1]))), (arr_2 [i_1] [i_1 + 1] [i_1 + 2])));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 2; i_2 < 21;i_2 += 1)
    {
        for (int i_3 = 2; i_3 < 22;i_3 += 1)
        {
            {
                var_18 = var_5;
                var_19 = (arr_7 [20] [i_2]);
                var_20 += (((0 ? -25182 : 11)));
            }
        }
    }
    var_21 *= (min((((-32 >= var_0) ? (var_9 & var_2) : ((min(var_12, -45))))), (min(((-48 ? var_6 : var_3)), var_12))));
    #pragma endscop
}
