/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242316
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242316 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242316
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((-(max((!var_11), (min(var_5, var_8))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 8;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 8;i_3 += 1)
                    {
                        {

                            /* vectorizable */
                            for (int i_4 = 0; i_4 < 10;i_4 += 1)
                            {
                                arr_12 [i_0] [i_0] [i_3] [i_2] [i_3] [i_4] = (arr_8 [i_0] [i_1] [i_3] [i_2 - 1]);
                                var_13 = var_9;
                                arr_13 [i_3] [i_1] [4] [1] [i_4] = 3032898520;
                            }
                            var_14 = ((min((arr_5 [i_1] [i_1]), (var_1 + var_9))));
                            var_15 += var_4;
                            var_16 &= 3032898520;
                            arr_14 [i_0] [i_3] [7] = ((0 + (arr_5 [i_3 - 1] [i_2 - 1])));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_5 = 2; i_5 < 8;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 10;i_6 += 1)
                    {
                        {
                            var_17 *= ((((min((((arr_18 [i_6] [i_1] [i_1] [i_6] [5] [i_6]) ? 22755 : 1262068786)), (((arr_10 [i_0]) / var_11))))) ? (((arr_15 [i_0] [i_5 + 2]) | (arr_4 [i_0] [i_5] [i_5 - 1]))) : ((((!((max((arr_18 [2] [i_1] [i_5] [1] [i_5] [i_5]), (arr_1 [i_5]))))))))));
                            var_18 = ((((((arr_3 [i_5]) ? ((min(var_1, (arr_17 [i_0] [i_6] [i_1] [i_6] [i_0] [i_1])))) : ((3032898520 << (((arr_1 [i_0]) - 5407052765080403463))))))) ? (min((var_3 + 4), var_8)) : var_7));
                            arr_19 [i_0] [i_0] [i_5] [i_0] = max(((min((arr_11 [i_1] [i_5 + 1] [i_0] [i_6] [0]), (arr_11 [i_0] [i_5 + 1] [i_5 + 1] [i_6] [i_0])))), (max(var_5, (((arr_6 [i_0] [9] [i_1] [i_0]) ? var_7 : var_4)))));
                            var_19 = max(((-(((arr_7 [i_6] [i_5] [i_5 + 2] [i_0] [9]) >> (((arr_7 [i_0] [i_0] [i_5] [i_0] [i_0]) - 49855693)))))), (((var_10 <= (arr_16 [i_0] [i_5 + 2] [i_0])))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
