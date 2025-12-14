/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43301
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43301 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43301
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_17;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 9;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 13;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 13;i_4 += 1)
                        {
                            {
                                arr_17 [i_1] [i_4] [12] [i_1 + 1] [i_2] [i_1 + 1] [i_1] = var_0;
                                var_20 = (((arr_1 [i_2]) ? ((((!(arr_6 [i_0 - 2] [i_0 - 1] [0]))))) : (arr_2 [i_3])));
                                var_21 *= (arr_5 [i_0] [3] [3]);
                                arr_18 [i_4] [i_1] [i_1] [1] [i_1] = ((((min((arr_13 [i_4] [i_1 + 4] [1] [i_1] [i_4]), (((arr_0 [i_4]) ? (arr_9 [9] [1] [i_1]) : (arr_9 [i_0] [i_2] [i_2])))))) ? ((min((arr_3 [i_0] [i_0]), (arr_13 [i_0 - 1] [i_1 + 3] [i_1 + 3] [i_1] [i_3 + 1])))) : (min((arr_14 [1] [1] [1] [1]), var_15))));
                                var_22 = ((((var_17 ? (arr_0 [i_0 - 2]) : (arr_2 [i_0 + 1]))) % (max((((-(arr_4 [i_1 - 1] [i_0])))), -1))));
                            }
                        }
                    }
                    var_23 = min(((((min(var_13, -17489))))), (min(var_18, (arr_10 [i_0] [i_0] [i_0] [2]))));
                }
                for (int i_5 = 0; i_5 < 13;i_5 += 1) /* same iter space */
                {
                    arr_21 [i_1] [i_0] [i_0] = ((!(((((max(-17477, (arr_12 [2] [i_5])))) * var_12)))));
                    arr_22 [i_1] [i_1] = (min(((max((arr_6 [i_1 + 4] [i_1] [i_1 + 3]), (arr_6 [i_1 + 2] [i_1 - 2] [i_1 + 1])))), var_1));
                    arr_23 [i_1] [i_1] [i_1] = 18446744073709551611;
                }
                for (int i_6 = 0; i_6 < 13;i_6 += 1) /* same iter space */
                {
                    var_24 = (max((-32767 - 1), ((5 ? var_15 : var_17))));
                    var_25 = ((((min((arr_1 [i_1 - 2]), (arr_1 [i_1 - 2])))) >> (!var_16)));
                }
                var_26 |= (min((max((arr_8 [10] [10] [2] [i_1]), (((arr_11 [i_1 - 1] [i_1] [4] [i_0]) ? var_4 : (arr_10 [0] [i_1 + 1] [i_0] [i_0]))))), (((!(arr_2 [i_0 - 2]))))));
                var_27 = (((arr_25 [i_0] [12] [0] [12]) ? (((min((arr_24 [i_0] [i_1] [i_0 + 1]), ((var_6 < (arr_2 [i_1]))))))) : (arr_19 [i_1] [i_1] [i_1])));
                arr_27 [i_0] [i_1] = 1;
            }
        }
    }
    #pragma endscop
}
