/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213689
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213689 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213689
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_14 |= (min(((max((min((arr_2 [i_1]), (arr_5 [i_0 - 1] [11] [i_1]))), (max(15975, (arr_5 [6] [14] [12])))))), (max(((max((arr_5 [i_0] [i_1] [i_1]), (arr_3 [i_1])))), (min((arr_5 [i_1] [i_0] [i_0]), 730586717456896666))))));
                arr_6 [i_1] = (max((max((max(var_9, 22244)), (max(18446744073709551615, (arr_2 [8]))))), (min(((max((arr_4 [16] [16]), var_5))), (max(var_13, (arr_1 [i_0])))))));
            }
        }
    }
    var_15 = (max((max((max(var_12, var_10)), (max(var_12, var_0)))), (max((max(var_13, 730586717456896666)), (max(-730586717456896666, -121))))));
    var_16 = (max(((max(((min(var_6, -1599871302))), (max(var_12, -15987))))), (max((min(var_13, var_9)), ((max(730586717456896666, 16003)))))));
    #pragma endscop
}
