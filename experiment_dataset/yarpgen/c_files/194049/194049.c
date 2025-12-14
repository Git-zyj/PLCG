/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194049
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194049 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194049
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 23;i_0 += 1)
    {
        var_17 = (arr_1 [i_0]);
        var_18 = ((((((arr_1 [i_0]) ? (arr_1 [i_0]) : (arr_1 [i_0])))) ? ((max(var_14, (arr_1 [i_0])))) : var_10));
        var_19 = 58493;
    }
    /* LoopNest 3 */
    for (int i_1 = 2; i_1 < 19;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 20;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 20;i_3 += 1)
            {
                {
                    var_20 |= (max(((var_16 ? var_5 : 0)), (((max(-32525, 7042))))));
                    var_21 = (min((max(7042, 7042)), 58493));
                    var_22 = 61458;
                }
            }
        }
    }
    var_23 = ((var_12 * (max(((var_7 ? var_3 : var_6)), -58493))));
    var_24 = var_1;
    #pragma endscop
}
