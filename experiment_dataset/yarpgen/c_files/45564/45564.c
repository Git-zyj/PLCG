/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45564
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45564 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45564
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = 65535;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 17;i_1 += 1)
        {
            {
                var_20 = (~var_14);
                arr_4 [i_0] [i_0] |= max((((!(arr_2 [i_1] [i_1] [i_1 + 1])))), -4115965890290442671);
                var_21 = (max(var_21, ((min(((min(((var_3 && (arr_3 [i_0] [i_0] [i_1]))), (493522324 <= 493522324)))), ((((var_15 + 2147483647) >> (var_10 - 30934)))))))));
            }
        }
    }
    var_22 = (min(var_3, (!var_16)));
    #pragma endscop
}
