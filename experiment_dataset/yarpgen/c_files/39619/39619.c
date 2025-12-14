/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39619
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39619 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39619
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = 5;
    var_19 = ((((max(0, 1) ? -20254 : 0))));

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = (~8279966670836924282);
        var_20 &= ((~(arr_2 [i_0])));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 15;i_4 += 1)
                        {
                            {
                                arr_12 [i_0] [i_1] [i_2] [i_2] [i_3] [i_4] = (((arr_2 [i_3]) ? (arr_0 [i_0]) : (45284 / 32755)));
                                var_21 -= ((~(arr_2 [i_0])));
                                arr_13 [i_0] = ((3215352641 ? ((min((!1), (min(10951, 59))))) : 2033248153));
                            }
                        }
                    }
                    var_22 |= -39;

                    for (int i_5 = 0; i_5 < 15;i_5 += 1)
                    {
                        var_23 = ((((((((8279966670836924288 ? var_4 : var_15))) ? (arr_10 [i_0]) : var_17))) ? -105 : (((16384 / (arr_1 [i_0]))))));

                        for (int i_6 = 0; i_6 < 15;i_6 += 1)
                        {
                            var_24 = (arr_10 [i_0]);
                            var_25 = ((!(((arr_6 [i_6] [i_2] [i_1]) && (arr_4 [i_5])))));
                            arr_22 [i_0] [i_0] [i_0] [i_0] [i_6] [i_0] = ((((((arr_2 [i_5]) != (arr_2 [i_6])))) <= ((max((arr_19 [i_0] [i_0] [i_0] [i_0] [0]), var_4)))));
                        }
                        for (int i_7 = 1; i_7 < 1;i_7 += 1)
                        {
                            arr_26 [i_0] [i_1] [i_2] [i_5] [i_7] = ((~((~(arr_9 [i_7 - 1] [i_7 - 1] [i_7 - 1] [i_7 - 1] [i_7 - 1])))));
                            arr_27 [i_2] [i_0] [i_2] [i_5] [i_5] [i_0] = (~(min(((~(arr_1 [i_1]))), (~-12522))));
                            var_26 |= ((~(arr_20 [i_7] [i_7 - 1] [8] [i_5] [i_7 - 1] [i_7] [i_7 - 1])));
                        }
                        for (int i_8 = 0; i_8 < 15;i_8 += 1)
                        {
                            arr_30 [i_5] [i_1] [i_8] = ((((arr_1 [i_1]) / (arr_1 [i_5]))));
                            arr_31 [5] [i_8] = (((arr_7 [i_8] [i_0]) > ((~(arr_19 [i_8] [i_5] [i_2] [i_1] [i_0])))));
                        }
                        var_27 = ((((((min((arr_21 [8] [i_1] [i_1] [i_5]), (arr_29 [i_0] [i_1] [i_2] [i_2] [i_2] [i_5] [i_2]))) ^ (arr_25 [i_0] [i_1] [i_1] [i_2] [i_5])))) ? ((((((arr_8 [i_0] [i_5]) ? (arr_9 [i_0] [i_0] [i_1] [i_2] [i_5]) : 62))) & ((~(arr_14 [i_0] [i_1]))))) : ((((arr_7 [i_1] [i_1]) + ((min((arr_11 [i_2] [i_1] [i_2]), (arr_19 [i_5] [i_1] [i_1] [i_1] [i_0])))))))));
                    }
                }
            }
        }
    }
    for (int i_9 = 0; i_9 < 25;i_9 += 1)
    {
        arr_35 [i_9] = (((((10166777402872627324 < (max(0, 5693969413766187717))))) ^ 1));
        var_28 = (((((arr_32 [i_9] [i_9]) * (min(0, 640078432)))) ^ ((((~(arr_32 [i_9] [i_9])))))));
    }
    #pragma endscop
}
