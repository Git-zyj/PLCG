/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29268
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29268 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29268
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 -= ((var_6 ? var_11 : (var_7 != var_15)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_1 - 1] [i_0] = (((arr_0 [i_0]) ? ((((arr_2 [i_1] [i_0]) < ((min((arr_5 [i_1]), var_1)))))) : (((((var_1 ? (arr_5 [i_0]) : (arr_5 [i_0])))) ? ((~(arr_2 [5] [1]))) : (arr_2 [i_0] [16])))));
                arr_7 [i_0] = (arr_2 [2] [i_1 - 1]);
            }
        }
    }
    var_18 = (max(var_18, var_3));
    var_19 = (min(var_14, var_13));
    /* LoopNest 2 */
    for (int i_2 = 1; i_2 < 17;i_2 += 1)
    {
        for (int i_3 = 2; i_3 < 18;i_3 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 20;i_4 += 1)
                {
                    for (int i_5 = 3; i_5 < 17;i_5 += 1)
                    {
                        {
                            var_20 = (min(var_20, ((min((arr_2 [i_4] [i_5]), (arr_8 [i_2]))))));
                            var_21 -= ((((min(var_16, (arr_11 [i_5 - 3] [i_4] [i_3 + 2])))) * (((arr_1 [i_2 + 2]) ? (arr_11 [i_3 + 1] [i_4] [i_4]) : (arr_11 [i_2 + 2] [i_3 + 1] [i_5 + 2])))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 1;i_6 += 1)
                {
                    for (int i_7 = 1; i_7 < 17;i_7 += 1)
                    {
                        {
                            arr_24 [i_3] = (((arr_15 [12] [i_3] [12] [i_7]) ? (min((((~(arr_14 [i_2] [i_2] [19])))), (arr_8 [i_2]))) : ((max((min((arr_20 [1] [i_3] [i_7 + 2]), (arr_2 [i_7] [i_7]))), (arr_0 [i_2]))))));
                            var_22 = ((((min((arr_8 [i_3 - 2]), ((((arr_18 [i_6] [i_6] [1] [i_2]) ? (arr_4 [i_2] [i_2]) : (arr_23 [17] [i_3 - 2] [i_6] [i_7]))))))) & var_6));
                            arr_25 [i_2 + 1] [i_3] [i_2 + 1] [i_7] [i_2] = var_8;
                            var_23 = (((arr_14 [i_2 + 2] [i_3 - 1] [i_3 + 2]) >= ((min((arr_23 [i_2 + 3] [i_2 + 3] [i_2 + 3] [i_2 + 1]), (arr_23 [i_2 + 2] [i_3] [0] [i_7]))))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
