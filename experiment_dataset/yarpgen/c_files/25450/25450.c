/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25450
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25450 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25450
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_2;

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        arr_2 [i_0] = (min(var_10, (((166 ? 149 : (max(var_15, 166)))))));
        arr_3 [i_0] = ((var_6 | ((((!(arr_1 [i_0]))) ? ((var_13 ? 97 : 15229344941266575189)) : (arr_0 [i_0] [i_0])))));
    }
    for (int i_1 = 0; i_1 < 19;i_1 += 1)
    {
        arr_6 [i_1] = (min(var_2, (((-(max(0, 161)))))));
        arr_7 [i_1] = ((86 ? 15229344941266575198 : -1840495196));
    }
    for (int i_2 = 0; i_2 < 13;i_2 += 1)
    {
        arr_10 [6] = ((148 == (!15229344941266575189)));
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 13;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 13;i_4 += 1)
            {
                {
                    var_17 = (max(2096640, ((min(((var_2 ? -752048062 : var_3)), 143)))));
                    var_18 = ((!(((var_5 ? -10 : ((2305843009213691904 ? var_12 : var_9)))))));
                }
            }
        }
        var_19 = (arr_11 [i_2] [9]);
        arr_17 [i_2] = max(((((133 + (arr_16 [i_2] [5] [i_2]))) ^ (arr_15 [i_2] [i_2] [i_2]))), (0 & 166));
        var_20 -= ((arr_0 [i_2] [i_2]) ? (((((52833 ? 7 : var_6))) ? (arr_4 [i_2]) : (var_14 > var_5))) : (!18));
    }
    var_21 ^= 94;
    #pragma endscop
}
