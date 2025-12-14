/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238881
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238881 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238881
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (min(var_17, (((!(~-var_9))))));
    var_18 -= var_16;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 14;i_1 += 1)
        {
            {
                var_19 = arr_0 [i_0];
                var_20 |= (((arr_2 [i_0] [i_1 + 3]) ? (3624191592 % 1210790783) : (min(var_12, var_6))));
                var_21 = (max(var_21, (arr_1 [i_1])));
            }
        }
    }

    for (int i_2 = 2; i_2 < 14;i_2 += 1) /* same iter space */
    {
        var_22 = arr_5 [i_2 + 2];
        var_23 = ((1210790783 / (min((min(var_12, 4526256948330337552)), (((-1210790784 ? 237937556 : var_14)))))));
    }
    for (int i_3 = 2; i_3 < 14;i_3 += 1) /* same iter space */
    {
        var_24 = min(1210790783, 1488967257);
        var_25 = (max(1210790795, (arr_5 [i_3])));
        var_26 = (max(((-5762422960727340781 ? 1210790795 : 8)), (((!(var_11 > 8593720736543713878))))));
        var_27 = (min(var_27, ((max((((arr_7 [i_3 + 3]) | (var_8 % 12))), ((var_3 ? (arr_7 [i_3]) : (arr_6 [i_3 + 4]))))))));
        var_28 = 7119674591674976280;
    }
    for (int i_4 = 0; i_4 < 17;i_4 += 1)
    {
        var_29 = 1210790775;
        var_30 = arr_1 [i_4];
        var_31 = ((-1073741824 ? 12 : 1210790783));
        var_32 *= (arr_11 [i_4] [i_4]);
    }
    for (int i_5 = 0; i_5 < 14;i_5 += 1)
    {
        var_33 = ((arr_2 [i_5] [i_5]) ? ((min((arr_2 [i_5] [i_5]), 3716502490))) : var_6);
        var_34 = (min(var_34, (arr_13 [i_5] [i_5])));

        for (int i_6 = 0; i_6 < 14;i_6 += 1)
        {
            var_35 = (((((max(var_16, var_13)) > var_2))) << (((max(2536689388, 4294967283)) - 4294967256)));
            var_36 = (min(var_36, (min(35, (~1253849772)))));
        }
    }
    var_37 |= 3969428896;
    #pragma endscop
}
