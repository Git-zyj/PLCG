/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2079
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2079 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2079
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    arr_7 [i_2] [8] [i_0] = (arr_0 [i_0] [i_0]);
                    var_17 = var_15;
                    arr_8 [i_0] [i_0] [i_2] = -110;
                    arr_9 [i_0] [3] [i_0] [1] = ((var_5 ? (min(((((arr_2 [i_2] [i_2] [i_2]) >= var_2))), 1346578677)) : (!-2948388619)));
                }
            }
        }
    }
    var_18 = (((-1276242175 + 2147483647) >> (((1346578677 / var_16) - 25086))));
    var_19 = (max((((-1276242187 + 2147483647) >> (2293187172 - 2293187147))), ((9223372036854775807 ? 0 : 110))));
    var_20 = ((9225779295887049143 ? var_14 : var_6));
    var_21 = ((!((min((var_10 < var_14), (max(var_8, 18010000462970880)))))));
    #pragma endscop
}
