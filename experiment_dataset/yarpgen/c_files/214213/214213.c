/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214213
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214213 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214213
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 &= -9621382500472678865;
    var_11 = (min(var_11, ((max(var_4, -2)))));
    var_12 = (max(var_12, 21522));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_13 &= ((72 || (arr_1 [4])));
        arr_2 [i_0] [i_0] = ((var_6 ? (arr_0 [i_0] [i_0]) : (150 || 663909469)));
        arr_3 [8] &= (var_9 * var_6);
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 12;i_2 += 1)
        {
            for (int i_3 = 2; i_3 < 11;i_3 += 1)
            {
                {
                    var_14 = (min(((((((-663909469 ? var_6 : var_7))) || -var_1))), (((var_8 | -1081045279) ? (~var_5) : (arr_6 [i_2])))));
                    arr_11 [i_1] [i_3] [i_3] = (83 / var_0);
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 1;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 12;i_5 += 1)
                        {
                            {
                                arr_17 [i_1] [2] [i_5] [i_3] [i_4] [i_5] &= var_4;
                                var_15 = (((((((((var_7 ? var_0 : var_5))) && (-2147483647 - 1))))) < ((~(arr_1 [i_3])))));
                                arr_18 [i_1] [i_1] [i_5] [i_1] [i_1] &= (((min((arr_4 [i_3 + 1]), (arr_4 [i_3]))) - (((arr_4 [i_1]) + -236332108))));
                            }
                        }
                    }
                    var_16 = (min(var_16, -236332108));
                }
            }
        }
        var_17 = (min(var_17, var_5));
    }
    var_18 = (var_7 > -21507);
    #pragma endscop
}
