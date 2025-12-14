/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248819
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248819 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248819
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_17 = (max(-118, -22924608));
                arr_4 [i_1] = ((183 ? 74 : 5429201454135930742));
            }
        }
    }
    var_18 = 126;
    var_19 ^= ((((min(var_4, (1 - 95)))) ? (min(-3611229318530782975, 11484024073749680966)) : (max(var_15, (var_11 < var_9)))));
    var_20 = var_11;
    var_21 = (((((((-23751 ? -23750 : 3160030670))) ? var_13 : var_10))) ? (((var_8 & (min(12205, 3160030693))))) : 8195224255698994420);
    #pragma endscop
}
