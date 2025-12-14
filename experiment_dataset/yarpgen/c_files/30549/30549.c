/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30549
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30549 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30549
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 -= var_1;
    var_19 = var_7;
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                var_20 = (max(var_20, (((~(((((min(var_14, 5479320204044159258))) && (arr_2 [i_0] [i_0] [i_1])))))))));
                var_21 = (((max((arr_2 [i_1] [i_1] [5]), 12)) < ((min(22, ((~(arr_2 [10] [i_1] [i_0 + 3]))))))));
                arr_5 [i_0] [i_0] [i_0] = ((~(min(22, -5393797237989325383))));
            }
        }
    }
    var_22 = (min(var_22, ((((((!(var_6 >= var_8)))) > (~var_15))))));
    #pragma endscop
}
