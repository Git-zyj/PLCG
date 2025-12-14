/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215394
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215394 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215394
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                var_19 = (max((!8157829704064528880), ((((arr_3 [i_1] [i_1] [i_0]) ? var_18 : (arr_1 [i_0]))))));

                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    var_20 *= 3803283250;
                    var_21 = (max(var_21, (!var_0)));
                }
                var_22 = (min(var_22, var_2));
            }
        }
    }
    var_23 = (max(var_23, var_12));
    #pragma endscop
}
