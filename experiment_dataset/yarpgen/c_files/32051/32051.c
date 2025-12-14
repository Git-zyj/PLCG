/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32051
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32051 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32051
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 1; i_2 < 16;i_2 += 1)
                {

                    for (int i_3 = 0; i_3 < 19;i_3 += 1) /* same iter space */
                    {
                        var_10 = -4014242663;
                        arr_10 [i_3] [i_1] = (((((arr_8 [i_3] [i_2 - 1] [i_1] [i_0]) & -5))) ? ((var_5 / (arr_7 [i_0] [i_1] [i_1]))) : (var_4 >= 4));
                    }
                    for (int i_4 = 0; i_4 < 19;i_4 += 1) /* same iter space */
                    {
                        arr_13 [i_0] [i_1] [i_2 + 2] = (arr_9 [i_0] [i_2 + 3] [i_0] [i_2] [i_2 + 3]);
                        arr_14 [i_0] [i_0] [i_0] [i_0] [i_0] = ((((var_9 ? -6 : (arr_2 [i_4] [i_1]))) + (arr_7 [i_2 - 1] [i_2] [i_2 + 3])));
                        arr_15 [i_0] [i_0] [i_0] [1] &= (((var_9 ? var_7 : (arr_1 [i_4]))));
                        var_11 = ((1 ? var_9 : 3647628259));
                    }

                    for (int i_5 = 3; i_5 < 17;i_5 += 1)
                    {
                        arr_18 [i_0] = ((~(arr_0 [i_2 + 1])));
                        arr_19 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = (arr_0 [i_2]);
                    }
                    var_12 += ((var_6 ? (arr_8 [i_2 + 3] [i_0] [i_0] [i_0]) : (arr_6 [i_0] [i_2])));
                    arr_20 [i_0] = (arr_7 [i_2 - 1] [i_2 + 1] [i_2 - 1]);
                    var_13 = (((!3904709871) ? 21816 : (arr_2 [i_0] [1])));
                }
                arr_21 [i_1] = ((2138628483 * ((-(((3647628259 > (arr_17 [13] [i_1] [i_0] [12] [i_1] [i_1]))))))));
                var_14 = ((((((arr_4 [i_0] [i_0]) ? ((max((arr_0 [10]), (arr_8 [1] [i_1] [i_1] [1])))) : (((arr_6 [i_0] [i_1]) / (arr_12 [i_0] [i_0] [i_1] [i_1] [18] [i_0])))))) ? 1 : (((!(2895234909 % var_7))))));
                arr_22 [i_1] = (min((((((var_8 ? (arr_9 [i_0] [i_1] [i_1] [i_0] [i_0]) : 344809851))) ? (-1565124771 > var_6) : ((-(arr_17 [i_0] [i_0] [i_0] [i_0] [i_0] [i_1]))))), ((((arr_12 [i_0] [i_1] [i_1] [i_1] [i_0] [i_0]) ? ((min(0, 5286))) : ((-(arr_3 [i_0]))))))));
            }
        }
    }
    var_15 = ((-(var_2 + var_0)));
    #pragma endscop
}
