/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46079
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46079 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46079
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (max(var_19, (((var_11 ? var_14 : var_7)))));
    var_20 = var_9;
    var_21 = var_11;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 21;i_1 += 1)
        {
            {
                var_22 = 0;
                arr_6 [i_0] [i_1] = var_13;

                for (int i_2 = 0; i_2 < 23;i_2 += 1) /* same iter space */
                {
                    arr_10 [i_0 + 1] [20] [20] [i_0 + 1] = 0;
                    arr_11 [i_0] [i_2] [i_2] [i_0 - 1] = ((~(max((arr_9 [i_0] [i_0 + 1] [i_2]), var_12))));
                    var_23 = (arr_2 [i_0] [i_2]);
                    arr_12 [i_0 + 1] [i_1 + 2] [i_2] [i_0 + 1] = -1;
                }
                for (int i_3 = 0; i_3 < 23;i_3 += 1) /* same iter space */
                {
                    var_24 += ((((max(-0, (arr_1 [i_1 - 1])))) ? (((((arr_13 [i_3] [2]) >= (arr_4 [i_0] [i_0 - 1] [i_0 + 1]))) ? (~48) : 1199)) : var_6));
                    var_25 = -2040808893795888699;
                }
                for (int i_4 = 4; i_4 < 21;i_4 += 1)
                {
                    var_26 = (var_4 == ((((min(var_7, 4294967295))) ? (max(var_12, 2630642638)) : (((var_14 ? (arr_0 [i_4 + 1]) : var_1))))));
                    var_27 = ((-(((var_15 <= ((1876266886 ? 7055708028190342395 : 1)))))));

                    for (int i_5 = 0; i_5 < 23;i_5 += 1)
                    {
                        var_28 = ((((min((arr_17 [i_4 - 4] [i_1 + 2]), (arr_17 [i_4 - 4] [i_1 - 2])))) ? (((arr_17 [i_4 + 2] [i_1 - 1]) ? (arr_17 [i_4 - 3] [i_1 - 2]) : (arr_17 [i_4 - 3] [i_1 - 1]))) : ((1 + (arr_17 [i_4 - 1] [i_1 + 1])))));
                        arr_21 [i_4] [i_4] [i_4] = (((((((1876266886 ? 155 : 17))) ? (arr_13 [i_4 + 1] [i_0 - 1]) : (max(var_13, 50498929)))) <= ((((var_0 && var_2) ? (!var_3) : (arr_0 [i_0]))))));
                        var_29 = var_8;
                        arr_22 [i_4] [i_4] = (((arr_17 [i_0 - 1] [9]) * (arr_9 [19] [i_0 - 1] [i_0 - 1])));
                    }
                    /* vectorizable */
                    for (int i_6 = 0; i_6 < 23;i_6 += 1)
                    {
                        var_30 = (max(var_30, -var_0));
                        var_31 = ((var_1 ? ((2147483647 ? var_10 : var_13)) : var_4));
                        var_32 = -27;
                    }
                }
            }
        }
    }
    #pragma endscop
}
