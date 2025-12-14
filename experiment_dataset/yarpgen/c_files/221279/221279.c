/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221279
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221279 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221279
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            {
                var_16 += ((((((828876698757965125 >= (((arr_0 [i_1]) ? 17617867374951586490 : 1125993971)))))) <= (((var_5 % -1098234384178394974) ? var_4 : ((((arr_1 [i_0 - 4] [i_1]) ? var_12 : (arr_3 [12] [i_0]))))))));

                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {

                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {

                        for (int i_4 = 0; i_4 < 22;i_4 += 1) /* same iter space */
                        {
                            arr_13 [i_1] = (((((((arr_7 [i_1] [i_2] [2] [i_4]) + var_7)) + (arr_6 [i_0 + 1] [i_1 + 1] [i_2]))) - (((+(min((arr_3 [1] [i_3]), (arr_7 [i_1] [4] [4] [4]))))))));
                            var_17 += (arr_10 [i_2] [i_2] [i_0] [i_2]);
                            var_18 = (((-(arr_11 [i_0 + 1] [i_0 + 1] [i_1 - 1] [i_3] [i_1]))));
                        }
                        /* vectorizable */
                        for (int i_5 = 0; i_5 < 22;i_5 += 1) /* same iter space */
                        {
                            var_19 = -1297971111;
                            arr_16 [i_1] [i_1] [i_1] [i_3] [19] [i_3] [i_1] = var_5;
                            arr_17 [i_1] [i_3] [i_2] [i_1] [i_1] = 6024800514162302100;
                        }
                        for (int i_6 = 0; i_6 < 22;i_6 += 1) /* same iter space */
                        {
                            var_20 += min((arr_3 [17] [20]), (((arr_5 [i_0] [i_0]) ? (arr_6 [i_0] [i_0 - 3] [1]) : ((~(arr_4 [i_2] [i_6]))))));
                            arr_20 [i_1] [i_1 + 1] = ((((((arr_3 [i_6] [i_1]) + var_13))) - (9315391571623907464 + var_5)));
                        }
                        for (int i_7 = 1; i_7 < 19;i_7 += 1)
                        {
                            var_21 = (((arr_10 [i_0 - 3] [i_0 - 1] [i_1] [i_7 + 2]) - (arr_10 [10] [i_0 - 2] [i_1] [i_7 + 3])));
                            var_22 = (((!(((1324574240903638016 + (arr_3 [i_0] [i_2])))))));
                        }
                        var_23 |= ((((-((var_7 << (((arr_12 [i_0] [i_0 + 1] [i_0 - 3] [i_0]) - 15)))))) / 1));
                        arr_23 [2] [i_1 - 1] [i_2] [i_1] = (!1);
                        arr_24 [i_0] [i_0] [i_1] [i_0] = arr_9 [i_3] [8] [i_0] [i_0];
                    }
                    var_24 |= 17;
                }
                /* vectorizable */
                for (int i_8 = 0; i_8 < 22;i_8 += 1)
                {
                    var_25 = (((arr_19 [i_1] [i_0 + 1] [i_0] [i_0] [i_0 - 1]) * (arr_19 [i_1] [i_0 - 4] [i_0 - 4] [8] [3])));
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 22;i_9 += 1)
                    {
                        for (int i_10 = 3; i_10 < 20;i_10 += 1)
                        {
                            {
                                var_26 = (min(var_26, ((((arr_22 [i_0]) ? ((-(arr_25 [i_0] [i_0 - 3] [i_0] [1]))) : (var_14 < var_2))))));
                                var_27 = (((((var_14 ? var_6 : (arr_22 [i_1])))) ? ((8322272989524723777 ? (arr_21 [i_0] [i_0] [i_0] [i_1] [9] [i_10 + 2]) : (arr_30 [i_8] [i_1] [4] [i_9] [i_8]))) : -var_2));
                                arr_31 [i_0] [i_1] [i_1] [i_9] [i_10] = var_4;
                                arr_32 [i_1] [i_9] [i_9] = (769435299919858312 * (arr_8 [2] [i_1]));
                            }
                        }
                    }
                }
            }
        }
    }
    var_28 += ((((((var_11 >= (var_10 && -938450148))))) & ((min(var_10, 17)))));
    #pragma endscop
}
