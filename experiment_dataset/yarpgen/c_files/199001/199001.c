/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199001
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199001 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199001
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_1;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 13;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        {
                            arr_10 [i_1] = (!var_14);
                            var_16 = (((~var_13) ? (arr_3 [i_1] [i_0] [i_1]) : var_4));
                        }
                    }
                }
                arr_11 [i_1] [i_1] [i_1] = ((~(max(var_7, var_0))));

                for (int i_4 = 4; i_4 < 13;i_4 += 1) /* same iter space */
                {
                    var_17 |= (-1 | -1);
                    arr_16 [i_1] [i_1] [i_4] = ((((!(arr_6 [15] [i_1]))) ? (max(var_4, ((30122706162455443 ? var_13 : -1)))) : ((((((39879 << (var_5 + 3418104403120170677)))) <= (min(5192071887653827740, 5330752549205087257)))))));
                }
                for (int i_5 = 4; i_5 < 13;i_5 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_6 = 4; i_6 < 15;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 16;i_7 += 1)
                        {
                            {
                                arr_24 [i_5] [i_5] [i_5] [i_5] [i_5] [i_1] = (-var_11 ? (arr_4 [i_1]) : ((((arr_13 [i_1] [i_1] [i_5] [i_6 + 1]) ? var_2 : (arr_23 [i_0] [i_1 - 3] [i_7] [i_1] [i_1])))));
                                var_18 = arr_7 [i_1] [i_1];
                            }
                        }
                    }
                    arr_25 [i_0] [i_0] [i_1] = (min(85073830027213705, 8281914099904825147));
                    /* LoopNest 2 */
                    for (int i_8 = 1; i_8 < 15;i_8 += 1)
                    {
                        for (int i_9 = 3; i_9 < 12;i_9 += 1)
                        {
                            {
                                var_19 = (min(var_19, (((-6887 ? 2721734782585807122 : -20721)))));
                                var_20 = ((18446744073709551615 & (3447427399475639760 % 11463)));
                            }
                        }
                    }
                }
            }
        }
    }
    var_21 = -1;
    var_22 = var_5;
    #pragma endscop
}
