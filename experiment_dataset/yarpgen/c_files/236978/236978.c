/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236978
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236978 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236978
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            {
                var_18 = (((((!(arr_2 [i_1 + 2] [i_1 + 1] [15])))) - (((!((min(5805587331708599899, -1))))))));

                for (int i_2 = 1; i_2 < 23;i_2 += 1)
                {
                    var_19 = (max(var_19, (((((arr_0 [i_1 - 1]) - 6))))));
                    arr_8 [i_0] [i_2] = (arr_7 [i_1 + 1] [i_0] [i_0]);
                }
                for (int i_3 = 0; i_3 < 24;i_3 += 1) /* same iter space */
                {
                    arr_11 [12] [i_1] [8] |= (min(((min((arr_9 [i_0] [0] [i_1] [i_3]), (arr_9 [i_0] [14] [0] [i_1])))), (min((arr_0 [i_0]), (min(var_1, var_14))))));
                    var_20 = (max(var_20, (arr_6 [i_0] [11] [11])));
                    arr_12 [i_0] = (((!((min(var_11, (arr_9 [16] [i_0] [i_1] [i_3])))))));
                    var_21 = (arr_6 [i_1 - 1] [i_1 + 2] [i_1 + 1]);
                }
                for (int i_4 = 0; i_4 < 24;i_4 += 1) /* same iter space */
                {
                    arr_16 [i_0] [i_4] = (((min(((min((arr_1 [i_4]), 5))), 3035542928156575099)) - (((1053420185902034798 ? 1163155081 : 160)))));
                    arr_17 [i_0] = 6930460827454914302;
                }

                for (int i_5 = 0; i_5 < 1;i_5 += 1)
                {
                    var_22 = (min(0, -1053420185902034780));

                    for (int i_6 = 0; i_6 < 24;i_6 += 1)
                    {

                        /* vectorizable */
                        for (int i_7 = 1; i_7 < 1;i_7 += 1) /* same iter space */
                        {
                            arr_25 [i_0] = (((arr_7 [i_1 - 1] [i_0] [i_7 - 1]) ? (arr_7 [i_1 - 1] [i_0] [i_7 - 1]) : 1));
                            var_23 += ((~(arr_19 [i_0])));
                        }
                        for (int i_8 = 1; i_8 < 1;i_8 += 1) /* same iter space */
                        {
                            arr_28 [i_0] [i_0] [i_0] [i_0] [i_0] = ((((((arr_21 [i_8] [i_0] [i_1]) ? (var_1 - -1053420185902034776) : (arr_13 [i_0] [i_0] [i_0] [i_0])))) ? ((((((arr_4 [i_8] [i_8] [i_0]) - (arr_27 [i_0] [i_1 + 2] [i_5] [i_6] [i_8]))) - (min(60210, (arr_14 [i_0] [i_0] [i_0] [i_0])))))) : (min(103, (min(2556949005343045844, -934577001))))));
                            var_24 = ((26 ? ((-1909946202 ? 1449761207019815460 : -1)) : 127));
                            var_25 = (((1 - var_11) - (((min(((!(arr_27 [i_0] [i_1 + 1] [i_5] [i_0] [i_0]))), var_13))))));
                            var_26 = ((((var_4 ? var_13 : (min(var_13, var_9)))) - ((min((!0), var_5)))));
                        }
                        arr_29 [i_0] [i_5] [i_0] [i_0] = (((((((-86 - (arr_23 [i_1] [i_1] [i_0] [i_1]))) - (var_16 - 12)))) ? (min((arr_18 [i_0] [i_0] [i_1 + 2] [i_1 + 2]), 1)) : (((~((var_14 ? var_10 : var_5)))))));
                    }
                    var_27 = 234;
                    arr_30 [5] [i_1] [i_0] [21] = ((min((arr_4 [i_0] [i_0] [i_0]), (arr_4 [i_0] [i_1 + 1] [i_0]))));
                }
            }
        }
    }
    var_28 = (min((min(var_14, var_6)), var_0));
    var_29 = (!1216402580848965539);
    var_30 = (min(var_30, -var_9));
    #pragma endscop
}
