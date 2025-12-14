/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226640
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226640 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226640
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((((!var_4) || var_12)) ? (var_9 && var_9) : var_17);
    var_20 = var_8;
    var_21 = ((~((((min(var_9, var_5))) ? var_5 : (max(var_5, 1))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 8;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_1] = var_5;
                arr_5 [i_0] [i_0] &= var_9;
                arr_6 [i_0] [i_1] = (min(((((arr_0 [i_0] [i_1 - 1]) || var_15))), (((((-15 ? var_8 : (arr_3 [10] [10])))) ? (arr_2 [i_1 + 3]) : (max(var_2, 3255341159448235382))))));
                var_22 -= (((var_1 ? var_11 : 65535)));
            }
        }
    }
    #pragma endscop
}
