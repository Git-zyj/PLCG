/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215503
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215503 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215503
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            {
                var_19 = 994226612;
                arr_7 [i_0] = 0;
                var_20 = ((32388 ? (max((arr_6 [i_0 + 2]), (~1359623240344718380))) : (((((((-32767 - 1) ? (arr_4 [i_0]) : (-32767 - 1)))) ? (var_13 - var_18) : (((-32767 - 1) / -21297)))))));
                var_21 = (min(var_21, ((((((127473349425033950 ? -1865357562 : (!var_15)))) ? (max(127473349425033950, (((22198 ? 984939435 : 53))))) : var_10)))));
            }
        }
    }
    var_22 = ((((((1865357561 > var_12) ? 9708053056161913009 : var_13))) ? ((-39 ^ ((127473349425033947 ? 57347 : var_17)))) : (((((1865357561 - var_0) != ((1359623240344718390 ? 10817432717843856025 : 17454747090944))))))));
    var_23 = ((+(((2387808271789588990 & var_2) ? var_2 : var_10))));
    #pragma endscop
}
