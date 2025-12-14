/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36432
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36432 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36432
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    arr_8 [i_1] [i_1] = var_0;
                    var_10 = (min(var_10, var_8));
                    arr_9 [i_1] = 5980;
                }
            }
        }
    }
    var_11 *= ((((max((max(var_9, var_7)), 10960189409502985121))) ? (max((2147483647 & 39195), (var_9 != var_4))) : var_4));
    var_12 |= var_3;
    #pragma endscop
}
