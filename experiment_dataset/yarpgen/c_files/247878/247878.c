/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247878
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247878 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247878
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 17;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_1] &= (((arr_6 [i_2 - 1] [i_2 - 1] [i_2 - 1] [i_2]) ? (((!(arr_6 [i_2 - 1] [i_2 + 1] [i_1] [i_1])))) : (((arr_6 [i_2 + 1] [i_2 - 1] [i_0] [i_0]) ? (arr_6 [i_2 + 1] [i_2 + 1] [i_2 + 1] [i_2]) : (arr_6 [i_2 - 1] [i_2 + 1] [2] [i_0])))));

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {

                        for (int i_4 = 1; i_4 < 16;i_4 += 1)
                        {
                            arr_14 [i_0] [i_1] [i_1] [i_2 - 1] [i_2] [i_4 + 1] [i_4] = (((arr_7 [i_2 - 1] [i_4 - 1] [i_2] [i_4 + 1]) ? (arr_7 [i_2 + 1] [i_4 + 1] [i_2] [i_4 - 1]) : (arr_7 [i_2 - 1] [i_4 + 1] [i_2] [i_4 + 2])));
                            arr_15 [i_0] [i_2] [i_0] [12] [i_0] = ((((var_1 ? (arr_7 [i_0] [i_0] [i_2] [i_0]) : var_10)) % (arr_9 [i_0] [i_2])));
                        }
                        for (int i_5 = 3; i_5 < 16;i_5 += 1)
                        {
                            arr_18 [i_2] [i_1] = (!var_10);
                            arr_19 [i_0] [i_2] [i_0] [6] [i_0] = (107 <= -1);
                            arr_20 [i_2] [i_1] [13] [i_2] [i_2 + 1] [i_3] [i_5] = (arr_11 [i_0] [i_0] [i_2] [i_2] [i_5] [i_5] [i_2]);
                            var_15 = ((var_9 ? ((var_5 ? var_14 : (arr_2 [i_1]))) : (arr_12 [i_1] [i_1] [i_2 - 1] [i_2] [i_2])));
                            arr_21 [i_2] [i_3] [i_2 - 1] [i_1] [i_0] [i_2] = ((~(arr_1 [i_3] [i_1])));
                        }
                        arr_22 [i_1] [i_1] [4] |= ((!(!var_11)));
                    }
                }
            }
        }
    }
    var_16 += var_5;
    var_17 = ((var_10 ? var_11 : var_7));
    var_18 = (max(-24143, 65535));
    var_19 = var_3;
    #pragma endscop
}
