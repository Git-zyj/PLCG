/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249651
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249651 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249651
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_18 = ((-((+(((arr_1 [i_0]) ? 97 : (arr_2 [i_0])))))));
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    var_19 = ((1 % (((arr_4 [i_1 - 1] [i_1] [1]) ? (arr_4 [i_1 - 1] [9] [10]) : 33))));
                    var_20 *= (!(arr_3 [i_1 - 1] [i_1 - 1] [i_1 - 1]));
                }
            }
        }
        var_21 = (((((max(-35, 65535)) == 7953481009892309636)) ? ((((~var_11) * var_0))) : ((((-2961290672380762421 <= (arr_0 [13]))) ? ((-57 ? (arr_4 [8] [8] [i_0]) : var_17)) : (var_13 > 7953481009892309631)))));
    }
    for (int i_3 = 0; i_3 < 24;i_3 += 1)
    {
        var_22 = (max(((max(-35, (arr_7 [i_3] [i_3])))), (arr_10 [i_3])));
        var_23 = ((((((((arr_7 [i_3] [i_3]) || 1))) << (((arr_7 [i_3] [i_3]) % var_13)))) & (arr_10 [2])));
    }
    var_24 = ((((min(var_8, ((-50 ? -1606389363 : var_10))))) ? ((min((max(var_0, var_8)), var_0))) : var_3));

    for (int i_4 = 0; i_4 < 18;i_4 += 1)
    {
        var_25 = (max(((-723727737 ? -18518 : (arr_8 [i_4]))), 0));
        var_26 = (max(var_26, (((((min((arr_7 [i_4] [12]), ((3905438472804379967 ? (arr_12 [i_4]) : 41))))) ? ((((arr_8 [1]) ? ((34 ? (arr_7 [1] [1]) : (arr_7 [i_4] [i_4]))) : ((~(arr_9 [i_4])))))) : 2295713719)))));
        arr_13 [i_4] [i_4] = (((min(1855535974, -22)) >= (((((arr_10 [i_4]) <= var_13))))));
    }
    #pragma endscop
}
