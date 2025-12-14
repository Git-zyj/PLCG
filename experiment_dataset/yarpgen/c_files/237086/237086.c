/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237086
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237086 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237086
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
            for (int i_2 = 1; i_2 < 11;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_1] [i_2] [i_0] = ((((((((arr_4 [1]) == 12708))) > (arr_6 [i_1] [i_1] [i_2 + 1]))) ? (((var_8 != (arr_7 [i_2 + 1] [i_2 + 1] [i_2 + 1] [i_2])))) : -1));
                    arr_9 [i_0] = min(var_9, (((((min(var_4, (arr_1 [i_2])))) ? (arr_5 [4] [i_2 - 1] [i_0]) : (arr_5 [i_2 + 1] [i_1] [i_0])))));
                    arr_10 [10] [i_2] = ((12708 < ((((~var_3) ? var_8 : ((55651 & (-2147483647 - 1))))))));
                    arr_11 [i_0] = ((~((55651 & (12708 & 52817)))));

                    for (int i_3 = 4; i_3 < 10;i_3 += 1)
                    {

                        for (int i_4 = 0; i_4 < 12;i_4 += 1)
                        {
                            arr_16 [i_4] [i_4] [i_3] [i_2 - 1] [i_1] [i_0] [11] = ((arr_0 [i_4]) ? ((-(((arr_3 [i_1]) ? (arr_6 [i_0] [i_0] [0]) : var_5)))) : (((arr_1 [i_3]) ? ((~(arr_2 [9]))) : ((((arr_5 [i_0] [i_0] [i_4]) > var_3))))));
                            arr_17 [i_2] [i_2] = (var_7 ? (arr_14 [i_4] [0]) : (arr_7 [i_0] [i_3 + 1] [5] [i_3]));
                        }

                        for (int i_5 = 0; i_5 < 12;i_5 += 1)
                        {
                            arr_20 [i_0] [i_0] [i_2] [i_3] [10] = ((+((max((607895954 <= 9884), (arr_6 [i_3] [i_0] [i_0]))))));
                            arr_21 [i_5] [i_1] [i_2 + 1] = (!var_2);
                            arr_22 [i_0] [i_1] [i_2] [i_2 - 1] [i_5] [i_1] [1] = (var_2 || 52801);
                        }
                        arr_23 [i_0] [i_0] [i_1] [11] [i_2] [i_3 - 2] = ((var_1 < (0 == 54)));
                        arr_24 [i_0] [i_1] [i_2] [i_3 + 2] [i_0] [i_3 + 2] = 1;
                    }
                }
            }
        }
    }
    var_11 = var_8;
    #pragma endscop
}
