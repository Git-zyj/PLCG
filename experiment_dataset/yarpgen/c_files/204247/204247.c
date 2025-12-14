/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204247
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204247 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204247
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_1;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 9;i_2 += 1)
            {
                {
                    arr_6 [i_0] [i_0] [i_2] [i_0] |= ((-7005 ? (arr_2 [i_0] [i_1] [i_1]) : var_4));

                    for (int i_3 = 0; i_3 < 11;i_3 += 1) /* same iter space */
                    {
                        arr_10 [i_0] [i_1] [i_1] [i_3] |= (((((((-(arr_1 [i_0]))) == ((var_3 & (arr_1 [i_0])))))) < (((((-(arr_3 [i_0])))) ? (max((arr_3 [i_3]), (arr_9 [i_0] [i_0] [4] [4]))) : ((max(var_5, var_2)))))));
                        arr_11 [i_0] [i_0] [i_2] [i_3] = (arr_9 [i_2 + 1] [i_2 - 2] [i_2] [i_2 + 2]);
                        arr_12 [i_0] [i_0] [i_2] = (max((!var_7), (max(((max(var_8, (arr_3 [i_2])))), (((arr_1 [i_1]) ? (arr_2 [i_3] [i_2 + 2] [i_0]) : 5))))));
                    }
                    for (int i_4 = 0; i_4 < 11;i_4 += 1) /* same iter space */
                    {
                        arr_16 [i_0] [i_0] = (arr_0 [i_2 - 3] [i_0]);
                        arr_17 [i_0] [i_4] [i_0] [i_0] = ((((~(max(-2, var_5))))) && ((min((max(var_1, var_11)), ((~(arr_3 [i_0])))))));
                    }
                    for (int i_5 = 0; i_5 < 11;i_5 += 1) /* same iter space */
                    {
                        var_16 = (((!-6) % ((-((-(arr_7 [i_0] [i_0] [i_2] [i_2 + 1])))))));
                        arr_20 [i_5] [i_2] [i_1] [i_1] [i_0] = (~-5);
                        arr_21 [i_0] [i_0] [5] = ((min((arr_15 [i_2 - 1] [i_0] [i_0] [i_5]), 6)));
                    }
                    arr_22 [i_0] = (((((-(arr_18 [i_0] [i_0] [i_2 + 2] [i_2])))) ? (((arr_18 [i_0] [i_1] [i_2 + 1] [1]) ? (arr_18 [i_1] [i_1] [i_2 + 1] [i_1]) : (arr_18 [i_0] [i_1] [i_2 + 2] [i_1]))) : (((arr_18 [i_0] [i_2] [i_2 + 2] [i_2]) ? (arr_18 [i_0] [i_1] [i_2 + 2] [i_1]) : (arr_18 [i_0] [i_1] [i_2 - 1] [i_2])))));
                }
            }
        }
    }
    var_17 = (~4);
    #pragma endscop
}
