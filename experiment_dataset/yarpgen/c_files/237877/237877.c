/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237877
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237877 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237877
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 -= ((((0 || (((2889885526 ? var_2 : 1))))) ? var_0 : var_10));

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_13 = ((max(((var_3 ? -31536 : var_2)), ((min((-2147483647 - 1), var_7))))));
        var_14 -= (((((-(arr_1 [i_0])))) ? (arr_2 [i_0] [i_0]) : ((min((arr_0 [i_0]), (arr_0 [i_0]))))));
        var_15 = (min((((1 != var_5) ? 1 : var_10)), (max(var_6, (((arr_1 [i_0]) ? 15 : var_1))))));
        var_16 -= 0;
    }
    for (int i_1 = 0; i_1 < 15;i_1 += 1)
    {
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 15;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 15;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 15;i_4 += 1)
                {
                    {
                        var_17 += ((!((!(arr_14 [i_1] [i_1] [i_1] [i_1] [i_1])))));
                        var_18 -= (min((arr_1 [i_1]), (arr_1 [i_1])));
                        var_19 = ((var_0 ? (33423360 | var_2) : ((((arr_13 [i_3] [i_4]) + ((((-32767 - 1) - var_4))))))));
                    }
                }
            }
        }
        var_20 = (var_2 ? (min(var_10, (min((arr_2 [1] [i_1]), 5)))) : (((var_4 ? -6 : ((min((-32767 - 1), var_9)))))));
        var_21 = var_7;
    }
    var_22 = (min(var_22, var_6));
    #pragma endscop
}
