/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216710
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216710 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216710
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = min(((max(var_6, var_1))), (max(-var_17, ((max(var_3, var_6))))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 13;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        {
                            var_20 = (((arr_0 [i_0 + 1]) ? (((((arr_5 [i_2] [i_2 - 1] [i_0 + 1] [12]) != var_1)))) : ((-5895002728746626324 % (-2147483647 - 1)))));
                            var_21 = (((34766 - 58275) ? ((min((arr_9 [i_0 + 1] [i_0 + 1]), (arr_8 [i_0 - 2] [8] [i_0 - 2] [i_0 - 2] [i_0 - 2] [i_0 - 1])))) : ((-(3090894347 + 57344)))));
                        }
                    }
                }
                arr_10 [3] [3] [3] = ((((((-130409901499557644 ? (arr_8 [1] [13] [i_0] [i_1] [i_1 - 1] [0]) : var_16))) ? 268435456 : (max((arr_3 [i_0] [i_1 - 1] [i_0]), (arr_7 [i_1] [i_0 - 1]))))));
                var_22 = (max(var_22, (arr_5 [i_1] [i_1 + 1] [11] [i_0 - 2])));
            }
        }
    }
    var_23 = var_3;
    #pragma endscop
}
