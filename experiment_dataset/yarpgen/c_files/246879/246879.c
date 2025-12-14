/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246879
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246879 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246879
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 *= var_8;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 16;i_1 += 1)
        {
            {
                var_12 = (min(((!(arr_0 [i_1 - 2]))), ((35836 <= (arr_0 [i_1 - 3])))));
                var_13 = var_2;
                var_14 = var_7;
                var_15 = (max(var_15, (((((arr_2 [12] [i_1 - 1]) * (arr_5 [i_1 + 1] [10]))) * -6225407345309208102))));
                var_16 = (min(var_16, ((((~35836) - (arr_0 [i_1]))))));
            }
        }
    }
    var_17 = ((((!var_9) < (var_2 - var_0))));
    var_18 &= (((((35836 ? 65535 : var_5)))) ? (!var_4) : (max(((var_7 ? 121 : -235712793)), -18018)));
    #pragma endscop
}
