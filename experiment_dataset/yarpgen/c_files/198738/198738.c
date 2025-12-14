/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198738
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198738 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198738
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_1;
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                var_14 = (min(var_14, (-701629279 <= -701629279)));
                var_15 = (((arr_1 [i_0 + 2]) ? (arr_4 [1] [14]) : (((!(var_8 >= var_0))))));
                var_16 = (min(var_16, ((min((arr_1 [13]), (((((var_7 >> (-8062993482203551830 + 8062993482203551839)))) * (max((arr_1 [i_0]), 255)))))))));
                arr_5 [i_1] [i_0] = ((var_10 ? var_5 : ((((var_0 <= (arr_1 [i_0])))))));
            }
        }
    }
    var_17 += (max(-22170, 4294967295));
    #pragma endscop
}
