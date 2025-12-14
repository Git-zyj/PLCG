/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199333
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199333 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199333
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_7;
    var_20 -= ((((((~3477) ? var_0 : ((62082 ? var_9 : var_5))))) ? (((min(var_12, var_11)))) : var_10));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {

                for (int i_2 = 1; i_2 < 1;i_2 += 1)
                {
                    var_21 = (arr_9 [7] [i_2] [i_2 - 1] [7]);
                    var_22 = (max(var_22, ((min(((((var_1 - 3477) < ((-9223372036854775799 ? (arr_3 [i_2]) : (arr_4 [i_0 - 2] [i_2 - 1])))))), (((((18446744073709551615 ? var_9 : 3492))) % (arr_7 [i_0 - 1] [i_0 - 1] [i_0 - 1] [2]))))))));

                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {

                        for (int i_4 = 0; i_4 < 10;i_4 += 1)
                        {
                            var_23 = var_8;
                            var_24 = (max((((arr_6 [i_0 + 1] [i_0 - 1]) ? 3477 : var_6)), (((36729 < (arr_8 [i_0 - 1] [i_0 + 1] [i_0 - 1]))))));
                        }
                        for (int i_5 = 0; i_5 < 10;i_5 += 1)
                        {
                            var_25 = (min(var_25, (((((((var_18 ? var_10 : (arr_0 [i_0] [i_1]))) << ((((min(var_10, var_3))) - 2945)))) & ((((arr_0 [i_2 - 1] [i_0 + 1]) <= ((var_2 ? (arr_11 [i_0] [i_1] [i_2] [i_3]) : (arr_10 [i_0] [i_3] [i_0 - 1] [i_0 + 1])))))))))));
                            var_26 = ((((arr_15 [i_2] [i_1] [i_1] [i_1] [i_1] [i_1] [3]) >> (var_6 + 3814076680546427163))));
                            var_27 = ((((var_0 < var_15) > (max(var_2, (arr_10 [i_0] [i_2] [i_3] [i_5]))))));
                            var_28 = ((-(arr_16 [i_5] [i_5] [i_5] [i_5] [i_5])));
                            var_29 = 15985262776640031382;
                        }
                        var_30 = ((((max(((18 ? 4223747293 : var_16)), (var_18 < 13)))) ? (arr_2 [i_2]) : (arr_0 [i_0] [i_0])));
                        var_31 = ((65533 ? (max(13436564073100426190, (arr_11 [i_2] [i_2] [i_2 - 1] [i_2 - 1]))) : ((((arr_2 [i_0 - 2]) / ((min(2, var_10))))))));
                    }
                    for (int i_6 = 0; i_6 < 10;i_6 += 1)
                    {
                        var_32 = 3;
                        var_33 = (min(var_33, ((((((((var_17 << (62043 - 62043)))) ? (min(18, var_7)) : ((max(var_2, (arr_8 [i_0] [i_1] [2])))))) & ((((var_9 > var_10) ? var_16 : var_5))))))));
                    }
                }
                var_34 |= var_9;
            }
        }
    }
    #pragma endscop
}
