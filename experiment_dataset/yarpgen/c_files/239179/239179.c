/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239179
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239179 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239179
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                arr_8 [i_0] [i_1] = (min(var_2, ((min(-5, 4)))));
                arr_9 [i_0] [i_0] = (min(((((arr_0 [i_0]) ? -5 : -1))), (min(((min(1, (arr_0 [6])))), (arr_4 [i_0] [i_1] [i_1])))));
            }
        }
    }
    var_15 = ((!(!-2147483646)));
    var_16 &= ((var_3 ? ((((var_10 || (((-2147483631 ? -20 : 1))))))) : var_0));
    var_17 = ((0 % (((((min(5, 2147483631))) ? var_7 : -31)))));
    var_18 = (((((var_0 ? var_11 : var_3))) ^ var_7));
    #pragma endscop
}
