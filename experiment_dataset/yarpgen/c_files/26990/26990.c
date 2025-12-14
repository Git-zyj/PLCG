/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26990
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26990 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26990
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (max(((var_10 ? var_12 : var_0)), var_3));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 4; i_2 < 10;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 11;i_4 += 1)
                        {
                            {
                                arr_13 [i_0] [1] [10] [6] [i_0] [6] [6] = 1;
                                var_16 = (+(((arr_11 [i_0] [i_1] [i_2] [1] [i_4] [i_0] [i_2]) % var_1)));
                            }
                        }
                    }
                    var_17 = (((1 - var_9) ? (arr_0 [i_1] [i_1]) : 18446744073709551615));
                }
                for (int i_5 = 0; i_5 < 11;i_5 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 11;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 11;i_7 += 1)
                        {
                            {
                                var_18 = (((arr_7 [i_7] [i_6] [i_5] [i_5] [i_1] [i_0]) ? (max(((15664491357527675797 ? var_4 : var_14)), (~1))) : (~93)));
                                var_19 = (((((((var_0 ? (arr_16 [i_7]) : 7288555647788376790))) ? var_2 : var_6)) >= (min(((~(arr_14 [i_7]))), (!11158188425921174826)))));
                            }
                        }
                    }
                    arr_20 [i_0] [7] [i_5] = (min((((!((min(2147483647, var_5)))))), (min(((var_13 ? var_11 : 1)), ((28 ? -94 : 75))))));
                }
                arr_21 [i_0] [i_1] = 1847538876;
                var_20 = ((!((min(((~(arr_19 [i_0]))), -1)))));
            }
        }
    }
    var_21 = (((((((((var_12 ? var_0 : var_2))) < (min(var_12, var_1)))))) + var_8));
    #pragma endscop
}
