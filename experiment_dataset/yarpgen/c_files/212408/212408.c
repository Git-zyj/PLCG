/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212408
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212408 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212408
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_14;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_21 += ((-((((arr_4 [i_1]) || (arr_4 [i_1]))))));
                var_22 = (max(var_22, ((min((arr_2 [i_0] [i_0] [i_1]), ((~(arr_2 [i_1] [i_0] [i_1]))))))));
                var_23 = (min(var_23, (((((((arr_4 [i_1]) <= (arr_2 [i_0] [i_0] [i_1])))) < ((((arr_5 [i_1] [i_1] [i_0]) != ((((arr_0 [i_0]) == (arr_1 [i_0]))))))))))));
                arr_6 [i_1] [i_1] = (min(((min((max((arr_3 [i_1] [i_0] [i_1]), (arr_4 [i_1]))), ((((arr_2 [i_0] [i_1] [i_1]) != (arr_4 [i_0]))))))), (min((arr_3 [i_1] [1] [i_1]), (((arr_3 [i_1] [13] [13]) * (arr_0 [i_0])))))));

                for (int i_2 = 0; i_2 < 17;i_2 += 1) /* same iter space */
                {
                    arr_9 [i_1] = (max((min((((arr_2 [i_0] [i_1] [7]) / (arr_1 [i_0]))), (arr_3 [i_1] [i_1] [i_1]))), (arr_0 [i_1])));
                    var_24 ^= ((-(((arr_4 [i_0]) ^ (arr_4 [i_1])))));
                }
                for (int i_3 = 0; i_3 < 17;i_3 += 1) /* same iter space */
                {
                    arr_12 [i_3] [i_1] [i_0] = (((arr_4 [i_0]) | ((min((arr_7 [i_1] [i_1] [i_1] [i_1]), (arr_7 [i_3] [i_1] [i_1] [i_0]))))));
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 17;i_4 += 1)
                    {
                        for (int i_5 = 2; i_5 < 16;i_5 += 1)
                        {
                            {
                                var_25 = (max(var_25, ((min(0, 8)))));
                                var_26 = ((min(17395089046556312082, 4294967295)) * ((((!((((arr_18 [i_0] [i_1] [i_3] [i_0] [i_4] [i_5]) + (arr_8 [i_0] [i_3] [8] [i_1])))))))));
                                var_27 = (max(127, -82));
                                var_28 = (((min((arr_16 [i_1] [i_3]), (arr_16 [i_0] [i_5]))) >> (((arr_16 [i_5 + 1] [i_5 - 1]) / (((~(arr_13 [i_0] [i_0] [i_1] [i_0]))))))));
                            }
                        }
                    }
                    var_29 = (max(0, 3996));
                }
                for (int i_6 = 0; i_6 < 17;i_6 += 1) /* same iter space */
                {
                    var_30 = (min((arr_19 [i_0] [i_1] [i_6]), ((((arr_7 [i_0] [i_1] [i_6] [i_0]) != (arr_7 [i_6] [i_1] [i_6] [i_6]))))));
                    var_31 = ((((max((((arr_7 [i_0] [i_1] [4] [i_6]) - (arr_10 [i_0] [i_1] [i_6]))), ((((arr_7 [i_6] [i_1] [i_1] [3]) != (arr_2 [i_6] [i_1] [i_0]))))))) / ((~(arr_16 [i_6] [i_1])))));
                    var_32 = (max((min((arr_16 [i_0] [i_1]), ((((arr_0 [i_1]) != (arr_20 [i_6] [5])))))), ((max((arr_7 [i_0] [i_1] [i_6] [i_6]), (((!(arr_20 [i_0] [i_1])))))))));
                }
            }
        }
    }
    var_33 = var_8;
    var_34 = ((-(var_13 | var_15)));
    var_35 += (max((((!(var_2 / var_4)))), (max((var_6 & var_8), var_16))));
    #pragma endscop
}
