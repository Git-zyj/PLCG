/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43044
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43044 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43044
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((((var_9 && ((min(4605778105684640779, var_1))))) ? -6522708817520435993 : var_1));

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 23;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 23;i_3 += 1)
                {
                    {
                        var_14 |= ((((((max((arr_3 [i_0] [1] [i_0]), var_5))) || 6522708817520435992)) ? ((min(3107748793, (min(var_8, 1464272392))))) : ((min(9223372036854775807, var_10)))));
                        var_15 = ((248290053 < ((((1 && (((var_5 ? -6522708817520435993 : (arr_3 [i_3] [i_2 - 1] [i_1 - 1]))))))))));
                        var_16 = ((-((((min((arr_0 [i_0] [i_3 + 1]), (arr_7 [i_0] [i_0] [i_2])))) ? (((arr_4 [i_0] [i_0]) | -16)) : (((var_0 || (arr_0 [i_1] [i_1]))))))));
                    }
                }
            }
        }
        var_17 = 23291;
        var_18 = (max((((arr_10 [i_0] [i_0] [i_0] [i_0]) ? (arr_10 [16] [i_0] [i_0] [i_0]) : (arr_10 [i_0] [i_0] [i_0] [18]))), (arr_10 [i_0] [i_0] [i_0] [i_0])));
        arr_11 [i_0] = arr_0 [i_0] [i_0];
        var_19 &= var_12;
    }
    var_20 = (max(var_3, (max((~var_6), ((var_3 ? 1 : var_10))))));
    var_21 = var_12;
    var_22 = (((((-49113 ? (max(var_4, var_2)) : 17510))) ? var_0 : var_8));
    #pragma endscop
}
