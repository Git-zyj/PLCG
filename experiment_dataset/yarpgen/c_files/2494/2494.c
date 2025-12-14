/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2494
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2494 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2494
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 11;i_2 += 1)
            {
                {
                    var_15 ^= ((!(var_3 / var_4)));
                    var_16 = (min(var_16, var_5));
                    var_17 += (((min(-4503599627370495, var_2)) >= var_0));
                }
            }
        }
        arr_7 [i_0] = (((~196) ? (arr_2 [3]) : ((-18446744073709551601 ? ((var_10 ? var_4 : 16338334290558452463)) : (((var_13 ? var_12 : var_0)))))));
        var_18 = (!((var_1 || (arr_6 [12] [i_0] [i_0]))));
    }
    var_19 |= (((~184) ? ((var_3 ? (((max(var_7, 0)))) : 103)) : var_3));
    var_20 = (~var_11);
    var_21 = var_1;
    #pragma endscop
}
