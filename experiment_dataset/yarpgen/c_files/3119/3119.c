/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3119
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3119 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3119
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                arr_7 [i_0] [i_1] [i_0] = ((-((var_9 ? (1015418315487773705 != 27) : (min((arr_3 [i_0]), (arr_6 [i_0])))))));
                arr_8 [i_0] = (2233835047 | 2233835020);
                arr_9 [11] = ((((max(32495, 6))) ? -6 : 9));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 1; i_2 < 20;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 0;i_3 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_4 = 1; i_4 < 20;i_4 += 1)
                {
                    for (int i_5 = 1; i_5 < 20;i_5 += 1)
                    {
                        {
                            arr_19 [i_5] [i_5] [i_2] [i_5] = ((-11 ? (((max(33473, 6)))) : 2061132254));
                            arr_20 [10] [i_2] [19] [19] = ((((var_0 ? var_16 : (arr_16 [1] [i_4 + 2] [i_2] [i_5 - 1]))) <= (((!(arr_18 [i_4 + 1] [i_4 - 1] [i_5] [i_5 - 1] [i_5]))))));

                            for (int i_6 = 2; i_6 < 20;i_6 += 1)
                            {
                                arr_25 [6] [i_3 + 1] [i_2] [i_3 + 1] [i_3] [2] [i_3] = ((!((min((arr_10 [i_2] [i_5 - 1]), (arr_12 [i_2] [i_3]))))));
                                arr_26 [i_3] [8] [i_2] [i_5] [12] = (1 >> ((((min(1, -18))) + 42)));
                            }
                            for (int i_7 = 1; i_7 < 18;i_7 += 1)
                            {
                                arr_29 [6] [i_3 + 1] [20] [6] [4] = ((arr_10 [1] [1]) ? (min((arr_13 [10] [10]), ((var_14 ? var_5 : 2208499295)))) : (min(3591607203, var_3)));
                                arr_30 [i_7 + 1] [1] [1] [1] [i_2] = var_12;
                                arr_31 [i_2] [i_3] [i_3] [i_2] [i_5] [i_5] [i_7] = (max((max(2086468019, 3591607203)), ((min((arr_17 [i_5 + 2] [i_4 - 1] [i_4 + 1] [i_2 - 1]), 513012645)))));
                            }
                            arr_32 [i_2] [i_2] [i_4 - 1] [i_2] = (-8 / 33);
                        }
                    }
                }
                arr_33 [i_2 + 2] [i_2 + 1] [14] = ((var_8 ? (((((!18) || (!var_16))))) : (((((-8 ^ (arr_28 [8] [i_3] [12] [i_3] [12])))) ? ((var_2 ? var_5 : var_5)) : (((max((arr_27 [1] [1]), 1))))))));
                arr_34 [i_2] = max(var_11, var_16);
            }
        }
    }
    var_19 = (((((((var_13 ? var_13 : var_5))) ? 65528 : var_8))) ? (var_13 >= 17592186044414) : var_7);
    var_20 = (max(2208499276, 1));
    #pragma endscop
}
