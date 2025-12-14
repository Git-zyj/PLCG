/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39763
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39763 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39763
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 24;i_1 += 1)
        {
            {
                var_12 = (min(var_12, (((((var_8 ? (var_9 - var_2) : 65511))) && (arr_1 [i_0])))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 1;i_3 += 1)
                    {
                        {

                            for (int i_4 = 0; i_4 < 25;i_4 += 1)
                            {
                                var_13 = (min(-11374073969459849613, (((51687 ? var_4 : (arr_14 [19] [i_0] [i_1 - 2] [i_3 - 1] [i_3] [1] [i_3]))))));
                                var_14 = (max((((var_8 || (arr_13 [i_0 - 1] [i_4] [i_4] [i_4] [i_4])))), (((arr_0 [i_0]) | 8003))));
                            }

                            for (int i_5 = 0; i_5 < 25;i_5 += 1)
                            {
                                var_15 = (max((var_6 | var_9), ((((13842 ? (arr_16 [i_5] [i_3] [i_3 - 1] [i_2] [i_1] [i_0 - 1]) : var_0))))));
                                var_16 *= (min((arr_11 [i_0] [i_0] [15] [i_2] [3] [3]), (arr_6 [i_0] [i_0] [i_0 - 1])));
                                var_17 *= ((var_1 >= ((min(7996, (max((arr_5 [i_5] [i_5]), 6755)))))));
                            }
                            for (int i_6 = 1; i_6 < 24;i_6 += 1)
                            {
                                arr_19 [i_0] [i_1] [i_1] = (((((((1 << (1048575 - 1048571)))) || 2083275582))) - var_7);
                                var_18 ^= (((arr_15 [i_0] [i_0 - 1] [i_0] [0] [i_0 - 1]) ? (arr_1 [i_6 - 1]) : 84));
                                arr_20 [i_0] [i_0] [i_2] [i_0] [i_0] = var_4;
                                var_19 = (-2147483647 - 1);
                            }
                        }
                    }
                }
                arr_21 [i_0] = ((((((arr_11 [i_1 - 1] [i_1] [i_1] [i_1] [i_1] [i_1 - 3]) ? var_2 : -1))) < ((((((arr_13 [i_1] [i_1] [i_1] [i_1] [i_1]) ? 6744 : 4294967279))) ? (arr_7 [i_0] [i_0] [i_0 - 1]) : var_8))));
            }
        }
    }
    var_20 = ((-var_10 != (max(((1048583 ? var_2 : var_8)), 75))));
    #pragma endscop
}
