/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39281
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39281 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39281
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 &= var_4;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                var_13 -= ((((min((arr_4 [i_0]), (arr_4 [i_1])))) <= ((max((min(var_3, var_3)), (((var_4 <= (arr_0 [i_0])))))))));
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        {

                            for (int i_4 = 1; i_4 < 16;i_4 += 1) /* same iter space */
                            {
                                arr_16 [10] [i_0] [i_3] [i_3] [i_1] [i_3] = ((var_11 >> (((max((arr_3 [7] [1] [i_4]), 935898750)) - 935898744))));
                                var_14 = (((min((min(var_9, (arr_10 [i_1] [i_2 - 2]))), (((arr_5 [i_2] [i_3] [i_4]) / (arr_2 [i_3]))))) <= ((((var_2 ? var_3 : (arr_10 [i_0] [1])))))));
                            }
                            for (int i_5 = 1; i_5 < 16;i_5 += 1) /* same iter space */
                            {
                                arr_21 [i_0] [i_0] [i_1] [i_1] [i_3] [i_5] &= (((1719529584 % -1170558462) || -var_6));
                                var_15 *= (!(!var_5));
                                var_16 = (max(var_16, ((min(((var_9 ? var_1 : var_2), (arr_15 [i_5] [i_3] [i_3] [i_2 + 3] [i_1] [i_1] [i_0])))))));
                                arr_22 [i_1] [i_1] [i_1] [i_5] = ((((min(var_2, var_5))) ? ((((arr_14 [i_0] [i_1] [i_2 + 2] [i_2] [i_5] [i_0]) > (((var_0 ? var_3 : var_7)))))) : ((((((arr_5 [i_0] [7] [i_0]) >> (arr_5 [i_1] [i_2] [i_2]))) < (((!(arr_3 [i_2] [i_2] [i_2])))))))));
                                var_17 = ((2575437737 ? 1719529584 : 2575437712));
                            }
                            for (int i_6 = 1; i_6 < 16;i_6 += 1) /* same iter space */
                            {
                                arr_26 [i_1] [i_1] [i_2] [1] [i_6] [i_1] [i_6] = max((!18), ((!(arr_11 [i_6] [i_6] [i_6 - 1] [i_6 + 1]))));
                                var_18 = ((((((!var_9) ? ((min((arr_5 [i_0] [16] [i_0]), var_7))) : (arr_17 [i_6] [i_6 + 2] [i_0] [i_6 + 2] [i_6 + 1])))) ? (min(var_8, ((1719529558 ? 185 : 56)))) : var_1));
                            }
                            for (int i_7 = 1; i_7 < 16;i_7 += 1) /* same iter space */
                            {
                                arr_29 [i_7] [i_3] [i_1] [i_1] [i_0] = (((min(var_9, ((var_2 ? (arr_13 [i_2 + 3] [i_2 + 3] [1] [i_3] [i_7] [i_2 + 3] [1]) : var_9)))) - (((((arr_24 [17]) ? var_5 : var_3))))));
                                arr_30 [i_1] [i_2] [i_3] [i_2] [i_1] [i_1] [i_0] = ((+(((var_0 % var_7) ? (arr_9 [i_2 + 2] [i_1] [i_7 + 2]) : (arr_14 [3] [i_1] [i_2] [i_1] [i_3] [i_7 + 2])))));
                            }
                            var_19 = (max(var_19, ((((((arr_19 [i_2 + 3]) == (((((arr_13 [i_0] [i_0] [i_1] [i_2] [i_0] [i_3] [i_0]) && var_2)))))) ? (min(((((arr_20 [i_0] [i_0] [i_1] [i_1] [i_2] [i_3] [i_3]) && var_2))), var_10)) : (max((arr_3 [i_2 + 3] [i_2] [i_2 + 3]), (((arr_13 [i_0] [i_0] [i_1] [i_2] [i_0] [i_2 + 2] [i_3]) / (arr_2 [i_1]))))))))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
