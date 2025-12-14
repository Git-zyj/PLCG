/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247698
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247698 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247698
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (max(var_14, (((var_13 ? var_7 : var_0)))));
    var_15 = 0;
    var_16 = ((var_5 ? ((((((var_12 ? var_5 : var_11)) <= var_11)))) : (((0 / 3864348378811047393) + ((6929515436933789225 ? var_6 : -3864348378811047393))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_17 = (((((!(arr_0 [i_0] [i_1])))) * ((((((arr_1 [i_0]) / (arr_3 [i_0] [i_1])))) ? var_11 : ((max((arr_4 [i_0]), var_5)))))));
                arr_5 [15] [i_1] [15] = 0;
                var_18 *= ((var_5 ? 74 : (min((arr_3 [i_0] [i_0]), 6))));
            }
        }
    }
    #pragma endscop
}
