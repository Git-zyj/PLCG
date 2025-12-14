/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27660
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27660 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27660
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = 945041969;
    var_21 = ((var_16 ? var_7 : var_1));
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    var_22 = (min((((arr_3 [i_1] [i_0 - 2]) ? (arr_3 [i_1] [i_0 + 2]) : var_19)), (arr_3 [i_1] [i_0 - 3])));
                    var_23 = max((min(var_10, 39270)), (var_9 == var_6));
                }
                var_24 *= (max(((((max(7109, (arr_4 [i_0 + 3] [i_0] [i_0])))) ? 28572 : (arr_6 [i_0 - 4] [i_0 - 4] [i_1 - 1]))), ((((((arr_5 [i_0] [i_0] [i_0] [i_0]) ? var_14 : var_19))) ? (32647 == 33027) : 49358))));
                var_25 = 22;
            }
        }
    }
    var_26 += 49900;
    var_27 *= var_9;
    #pragma endscop
}
