/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29414
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29414 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29414
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                arr_4 [13] [i_0] = (((arr_3 [i_0] [i_0] [i_0]) * 0));
                var_19 += 1;
            }
        }
    }
    var_20 += (min(((-(min(-8073008843288337868, 1)))), var_5));
    var_21 = ((((!(72057594037927936 && var_0))) ? ((((((var_9 ? var_1 : var_18))) ? var_9 : var_13))) : (max(((var_2 ? var_5 : var_3)), -1032558388))));
    var_22 = 1;
    #pragma endscop
}
