/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231868
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231868 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231868
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (((((10484450593797053114 >> var_6) ? ((262142 << (114 - 102))) : (~-1130196642))) * ((((!(var_7 | var_4)))))));
    var_13 = (62 / var_7);
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                var_14 = (min(var_14, 218));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        {

                            for (int i_4 = 0; i_4 < 14;i_4 += 1)
                            {
                                arr_14 [i_0] [i_2] = (((((arr_10 [i_2]) ? var_10 : (max(1, var_11))))) || (((82 ? (-32767 - 1) : 194))));
                                arr_15 [i_2] [i_3] [7] [i_1] [i_2] = (max((((var_3 != 4294967295) ? (((0 ? var_4 : var_7))) : (arr_3 [i_0] [i_0]))), (((((6392218170128206660 ? var_7 : (arr_13 [i_0] [i_0] [5] [2] [i_0 - 1]))) % (-32767 - 1))))));
                            }
                            /* vectorizable */
                            for (int i_5 = 0; i_5 < 14;i_5 += 1)
                            {
                                arr_18 [i_0] [i_2] [i_1] [i_3] [i_5] [i_5] [i_5] = var_7;
                                var_15 = (((((var_6 ? var_3 : (arr_9 [7] [i_2] [i_3] [i_5])))) ? (!218) : (153 && 51236)));
                            }
                            /* vectorizable */
                            for (int i_6 = 0; i_6 < 14;i_6 += 1)
                            {
                                var_16 = ((var_6 ? 72 : 2957294839));
                                arr_23 [5] [i_1] [i_2] [i_1] [i_6] [4] [i_2] = (1 ? var_9 : var_6);
                                arr_24 [i_0] [6] [i_0] [i_0] [i_0 + 1] [i_2] = ((((var_4 ? 99 : (arr_2 [i_3]))) ^ ((~(arr_1 [11])))));
                                arr_25 [1] [i_2] [5] [i_2] [i_0] = (((-12670 + 2147483647) >> ((((9299318355937522751 ? var_5 : var_3)) - 7114))));
                            }
                            var_17 = (10 != 73);
                            var_18 = 2957294842;

                            for (int i_7 = 2; i_7 < 13;i_7 += 1)
                            {
                                var_19 = var_5;
                                var_20 = ((((((arr_26 [i_0] [i_0 - 1] [1] [i_3] [8]) ? (((arr_19 [1] [i_1] [i_1] [i_2] [i_1] [i_1]) ? (arr_20 [i_2] [i_7 - 1]) : (arr_4 [i_7] [i_7]))) : (((var_5 ? var_8 : -1082038801)))))) ? (arr_17 [1] [i_1] [i_2] [11] [i_7]) : (min((!var_11), (~var_9)))));
                                var_21 = (((((4 / ((var_9 ? var_1 : 12))))) ? (((~var_7) ? (arr_6 [i_1] [i_2] [i_7]) : -274877906943)) : (((min((arr_13 [i_7 - 1] [1] [i_1] [i_3] [i_7]), 13903))))));
                                arr_28 [i_7] [i_2] [i_2] [i_2] [5] [3] = (min((arr_11 [i_0] [i_0]), 14857));
                                var_22 = (-((-65529 + (0 - var_7))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
