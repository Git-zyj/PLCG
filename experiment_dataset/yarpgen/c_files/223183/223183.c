/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223183
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223183 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223183
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    var_17 *= (max(((10850 ? (arr_0 [i_2]) : (((arr_6 [i_0] [i_1]) ? (arr_6 [i_0] [i_1]) : var_2)))), (((((arr_2 [i_0] [i_0] [i_2]) ? 7525026365532196695 : (arr_0 [i_2]))) ^ (arr_4 [i_0] [i_1])))));
                    var_18 = (min(var_18, (((var_12 ? var_15 : (((~var_1) ? var_13 : (var_2 != 16))))))));
                    arr_8 [i_0] = 3521;
                    arr_9 [i_0] [i_1] [i_1] [i_0] = (((((var_13 & ((3531 ? 0 : var_6))))) ? (((((13878340773691368397 ? (arr_7 [i_0] [i_1] [i_0]) : 3530))) ? ((var_1 | (arr_6 [i_0] [i_0]))) : var_7)) : ((((((0 ? 1 : var_8))) ? (arr_7 [i_0] [i_0] [i_2]) : var_16)))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 17;i_4 += 1)
                        {
                            {
                                var_19 = (min(var_19, (max((((var_5 & ((max(var_7, 11931)))))), ((255 ? (-26 || 18446744073709551596) : (-9223372036854775807 - 1)))))));
                                arr_14 [i_0] [i_0] [i_2] [i_3] [i_2] [i_3] [i_0] = ((((max(1073741824, ((max(var_1, 3516)))))) ? 783832091 : 517443139719755281));
                                arr_15 [i_0] [i_0] [i_0] [i_0] [i_0] = var_2;
                            }
                        }
                    }
                }
            }
        }
    }
    var_20 = 4721082159870410694;
    var_21 = (max(var_21, var_16));
    #pragma endscop
}
