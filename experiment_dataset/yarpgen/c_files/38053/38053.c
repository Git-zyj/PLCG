/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38053
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38053 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38053
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    var_17 ^= (arr_0 [i_1]);
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 16;i_4 += 1)
                        {
                            {
                                var_18 = (((max((max(var_0, var_12)), ((((arr_10 [i_4] [i_3] [i_2] [i_1] [i_0] [11]) <= 9)))))) && ((var_14 && (12363280380752339184 || var_9))));
                                var_19 = var_16;
                                var_20 = ((min((max(var_15, (arr_8 [i_0] [10] [i_2] [i_3] [14]))), var_12)));
                                arr_12 [1] [i_1] [i_2] [i_3] [i_4] [i_2] |= (min((arr_5 [i_1]), ((~(arr_5 [i_0])))));
                                arr_13 [i_0] [i_1] [1] [i_3] [i_4] [i_4] = (((arr_9 [i_2]) % (arr_3 [8])));
                            }
                        }
                    }
                    arr_14 [7] [i_1] [i_2] = 20341;
                }
                arr_15 [i_0] = ((89 <= (!-20340)));
                arr_16 [i_0] [5] [11] = var_11;
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 1; i_5 < 1;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 15;i_6 += 1)
        {
            {
                arr_24 [i_5 - 1] [i_6] [i_5] = (((var_8 % (arr_18 [i_5] [i_5 - 1]))));
                arr_25 [12] [i_6] [i_6] = (((((((max(var_16, var_1))) / var_8))) ? (((((arr_6 [i_5 - 1]) >= 23734)))) : (max(var_7, (12363280380752339179 | 6083463692957212412)))));
            }
        }
    }
    var_21 = ((var_1 ? var_15 : ((max(((max(var_1, var_0))), var_2)))));
    #pragma endscop
}
