/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210444
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210444 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210444
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        arr_4 [i_0] [i_0] = ((((arr_1 [7] [7]) == 1)) && ((max(((13531 ? 10 : 1)), 1))));

        for (int i_1 = 1; i_1 < 8;i_1 += 1)
        {
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 10;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 10;i_4 += 1)
                    {
                        {
                            var_11 = 52139;
                            var_12 |= ((var_7 ? ((min((max(var_10, (arr_0 [i_4]))), (min(30658, var_0))))) : var_8));
                            var_13 = (arr_1 [4] [i_1 + 1]);
                        }
                    }
                }
            }
            var_14 ^= ((-((max((max(1, (arr_6 [i_0] [i_1]))), (arr_12 [i_1] [i_1] [1] [1] [i_1] [i_0]))))));
            var_15 = ((var_6 ? var_7 : (((arr_10 [1] [i_0] [i_1] [i_1]) ? ((65521 ? var_7 : var_4)) : ((min(var_7, (arr_13 [i_0] [i_0] [i_0] [i_0] [i_0]))))))));
            var_16 += ((((1 < ((max((arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]), (arr_13 [i_0] [i_0] [i_0] [i_0] [i_1])))))) ? ((max(0, (arr_9 [i_0] [i_1] [i_1 + 2])))) : ((~(((arr_3 [i_0] [i_0]) - var_1))))));
        }
        for (int i_5 = 1; i_5 < 1;i_5 += 1)
        {
            arr_20 [i_0] [i_5] = (arr_15 [i_0] [i_0]);
            var_17 = (max((max((max((arr_6 [i_0] [i_5]), (arr_10 [i_0] [i_0] [i_0] [i_0]))), ((max((arr_12 [1] [i_0] [i_0] [i_5] [6] [i_5]), (arr_8 [i_0] [i_5] [1] [i_0])))))), var_8));
        }
        for (int i_6 = 0; i_6 < 10;i_6 += 1)
        {
            arr_25 [i_0] = (((arr_0 [i_6]) ? (arr_0 [i_6]) : ((max(0, var_0)))));
            var_18 ^= var_9;
        }
    }
    var_19 = var_6;
    #pragma endscop
}
