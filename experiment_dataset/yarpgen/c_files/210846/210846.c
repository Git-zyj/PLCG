/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210846
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210846 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210846
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 &= ((((-(min(2006902945, 99)))) != ((max(var_14, (var_14 + var_15))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 20;i_4 += 1)
                        {
                            {
                                arr_12 [i_0] [i_1] [i_2] [i_3] [i_2] = var_12;
                                arr_13 [i_0] [i_3] [i_3] = (var_3 >> (max(((var_10 ? var_6 : var_14)), (arr_3 [i_1] [i_1] [i_1]))));
                                var_18 = ((383861086 ? var_6 : ((-38 ? (arr_9 [i_0] [i_0] [i_3] [i_0] [i_0]) : var_5))));
                                var_19 &= 46500;
                            }
                        }
                    }
                }
                arr_14 [i_0] [i_1] = ((((((arr_8 [i_1] [i_0] [i_1] [i_0] [i_0] [i_0]) ? (arr_8 [i_0] [i_0] [i_0] [13] [i_0] [i_0]) : 24783))) ? 56242 : (((var_6 >= (arr_8 [i_0] [i_0] [i_0] [i_0] [i_0] [3]))))));

                for (int i_5 = 2; i_5 < 18;i_5 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 20;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 1;i_7 += 1)
                        {
                            {
                                var_20 = var_4;
                                var_21 = var_15;
                            }
                        }
                    }
                    arr_23 [i_0] [i_1] [i_5] = var_0;
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 20;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 20;i_9 += 1)
                        {
                            {
                                var_22 = (max(var_22, (((((((arr_24 [i_9] [i_0] [i_1] [i_0]) ? ((var_0 << (((arr_28 [i_0] [i_0] [i_0] [i_0] [i_0]) - 2180461826)))) : var_15))) ? ((1 | ((var_13 ? (arr_26 [i_0] [i_1] [i_1] [i_0] [i_9] [i_1] [i_1]) : -1782850418)))) : (((-(((!(arr_9 [i_0] [i_0] [i_0] [i_0] [1]))))))))))));
                                var_23 = (var_15 >= (-2147483647 - 1));
                            }
                        }
                    }
                    arr_29 [i_5] [i_1] [i_1] [i_1] = (max((max(1754338575, var_14)), ((((arr_4 [i_5 + 1] [i_1] [i_1]) ? (arr_4 [i_5 + 2] [i_1] [i_5]) : var_16)))));
                }
                for (int i_10 = 0; i_10 < 20;i_10 += 1)
                {
                    var_24 = (max(((var_8 ? var_13 : -3223642225354735731)), ((max((arr_24 [i_10] [i_10] [i_1] [i_0]), (arr_24 [i_10] [i_10] [i_0] [i_0]))))));
                    arr_34 [i_1] [i_10] = 2;
                }
                var_25 = arr_17 [i_0];
            }
        }
    }
    var_26 = (max(var_26, var_3));
    var_27 = ((max(var_11, var_6)));
    #pragma endscop
}
