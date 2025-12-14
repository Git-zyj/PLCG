/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212040
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212040 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212040
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 20;i_1 += 1)
        {
            {
                var_15 = (min(((((min(var_7, (arr_0 [i_0])))) ? (min((arr_1 [14] [i_1 - 1]), 3860892457141456254)) : (arr_3 [i_0] [i_0]))), (arr_2 [i_0])));
                var_16 = (17898143745850341238 != 18405842689933477652);
                var_17 += min((((!(arr_2 [i_1 + 1])))), 2836639994538760579);
            }
        }
    }
    var_18 = (max(var_18, ((((4067637510373853989 <= 15610104079170791037) ? ((-((var_1 ? var_2 : 4331410106801226115)))) : (var_1 && var_13))))));
    #pragma endscop
}
