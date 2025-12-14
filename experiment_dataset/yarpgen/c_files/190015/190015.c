/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190015
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190015 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190015
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = 1;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    arr_9 [i_1] [i_0] = var_11;
                    var_13 = (min((((!(arr_2 [i_0])))), var_2));
                    var_14 = (max(253, 3));
                    var_15 = (max(var_15, (~var_1)));
                    var_16 = ((~(arr_8 [16] [i_0] [i_1 - 3] [i_1])));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 18;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 18;i_4 += 1)
        {
            {
                arr_16 [i_3] [i_3] [i_3] = (((((-(((arr_14 [i_3]) ? var_5 : 132))))) ? (min(((-42 ? var_1 : 866754897)), (arr_15 [i_3] [2] [i_4]))) : ((((arr_11 [i_3]) ^ var_8)))));

                for (int i_5 = 2; i_5 < 17;i_5 += 1) /* same iter space */
                {
                    var_17 = (min(var_17, ((max((var_10 & var_3), (max(0, 1)))))));
                    arr_21 [i_4] = (arr_18 [i_5] [i_5 - 1] [i_5] [i_5 - 1]);
                    var_18 = (((arr_17 [i_5 - 1] [i_5 - 2] [i_5 - 1] [i_5 - 2]) >= (arr_17 [i_5 + 1] [i_5 + 1] [i_5 - 2] [i_5])));
                    arr_22 [i_3] [11] [4] = ((!(arr_10 [i_3] [i_3])));
                }
                for (int i_6 = 2; i_6 < 17;i_6 += 1) /* same iter space */
                {
                    arr_26 [i_4] = var_11;
                    arr_27 [i_3] [i_4] [2] = var_0;
                }
                for (int i_7 = 0; i_7 < 1;i_7 += 1)
                {
                    arr_31 [i_3] [i_3] [i_7] = (((arr_12 [i_3] [i_3]) ? (arr_18 [i_3] [i_3] [i_3] [i_3]) : var_7));
                    var_19 = (-127 - 1);
                }
            }
        }
    }
    var_20 = (((((var_7 ? ((var_2 ? var_10 : var_2)) : var_8))) ? (!7012) : var_2));
    var_21 += var_6;
    #pragma endscop
}
