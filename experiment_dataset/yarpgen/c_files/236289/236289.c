/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236289
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236289 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236289
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((-(((!(((var_6 ? var_15 : var_6))))))));
    var_21 = var_12;
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 7;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 7;i_2 += 1)
            {
                {
                    var_22 = (~(arr_1 [i_2 + 2]));
                    var_23 = -993778593650586492;
                    var_24 = 993778593650586509;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 10;i_4 += 1)
                        {
                            {
                                var_25 = (max(var_25, (((max((((-4188556688837373408 ? var_2 : var_7)), (((arr_5 [3] [i_1] [1] [i_3]) ? var_19 : (arr_14 [i_0] [i_0]))))))))));
                                arr_15 [i_0 + 2] [i_0] [i_2] [i_0 + 2] [1] = (-4188556688837373432 ^ 1);
                                var_26 = (((!(arr_12 [i_0 - 1] [i_1] [i_2 + 1] [i_3] [i_4]))));
                                var_27 = 1;
                                arr_16 [i_0] [i_3] [i_0] [0] [i_0] [i_0] [i_0] = -993778593650586531;
                            }
                        }
                    }
                    var_28 = (max(var_28, (arr_0 [i_1] [i_2])));
                }
            }
        }
    }
    var_29 = ((var_18 ? ((var_19 ? var_13 : var_13)) : var_17));
    var_30 = var_15;
    #pragma endscop
}
