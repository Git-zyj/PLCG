/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230183
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230183 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230183
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (max((min(var_9, (max(9223372036854775806, 1)))), 2147483647));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            {
                var_20 -= ((((max(0, (arr_5 [i_0] [i_1 - 1])))) ? -0 : (((!(arr_6 [i_1 - 1] [i_1 + 2] [i_1 - 1]))))));
                var_21 *= ((-(min(1, var_9))));
            }
        }
    }
    var_22 = ((var_11 ? var_12 : (1 / 15)));
    var_23 *= var_15;
    var_24 += var_2;
    #pragma endscop
}
