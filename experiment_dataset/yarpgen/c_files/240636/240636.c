/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240636
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240636 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240636
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (min(var_20, ((((((-var_15 ? var_13 : 4691661659721287599))) ? 9067724706880732402 : ((max(var_1, var_1))))))));
    var_21 |= (min((!-4691661659721287599), 25));
    var_22 = var_6;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 9;i_2 += 1)
            {
                {
                    var_23 *= ((-((min((arr_7 [2] [2] [6]), 0)))));
                    var_24 = ((((max(var_19, -4691661659721287601))) ? ((max(98, -4691661659721287586))) : (((var_16 % ((((arr_3 [i_0] [i_0]) ? (arr_4 [i_2 - 2] [i_1] [i_0]) : (arr_3 [i_1] [i_1])))))))));
                }
            }
        }
    }
    var_25 = (max((((min(-1852, var_16)))), 2600659833));
    #pragma endscop
}
