/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207742
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207742 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207742
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (max(var_19, (((!(((83 ? var_16 : var_3))))))));
    var_20 = ((var_1 ? -32765 : 127));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            {
                var_21 &= 187;
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        {
                            arr_9 [i_0] [i_1] [i_2] [i_1] = 1;
                            var_22 = ((((((max(1, 127))) ? (min(0, -4374538204466741617)) : 1))) ? (arr_2 [i_1]) : 4294967295);
                        }
                    }
                }
                arr_10 [i_1] [i_1] [i_1 + 1] = ((((min(2329, 2305842459457880064))) ? ((max(61686, (arr_5 [i_1 - 1] [i_1 + 1] [i_1 + 1])))) : 1));
                arr_11 [i_1] = (min((max((arr_7 [i_1] [i_1 - 1] [i_1 + 1] [i_1 - 1] [i_1]), 4294967270)), (((1 ? -44 : 2329)))));
            }
        }
    }
    var_23 = (-5316316486803194672 == 2425565250);
    var_24 *= 3330203343;
    #pragma endscop
}
