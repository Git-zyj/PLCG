/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34581
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34581 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34581
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (max(var_10, (var_5 >> 0)));
    var_11 = ((((var_0 ? (!var_8) : ((var_6 ? var_4 : 985162418487296))))) ? var_7 : (((((65535 ? var_2 : 206)) > (0 && 65535)))));

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        arr_2 [i_0] = (((~var_5) - (!7283458497642040874)));
        var_12 = (3794555075682707924 - 0);
    }
    /* LoopNest 3 */
    for (int i_1 = 0; i_1 < 22;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 22;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 22;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 22;i_5 += 1)
                        {
                            {
                                arr_17 [i_1] [i_1] [i_2] [i_2] [i_2] = ((((var_9 - (arr_14 [i_1] [i_2] [i_3] [i_2]))) > (~var_1)));
                                arr_18 [i_1] [i_2] [i_1] [i_2] [i_1] [i_1] = (max((((47996 ? (arr_7 [i_2] [i_2] [i_2]) : var_6))), (((((max(var_9, 0)))) * (arr_5 [i_1] [i_2] [8])))));
                            }
                        }
                    }
                    var_13 = (((((((1626648681 ? var_2 : var_1)) > var_8))) + ((min((var_4 > 1), var_8)))));
                    /* LoopNest 2 */
                    for (int i_6 = 2; i_6 < 20;i_6 += 1)
                    {
                        for (int i_7 = 2; i_7 < 21;i_7 += 1)
                        {
                            {
                                arr_26 [i_1] [i_2] [i_1] [i_6] [i_7] [i_6] [i_6] = max((min(18446744073709551615, 1)), ((((arr_25 [i_6] [i_6] [i_6] [i_2]) - -2579))));
                                var_14 = (max(var_14, ((((max(var_1, (arr_7 [i_7] [i_3] [i_7])))) > (var_7 && 1)))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
