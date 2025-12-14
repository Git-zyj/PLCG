/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211078
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211078 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211078
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (((5133479041552022454 ? var_11 : var_4)));
    var_15 = (max(var_15, var_13));
    var_16 -= var_5;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                var_17 = ((((((arr_2 [i_1]) ? var_9 : (arr_3 [i_0] [i_0] [i_1])))) > -8194676285346709415));
                var_18 = var_7;
                arr_5 [i_0] [i_0] [i_0] = ((((((var_1 - var_7) ? var_10 : (arr_1 [i_0])))) ? (arr_4 [i_0] [i_0]) : (((min(5133479041552022454, (arr_0 [i_0]))) - ((13313265032157529152 ? 1544710063985640073 : var_8))))));
            }
        }
    }
    #pragma endscop
}
