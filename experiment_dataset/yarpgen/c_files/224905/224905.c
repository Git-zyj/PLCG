/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224905
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224905 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224905
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            {
                var_19 = (arr_4 [i_0] [i_0]);
                var_20 = var_18;
                var_21 = (((((var_15 ? ((16031920697508845152 ? (arr_2 [0] [i_1 - 1]) : 17293822569102704640)) : 1240023590))) ? (((!(arr_0 [i_0] [i_1 - 1])))) : ((((((3872295193 && (arr_2 [i_1] [i_0])))) < (max(-107068888, var_5)))))));
            }
        }
    }
    var_22 = ((((max(var_8, (-2147483647 - 1)))) | (((889005921 | var_18) ? (1415457764 != var_7) : ((var_10 ? 67108856 : var_1))))));
    #pragma endscop
}
