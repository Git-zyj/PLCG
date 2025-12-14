/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46261
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46261 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46261
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_1;
    var_11 = ((var_4 ? var_3 : var_3));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                var_12 |= ((var_3 ? -3898151151 : (((+((396816143 ? (arr_0 [i_0]) : (arr_0 [i_0]))))))));
                arr_6 [i_0] [i_1] = ((((max((arr_1 [i_1]), (((~(arr_0 [5]))))))) ? (arr_5 [i_0]) : (((((var_1 ? var_3 : (arr_4 [1] [9] [1])))) ? (arr_0 [i_1]) : ((var_2 ? var_1 : (arr_4 [i_0] [i_0] [i_1])))))));
                arr_7 [i_0] [i_0] [i_0] = ((+(max((var_4 && var_9), (max(var_7, var_8))))));
            }
        }
    }
    var_13 += var_2;
    /* LoopNest 2 */
    for (int i_2 = 2; i_2 < 9;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 10;i_3 += 1)
        {
            {
                var_14 = (max((((var_5 ? ((max((arr_10 [i_2 + 1] [9] [i_3]), -54))) : ((var_7 ? (arr_2 [i_2]) : var_4))))), (((arr_4 [i_3] [i_3] [4]) ^ (max((arr_8 [i_2] [i_3]), (arr_2 [i_3])))))));
                var_15 += (max(((((max((arr_10 [i_2] [i_2] [i_2]), (arr_5 [i_3])))) ? ((((arr_3 [i_2 - 1] [i_2] [i_3]) && (arr_11 [i_2])))) : (max((arr_11 [i_3]), (arr_10 [i_3] [1] [i_2]))))), (!var_7)));
                var_16 = (arr_11 [i_2 + 1]);

                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    var_17 = ((((((~var_8) ? (max(var_3, var_4)) : (((var_0 ? (arr_4 [i_2] [i_3] [i_2]) : 396816140)))))) ? (((~(max((arr_15 [i_2 - 1] [i_4]), (arr_15 [i_4] [i_3])))))) : (((((arr_2 [i_4]) | var_5)) | (arr_8 [i_3] [i_4])))));
                    var_18 = var_0;
                }
            }
        }
    }
    #pragma endscop
}
