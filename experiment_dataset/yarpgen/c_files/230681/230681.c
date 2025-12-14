/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230681
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230681 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230681
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                var_13 = arr_1 [6];
                var_14 = (((((((arr_5 [11] [11]) || var_2)) ? ((((arr_5 [i_0] [i_0]) || (arr_3 [i_0])))) : ((var_2 ? var_0 : (arr_2 [4] [i_1] [i_1]))))) | ((((-52 - (arr_1 [i_1])))))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_15 = (min(var_15, ((max((((arr_5 [i_0] [1]) ? var_7 : -52)), ((((arr_0 [i_0 + 1]) != var_5))))))));
                                arr_14 [i_2] [i_1] [i_1] [i_2] [i_1] = (i_2 % 2 == 0) ? ((((((-38 ^ ((((arr_12 [i_2] [2] [i_4]) && (arr_0 [4]))))))) ? (((max(var_12, (arr_10 [11] [i_1]))) << (((max((arr_7 [i_4] [11] [i_2] [i_2]), 52)) - 6830364845527362623)))) : -45))) : ((((((-38 ^ ((((arr_12 [i_2] [2] [i_4]) && (arr_0 [4]))))))) ? (((max(var_12, (arr_10 [11] [i_1]))) << (((((max((arr_7 [i_4] [11] [i_2] [i_2]), 52)) - 6830364845527362623)) - 8058341447958235079)))) : -45)));
                                arr_15 [i_0 + 2] [i_0 + 2] [i_2] [i_2] [i_0 + 2] = var_10;
                            }
                        }
                    }
                }
            }
        }
    }
    var_16 = ((((min((min(51, var_11)), ((-51 ? var_11 : var_12))))) ? -25 : ((46 << (var_2 + 350976074)))));
    #pragma endscop
}
