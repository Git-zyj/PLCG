/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34125
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34125 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34125
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_5;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                var_15 = (max(((((arr_3 [i_1] [8]) < ((var_5 ? var_12 : -4888529633829545778))))), ((1439152925 ? (arr_3 [i_1] [i_1]) : var_9))));
                var_16 = 1150669704793161728;
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        {
                            var_17 = ((((19 % ((8865400194093026973 ? (arr_5 [i_0] [i_1] [i_2]) : (arr_1 [11])))))) ? ((((((((arr_2 [i_0]) ? (arr_3 [6] [6]) : (arr_1 [i_0]))) + 2147483647)) << (((((arr_0 [1]) + 865339411)) - 9))))) : (((var_9 / 238) ? (arr_8 [i_1] [10] [i_2] [i_3] [i_0]) : ((((arr_5 [9] [i_1] [i_2]) / 79))))));
                            arr_9 [i_0] [i_1] [i_2] [4] &= (max((max((max((arr_8 [i_3] [1] [i_3] [i_3] [i_3]), var_7)), (arr_8 [i_0] [i_0] [9] [i_0] [i_0]))), ((((((arr_6 [i_0] [i_1] [6] [i_2] [0]) - (arr_7 [i_0] [i_0] [i_0])))) ? ((var_9 ? var_8 : var_4)) : 231))));
                            var_18 = max((((((((arr_4 [i_0] [i_1] [i_2]) ? (arr_2 [i_0]) : (arr_3 [i_0] [i_1]))) + 9223372036854775807)) << (5 / 1851568181))), ((max((arr_0 [i_0]), (arr_0 [i_0])))));
                            var_19 |= var_4;
                            arr_10 [i_0] = ((((var_8 && ((min((arr_2 [i_0]), var_8))))) ? (max(((-(arr_8 [i_0] [i_0] [i_0] [i_0] [i_0]))), (((-3215376503203322306 + 9223372036854775807) << (((-5606267549400548437 + 5606267549400548454) - 17)))))) : ((((arr_5 [i_0] [10] [10]) ? (arr_5 [i_0] [i_1] [i_2]) : (arr_5 [i_2] [i_0] [i_0]))))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
