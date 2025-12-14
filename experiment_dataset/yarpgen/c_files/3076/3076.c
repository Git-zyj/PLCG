/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3076
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3076 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3076
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (min(var_19, (var_9 % 245)));
    var_20 = ((-((var_1 ? -47 : var_9))));
    var_21 *= var_2;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    var_22 = (~(((!((max(1, 255)))))));
                    var_23 = ((min(4074364235, var_16)));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 4; i_4 < 20;i_4 += 1)
                        {
                            {
                                var_24 = (~var_7);
                                var_25 = (((((arr_9 [i_4 + 1]) ? (max(var_11, 220603082)) : (((220603059 ? (arr_6 [i_0] [i_0]) : (arr_2 [i_3] [i_4 - 3])))))) << (max((220603061 & 55296), 1))));
                                var_26 |= -1;
                                var_27 = ((-(((max(220603061, 220603061)) % (((253 ? var_3 : 63714)))))));
                                arr_13 [i_1] = (min(var_3, ((-(min(var_4, 12288))))));
                            }
                        }
                    }
                    var_28 = (max(var_28, var_11));
                }
            }
        }
    }
    var_29 = var_4;
    #pragma endscop
}
