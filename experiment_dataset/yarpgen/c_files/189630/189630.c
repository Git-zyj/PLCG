/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189630
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189630 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189630
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                var_17 *= -103;
                var_18 *= (((((arr_0 [i_0 + 1]) + (arr_0 [i_0 + 2])))) ? 103 : -18446744073709551615);
                var_19 *= ((((((((-(arr_3 [i_0] [i_1] [i_1])))) ? (min(-119, var_9)) : (arr_0 [i_0 + 2])))) ? (arr_3 [i_0] [6] [i_1]) : ((((((-109 ? 0 : var_14)) <= (((max(118, (arr_1 [i_0 + 2])))))))))));
            }
        }
    }
    var_20 *= ((((max(((var_0 ? -22829 : var_16)), 120))) ? (((((var_0 ? var_2 : var_9))) ? var_16 : 18446744073709551615)) : -var_3));
    var_21 *= ((((((!(var_9 || var_5))))) > var_13));
    #pragma endscop
}
