/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248092
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248092 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248092
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((((((!var_3) ? var_5 : ((var_13 ? var_13 : var_3))))) ? (((((var_2 ? var_7 : var_12))))) : (max(var_0, (max(var_7, var_2))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 14;i_4 += 1)
                        {
                            {
                                arr_13 [i_3] [i_2] [i_2] [i_1 - 1] [i_3] |= 9012398985505428920;
                                var_15 = ((((max(((-(arr_7 [i_0] [i_2] [i_4]))), (arr_4 [i_2] [i_0])))) ? ((((arr_11 [i_0] [i_1] [i_2]) == ((max((arr_6 [i_0] [i_0] [i_0] [i_0]), (arr_3 [i_3] [i_2] [i_0]))))))) : ((((((arr_8 [i_1] [i_1] [i_1]) ? (arr_0 [i_2] [i_4 + 2]) : (arr_9 [i_3] [i_2] [i_2] [i_2] [i_3] [i_0])))) ? (arr_6 [i_1] [i_1 + 1] [1] [i_4 + 2]) : ((max((arr_1 [i_2]), (arr_12 [i_0] [i_1] [i_2] [i_2]))))))));
                                var_16 |= (((-(arr_3 [i_4] [i_3] [i_1]))));
                                arr_14 [i_0] [i_1 - 1] [i_2] [i_1] [i_2] [i_4] = (max(((max((arr_11 [i_4 + 3] [i_3] [i_0]), (arr_9 [i_0] [i_0] [i_2] [10] [i_2] [i_4])))), ((((arr_11 [i_2] [i_2] [i_2]) ? (arr_11 [i_0] [i_2] [i_4]) : (arr_3 [5] [i_4 + 3] [i_4]))))));
                            }
                        }
                    }
                    arr_15 [i_1] [i_1] = (((((~((~(arr_9 [14] [i_2] [i_1] [i_1] [i_1] [i_0])))))) ? (arr_3 [i_0] [6] [i_1]) : ((~((~(arr_7 [i_2] [i_1 + 1] [i_0])))))));
                    var_17 = (min((!705354303), ((~(arr_1 [i_1 - 1])))));
                }
            }
        }
    }
    #pragma endscop
}
