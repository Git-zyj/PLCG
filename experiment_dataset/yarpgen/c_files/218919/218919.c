/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218919
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218919 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218919
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_3;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            {
                var_17 = (min(var_17, ((((((((((~(arr_1 [i_1]))) + 2147483647)) << ((((((var_10 + (arr_2 [i_0]))) + 6326710014448581181)) - 9))))) ? var_4 : ((max(var_3, (arr_3 [i_1] [i_1 + 1] [i_0])))))))));
                /* LoopNest 3 */
                for (int i_2 = 2; i_2 < 8;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 8;i_4 += 1)
                        {
                            {
                                var_18 = (max(var_18, (arr_3 [i_3] [i_2 - 1] [i_3])));
                                arr_12 [i_1] [i_3] [i_2] [i_2] [i_0] [i_1] = (arr_11 [i_0] [i_1] [i_2 - 2] [i_1]);
                                var_19 = (max(var_19, ((min(((((arr_1 [i_4 + 2]) ? var_12 : (arr_1 [i_4 + 1])))), (((((var_7 ? var_12 : var_13))) ? (((min((arr_8 [4] [i_3] [4] [i_3]), var_12)))) : (arr_3 [i_4] [i_2 - 1] [i_0]))))))));
                            }
                        }
                    }
                }
                arr_13 [i_1] [i_1] [8] = (((arr_9 [i_1]) ? ((((((arr_4 [i_1] [i_1] [i_1]) ? (arr_0 [i_0] [i_0]) : var_1))) ? (((max(var_1, var_1)))) : ((var_5 & (arr_2 [i_1]))))) : (((((var_9 * (arr_10 [i_0] [i_1] [i_0] [i_0] [i_0]))) % (arr_0 [i_0] [i_1]))))));
                var_20 = ((((((arr_10 [i_0] [i_1] [i_0] [i_0] [i_1]) ? (arr_10 [i_0] [i_1] [3] [i_1 - 1] [i_1 - 1]) : var_3))) ? ((((!(arr_10 [i_0] [i_1] [i_1 - 1] [i_1 - 1] [0]))))) : (arr_10 [4] [i_1] [i_1 + 1] [i_1] [9])));
            }
        }
    }
    var_21 |= var_4;
    #pragma endscop
}
