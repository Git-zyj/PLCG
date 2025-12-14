/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240584
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240584 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240584
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = 4;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 13;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 13;i_4 += 1)
                        {
                            {
                                arr_13 [i_0] [12] [i_3] [i_3] [i_3] [i_4] = (min((!2147483647), ((((!var_10) ? var_5 : ((-105 ? var_7 : var_13)))))));
                                arr_14 [i_3] [i_3] [i_3] [i_3] [i_4] = ((((((3456445911856174641 ? -194497503 : 1) <= (!var_9))))));
                                arr_15 [i_0] [i_0] [i_3] [i_1] [i_2] [i_3] [i_3] = ((~((var_5 ? var_13 : var_14))));
                            }
                        }
                    }
                    arr_16 [10] [i_1] [i_1] [i_2] = 14842337711499762067;
                    arr_17 [i_0] [i_0] [i_0] [i_0] = (((((((var_11 ? var_9 : var_8))) ? 838027789 : (var_7 < 8)))) ? (((((var_3 ? 341763628 : 1)) == ((var_2 ? var_12 : var_13))))) : (~252));
                    var_17 = (-1 >= 255);
                    arr_18 [i_0] [i_1] [i_2] = (((((var_4 >= (var_15 % 251)))) << (((((~var_13) ? (var_1 ^ var_4) : (var_0 | var_6))) - 2996058652503469259))));
                }
                for (int i_5 = 0; i_5 < 13;i_5 += 1)
                {
                    var_18 = (!0);
                    var_19 += (!var_9);
                    var_20 = ((!((min((~8388607), ((var_14 ? var_6 : var_14)))))));
                }
                for (int i_6 = 0; i_6 < 13;i_6 += 1)
                {
                    arr_23 [i_6] [i_6] [i_1] [i_6] = (((var_5 != 12092) ? (min((var_11 >= var_15), (max(var_0, -1326024588)))) : (((((max(4, var_2))) ? ((62883 ? var_5 : var_14)) : (var_5 < 1))))));
                    var_21 = ((((((((max(var_8, var_15))) ? -194497497 : ((var_13 << (((-700347079 + 700347083) - 4)))))) + 2147483647)) >> (((((62883 | var_13) << (((var_3 - var_14) - 3555645256641395518)))) - 1335228300))));
                }
                var_22 = ((-((((var_3 ? var_2 : 3922916688546844749))))));
                arr_24 [i_0] = (((((min(-7, 26)))) * (26 / -1701164690313744896)));
            }
        }
    }
    #pragma endscop
}
