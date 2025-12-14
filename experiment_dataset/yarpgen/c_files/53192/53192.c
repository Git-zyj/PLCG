/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53192
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53192 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53192
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_16 = ((+((2082825601 ? (-2147483647 - 1) : (((10865 < (arr_0 [i_0]))))))));
        var_17 = -982260061;
        var_18 = (var_14 + var_13);
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 22;i_3 += 1)
                {
                    {
                        var_19 = ((var_10 ? (((arr_8 [i_1 + 1] [i_1] [i_1] [i_1 - 1] [i_1 - 1]) / (arr_8 [i_1] [i_1] [i_1] [i_1] [i_1 - 1]))) : (arr_6 [i_0] [i_0])));
                        var_20 = (((((-(arr_3 [i_1] [i_1 - 1] [i_1])))) ? (((arr_3 [i_1] [i_1 + 2] [i_1]) ? var_3 : var_0)) : (arr_3 [i_1] [i_1 + 1] [i_1])));
                        arr_10 [i_0] [i_1 - 1] [i_1] [i_3] [i_1 - 1] = (((((arr_2 [i_1]) ? 432812221 : 18446744073709551589))));
                        arr_11 [i_3] [i_0] [i_1] [i_0] [i_0] &= (((((~(arr_6 [i_1 - 1] [i_1 + 2])))) ? (2851659302 % -1357111688) : 1));
                    }
                }
            }
        }
    }
    var_21 &= 245;
    var_22 = ((-4294967289 || ((((var_13 == var_3) ? var_13 : var_5)))));
    var_23 &= (((var_12 ? (~var_11) : 7552)));
    #pragma endscop
}
