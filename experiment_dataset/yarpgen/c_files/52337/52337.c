/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52337
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52337 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52337
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_11 = (((((((arr_0 [18]) || ((((arr_2 [i_0]) | (arr_0 [i_0])))))))) % var_0));
        arr_3 [15] = (arr_0 [i_0]);

        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            arr_6 [i_0] [3] = (((((~23) % var_10))) ? (arr_0 [1]) : (((((arr_0 [9]) ? var_2 : (arr_0 [i_0]))))));

            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                var_12 += (max((arr_1 [7] [i_2]), (((arr_4 [1] [3]) ? ((((arr_0 [14]) - (arr_4 [1] [8])))) : (max(4294967295, 12661522679498962951))))));
                arr_9 [i_1] = (((arr_5 [i_2] [18] [i_0]) * (arr_1 [1] [16])));
                var_13 = (arr_0 [i_0]);
            }
            for (int i_3 = 2; i_3 < 18;i_3 += 1)
            {
                arr_14 [13] [8] [i_3] = ((~((((max((arr_0 [i_3]), (arr_2 [1])))) ^ (arr_2 [i_1])))));
                arr_15 [12] [12] [7] = (((((arr_12 [i_3 - 1] [i_3 + 1] [i_3]) | (arr_12 [i_3 - 2] [i_3 - 1] [14]))) << (((arr_7 [8] [1] [13] [7]) - 109))));
            }
            arr_16 [6] = (arr_8 [17] [i_1]);
        }

        for (int i_4 = 0; i_4 < 19;i_4 += 1)
        {

            for (int i_5 = 0; i_5 < 1;i_5 += 1)
            {
                arr_21 [i_4] [18] = ((-(((!(arr_2 [3]))))));
                arr_22 [i_0] |= (min(((~(arr_0 [i_0]))), (max((arr_8 [i_5] [8]), var_6))));
            }
            for (int i_6 = 3; i_6 < 18;i_6 += 1)
            {
                var_14 *= (min((arr_10 [7] [i_6] [i_6 - 2] [i_6]), (arr_26 [i_0] [4] [i_0])));
                var_15 = ((2889349627 ? 1405617668 : 419298180486210898));
                var_16 = (max(((((((arr_5 [i_0] [i_4] [15]) <= (arr_20 [13] [3] [3]))) ? (!var_4) : (arr_0 [11])))), ((((-(arr_24 [5] [10] [i_6] [4]))) - (arr_10 [10] [6] [i_4] [i_6])))));
                arr_27 [i_6] [i_6] [i_0] = (max(((((!var_0) && (arr_17 [i_6 - 1] [i_6])))), (arr_10 [5] [13] [i_6 + 1] [0])));
            }
            arr_28 [i_0] [9] [13] = (max(-3628541284, (((141 | ((max((arr_26 [3] [9] [i_4]), (arr_2 [3])))))))));
            var_17 = (min(var_17, var_8));
        }
        for (int i_7 = 0; i_7 < 1;i_7 += 1) /* same iter space */
        {
            arr_31 [i_7] [i_7] [1] = ((((max(134201344, (arr_17 [i_0] [i_0])))) ? 60 : (((arr_17 [1] [i_7]) / (arr_10 [i_0] [i_7] [i_0] [12])))));
            arr_32 [i_7] [i_0] [i_0] = (min((((arr_30 [i_7] [17] [i_0]) ? (arr_23 [i_0] [4] [i_7]) : (arr_26 [i_0] [i_7] [i_0]))), var_7));
            arr_33 [i_0] |= ((!(arr_13 [1] [i_7] [i_0] [15])));
        }
        for (int i_8 = 0; i_8 < 1;i_8 += 1) /* same iter space */
        {
            var_18 = var_6;
            arr_37 [5] = (((!var_8) ? (((max((arr_4 [0] [4]), (arr_4 [i_0] [8]))))) : (~1)));
        }
        arr_38 [1] = ((~(!var_6)));
    }

    for (int i_9 = 4; i_9 < 16;i_9 += 1)
    {
        arr_43 [9] = var_2;
        arr_44 [7] = ((!(((-((max((arr_25 [i_9] [6] [7] [11]), (arr_10 [10] [13] [i_9] [1])))))))));
        arr_45 [i_9] = var_1;
        arr_46 [13] = (((((arr_10 [11] [i_9] [9] [i_9]) ? (((max((arr_0 [12]), (arr_25 [18] [i_9] [14] [10]))))) : (max((arr_19 [i_9] [1] [i_9]), var_10)))) + (arr_1 [i_9 - 4] [i_9])));
    }
    #pragma endscop
}
