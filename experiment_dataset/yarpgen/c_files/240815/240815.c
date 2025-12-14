/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240815
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240815 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240815
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            arr_5 [i_0] = ((-29508 & (min(-566326794, 198))));
            arr_6 [i_1] [i_1] [i_1] = max(((-(17136502086754871477 >= 51))), 9460);
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 11;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 1;i_4 += 1)
                    {
                        {
                            var_16 = ((max((((arr_8 [i_0]) ? 1 : var_14)), ((((arr_2 [i_3]) >= 1310241986954680141))))) & (((var_5 ? 29508 : (arr_4 [9] [9] [i_2])))));
                            var_17 = (((((((0 ? (-2147483647 - 1) : (arr_13 [i_0] [i_0] [4] [i_0] [i_3] [i_3] [i_4]))) >= (!-2027346201)))) != ((((arr_7 [i_0] [i_1] [i_2]) ? 62 : (arr_1 [i_2]))))));
                            var_18 = (min((!0), (((-1 ? 20 : var_11)))));
                            arr_15 [i_2] [i_0] [i_2] [i_1] [1] [1] |= var_1;
                            arr_16 [i_2] [6] [i_2] [i_4] [i_4] = (!119);
                        }
                    }
                }
            }
        }
        /* vectorizable */
        for (int i_5 = 3; i_5 < 10;i_5 += 1)
        {
            /* LoopNest 2 */
            for (int i_6 = 0; i_6 < 11;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 0;i_7 += 1)
                {
                    {
                        var_19 = (arr_23 [i_0 - 1] [i_5 - 3] [i_6] [i_7 + 1]);
                        var_20 = (((((!(arr_10 [i_0] [i_5] [i_5])))) >= (!1)));
                    }
                }
            }
            var_21 = var_0;
        }
        /* LoopNest 3 */
        for (int i_8 = 1; i_8 < 9;i_8 += 1)
        {
            for (int i_9 = 1; i_9 < 8;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 1;i_10 += 1)
                {
                    {
                        arr_35 [i_8] [i_8 + 2] [i_9] [i_10] = ((min(((~(arr_22 [i_10] [i_8] [i_9]))), ((max(-24534, -1756720508))))));
                        var_22 -= ((((((((arr_14 [i_8 + 2]) + 2147483647)) >> (255 - 239)))) ? (((max(var_5, (arr_11 [i_0] [0] [0] [0] [i_0]))) % ((min(var_11, 1))))) : ((214 & ((var_0 ? var_1 : 1310241986954680145))))));
                    }
                }
            }
        }
        var_23 = (~-13);
        var_24 |= (-1 != 17136502086754871465);
    }
    var_25 = (max(((~((max(var_7, 1))))), (((((~var_0) + 2147483647)) << ((((255 ? var_2 : var_2)) - 1785503101))))));
    #pragma endscop
}
