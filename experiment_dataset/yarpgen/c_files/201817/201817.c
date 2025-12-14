/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201817
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201817 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201817
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((((max((-2147483647 - 1), 4139602627))) ? var_5 : (((max(var_4, var_5))))));
    var_11 = var_6;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 9;i_1 += 1)
        {
            {
                var_12 = (max(var_12, 3293808823));

                for (int i_2 = 2; i_2 < 9;i_2 += 1)
                {
                    var_13 = ((((((~(arr_5 [i_0] [i_1])))) <= 1399302730508512290)) ? (max((min((arr_8 [i_0] [3] [3]), (arr_0 [i_0] [i_2]))), (arr_0 [i_0] [3]))) : ((min(var_6, (max(2594367067, 79))))));
                    arr_12 [i_2 - 1] = (-2147483647 - 1);
                    arr_13 [9] [i_2 + 1] = (-2147483647 - 1);
                }
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_4 = 1; i_4 < 9;i_4 += 1)
                    {
                        for (int i_5 = 2; i_5 < 9;i_5 += 1)
                        {
                            {
                                var_14 ^= (((((var_0 ? var_8 : (arr_1 [i_4 - 1])))) ? ((1 ? ((var_8 ? (arr_1 [i_5]) : (arr_4 [i_0]))) : (((max(var_2, var_3)))))) : (((var_9 ? ((min(var_6, (arr_11 [2] [i_3] [i_5 - 1])))) : (arr_20 [2] [i_1] [i_1 + 1] [i_5 - 1] [i_5 - 2]))))));
                                arr_23 [i_0] [4] [i_3] [i_0] = ((6171 ? 279372182 : 1));
                            }
                        }
                    }
                    arr_24 [i_3] [i_1] [i_3] = (((arr_5 [i_0] [i_1]) ? -6365 : (max(4, ((var_4 ? (arr_19 [i_0] [i_1 - 2]) : var_9))))));
                }
                for (int i_6 = 0; i_6 < 1;i_6 += 1)
                {
                    var_15 += max((~283129902080899239), ((((~var_2) << (((var_7 | 851695907) - 937425886))))));

                    for (int i_7 = 0; i_7 < 10;i_7 += 1)
                    {
                        var_16 = (min(var_16, (((11 ? var_0 : var_7)))));
                        arr_30 [i_0] [i_6] = ((((((~var_2) - (arr_8 [i_1 + 1] [i_1] [i_1 + 1])))) ^ (((~3679737448757993958) ? (arr_0 [i_1 + 1] [i_1 - 1]) : 1))));
                        var_17 = 8790226521928099734;
                    }
                    arr_31 [7] [2] [i_6] = (max((min(17383052753319110029, var_8)), 192));
                }
                for (int i_8 = 0; i_8 < 10;i_8 += 1)
                {
                    arr_34 [2] [i_8] [i_1] [1] = (((2305533528280608880 <= 8149755161321322017) ^ ((7409997186387827871 ? 4151899463 : 63))));
                    arr_35 [i_8] [i_1 + 1] [i_8] [8] = (arr_9 [i_1 - 2] [i_1] [i_1] [i_1 - 2]);
                    var_18 *= ((-((~(~43)))));
                }
                arr_36 [5] = var_4;
                arr_37 [i_0] = (((~9401903007668879122) ? 255 : (arr_8 [i_1 - 2] [i_1 + 1] [2])));
                var_19 = (!var_4);
            }
        }
    }
    #pragma endscop
}
