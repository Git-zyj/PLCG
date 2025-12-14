/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54067
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54067 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54067
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = 126;
    var_18 = (max(var_18, 161));
    var_19 = (((max(var_13, (max(126, var_3))))) | (max(var_10, ((var_7 ? 161 : 0)))));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    arr_10 [i_0] [i_0] [10] [i_2] = (((max(-6538665604056540294, 1)) + -1));

                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        arr_13 [i_0] [i_3] [i_2] [i_3] = (((((var_10 % (max((arr_2 [i_1]), (arr_6 [i_0 + 1] [i_1])))))) ? ((((((arr_3 [i_2]) ? 3079623730 : var_6))) ? (((arr_0 [i_0]) ? (arr_3 [i_2]) : var_10)) : (arr_12 [i_3]))) : ((max((arr_4 [i_0 - 1]), (!var_15))))));
                        var_20 = (min(var_20, (arr_7 [i_0] [i_1] [i_2] [i_3])));
                    }
                    var_21 = (arr_0 [i_0]);
                }
                var_22 = (min(var_10, (((!((min(0, (arr_12 [i_1])))))))));
            }
        }
    }
    var_23 ^= (var_3 + var_15);
    #pragma endscop
}
