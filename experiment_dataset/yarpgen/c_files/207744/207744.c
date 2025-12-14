/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207744
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207744 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207744
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (max(var_19, ((98 ? ((((min(158, 97))) ? 36 : (((-2147483647 - 1) * 15001320372666710539)))) : var_10))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 19;i_2 += 1)
            {
                {
                    var_20 = (max(var_20, (((!((min((arr_5 [i_2 + 1] [i_0]), (arr_5 [i_2 - 1] [i_1])))))))));
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            {
                                arr_13 [i_4] [i_3 - 1] [i_2 - 2] [i_0] = (-(arr_7 [i_1] [i_2 + 1] [i_3 - 3] [i_4]));
                                var_21 = (max(var_21, ((!((min(var_12, (((!(arr_8 [i_1] [i_2 + 1] [i_3 - 2])))))))))));
                                arr_14 [i_0] [i_1] [i_2] [i_3 - 2] [i_0] [i_3 - 2] = ((var_17 ? (arr_7 [i_0] [i_0] [i_0] [i_0]) : ((18 << (~18446744073709551615)))));
                                arr_15 [i_4] = ((((-(((arr_9 [i_0] [i_1]) ? var_7 : 18446744073709551615)))) + (((var_18 ? (3633114744 && 103) : (~101))))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
