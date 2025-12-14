/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222188
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222188 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222188
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_11;
    var_19 = var_9;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                var_20 ^= (min(((((arr_0 [i_0]) ? (arr_0 [i_0]) : (arr_2 [i_0])))), ((((((arr_1 [i_1] [i_0]) ? (arr_0 [i_0]) : (arr_2 [i_0])))) ? (((arr_4 [i_0] [i_1]) % (arr_4 [8] [8]))) : ((((!(arr_4 [i_1] [i_0])))))))));
                arr_5 [i_0] [i_0] [i_0] &= (((arr_0 [i_0]) * (((arr_3 [i_0] [18] [i_0]) * (((arr_1 [i_0] [i_0]) / (arr_0 [i_0])))))));
                var_21 = (((((((arr_3 [i_0] [i_0] [i_1]) >= (arr_1 [i_1] [i_0]))))) > (61750 % 2371725356125968359)));
                arr_6 [19] [i_1] [i_1] = (~1400764225);
            }
        }
    }
    #pragma endscop
}
