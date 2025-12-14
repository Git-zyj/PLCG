/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190741
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190741 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190741
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_10;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                var_20 = -4733;
                var_21 = (((~((-5388 & (arr_0 [i_0]))))) == ((((((var_18 ? (arr_2 [i_1] [i_0]) : var_5))) ? ((-(arr_1 [i_1]))) : 8176))));
            }
        }
    }
    var_22 *= var_1;
    var_23 = ((var_9 || ((((-29962 ? var_14 : 13620506793373623597)) >= (!var_15)))));
    #pragma endscop
}
