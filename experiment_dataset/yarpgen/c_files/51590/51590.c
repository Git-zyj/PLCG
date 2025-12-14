/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51590
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51590 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51590
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (((((~((-674850714 ? var_3 : 674850713))))) ? -var_6 : ((var_5 ? ((var_6 ? 14465781605957570054 : var_8)) : (var_6 > var_4)))));
    var_13 -= var_8;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                var_14 *= (max(((-1 ? var_11 : var_11)), (arr_4 [i_0] [i_1])));
                var_15 = ((((!(((6481191650724792279 ? (arr_1 [i_0] [1]) : 0))))) ? 224 : (((-674850714 <= ((var_2 ? (arr_3 [i_0] [i_0] [2]) : var_8)))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        {
                            var_16 *= ((((((0 ? 1 : (arr_6 [i_1] [i_3])))) || (arr_11 [i_0] [i_2] [i_0]))) ? (1 > 674850713) : ((((arr_11 [i_0] [i_1] [i_3]) && ((max((arr_5 [i_3] [i_2] [i_0] [i_0]), -3816704796322541298)))))));
                            arr_13 [i_0] = ((((((arr_12 [i_1] [i_1] [i_0]) || var_9))) != ((var_10 ? var_5 : var_10))));
                            var_17 = (min(var_17, 32767));
                            var_18 = (!((((arr_7 [i_3] [i_2] [i_1] [i_0]) ? (max(var_1, (arr_12 [i_0] [i_0] [i_0]))) : ((~(arr_7 [i_0] [i_1] [5] [i_3])))))));
                        }
                    }
                }
                arr_14 [i_0] [i_1] [i_0] = (max((((arr_0 [i_0 + 2]) ? (arr_0 [i_0 + 2]) : (arr_0 [i_0 + 2]))), (((arr_0 [i_0 - 1]) - (arr_0 [i_0 - 2])))));
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 12;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 0;i_5 += 1)
                    {
                        {
                            arr_21 [i_0] [i_1] [i_0] [i_4] [i_1] = var_6;
                            var_19 = (min(var_19, var_3));
                            arr_22 [i_0] [i_0] [i_4] [i_5 + 1] = ((var_7 ? (~0) : 8));
                            arr_23 [i_0] [i_0] [0] [i_0] [i_0] [i_0] = (max(-var_11, 55874));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
