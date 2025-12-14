/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49514
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49514 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49514
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 10;i_2 += 1)
            {
                {
                    arr_7 [5] [i_2 - 2] [1] [5] = ((~(((arr_5 [i_0] [i_0] [3]) ? var_11 : (arr_5 [i_0] [i_1] [i_2 + 2])))));
                    arr_8 [1] [i_1] [8] = var_3;

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        var_12 = (arr_0 [i_0]);
                        var_13 = var_5;
                    }

                    for (int i_4 = 0; i_4 < 12;i_4 += 1)
                    {

                        for (int i_5 = 2; i_5 < 10;i_5 += 1)
                        {
                            var_14 = (((arr_13 [i_2 - 2] [i_2 + 1] [i_2 - 2]) ? ((var_7 ? (arr_9 [i_2] [i_2 - 2] [i_2 - 2] [i_2 - 2]) : var_2)) : (var_4 > 4294967295)));
                            var_15 = (min(var_15, (26900 - 24179)));
                            arr_18 [i_0] [i_0] [0] [i_0] [i_0] = (min((arr_16 [i_0] [4] [i_0] [i_0] [i_0] [i_0]), (((arr_10 [i_2 - 1] [i_2 - 1] [4] [i_2 + 2] [9] [i_2 + 2]) >> (arr_10 [i_2] [i_2] [i_2 - 2] [i_2 + 1] [i_2 - 1] [i_2 + 2])))));
                        }
                        for (int i_6 = 4; i_6 < 8;i_6 += 1)
                        {
                            var_16 = min((4294967265 < var_5), (min(var_8, -122)));
                            arr_21 [i_0] [i_0] [i_0] [10] [i_0] [1] &= (3094248791 ? 57 : 22511);
                            arr_22 [10] [4] [i_2 - 2] [i_2 - 2] = (3777322101265958762 ? 3777322101265958761 : 6);
                        }
                        /* vectorizable */
                        for (int i_7 = 4; i_7 < 11;i_7 += 1)
                        {
                            arr_27 [10] [i_1] [i_2] [10] [10] = -1580490650367216179;
                            var_17 = (((arr_17 [i_2 + 1] [i_4] [3] [i_7 - 4] [10]) ? (arr_6 [i_7 - 1] [i_7 - 3]) : (arr_17 [i_2 + 1] [i_4] [0] [i_7 + 1] [i_7])));
                            arr_28 [9] [11] [9] [i_7 - 1] [11] [i_4] = (((arr_2 [i_7 - 1]) ? 22511 : var_6));
                            var_18 = (min(var_18, (((1988804430 < 24520) ? (((var_10 ? var_3 : 94))) : 4263188315))));
                            var_19 = (arr_25 [i_7 - 1] [1] [i_2 + 2] [i_7 - 1]);
                        }
                        /* vectorizable */
                        for (int i_8 = 2; i_8 < 9;i_8 += 1)
                        {
                            var_20 = (((((65530 << (var_0 - 12873346124482207878)))) ? (arr_10 [i_0] [5] [i_2 + 1] [i_2 - 2] [i_2 + 1] [i_8 - 2]) : ((var_9 ? (arr_16 [0] [8] [i_2] [i_4] [5] [i_8 + 2]) : 3207491742))));
                            var_21 = -1405594347677750450;
                            var_22 = (max(var_22, ((((arr_3 [i_2 - 2] [8] [i_8 - 1]) * (arr_3 [i_2 - 1] [i_8] [i_8 - 1]))))));
                        }
                        var_23 *= (max(((max((min(var_1, var_5)), ((max(var_11, var_8)))))), (min((max(14669421972443592854, (arr_0 [1]))), var_0))));
                    }
                    arr_31 [5] = 110;
                }
            }
        }
    }
    var_24 = var_0;
    #pragma endscop
}
