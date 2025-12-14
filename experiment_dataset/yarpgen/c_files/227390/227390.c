/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227390
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227390 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227390
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

                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {

                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        var_20 = ((var_5 >= (((((var_14 ? (arr_2 [i_0] [i_0]) : var_0))) ? var_10 : (arr_0 [1])))));
                        arr_8 [i_0] [i_0] = var_11;
                        arr_9 [i_0] [i_1] [15] [i_3] = ((-((((arr_4 [i_2]) || ((max(var_0, -32739))))))));

                        for (int i_4 = 0; i_4 < 19;i_4 += 1)
                        {
                            var_21 = (((!1720079377) >= (!140)));
                            arr_13 [i_0] [i_1] [i_2] [i_0] [i_3] [i_4] = (-(arr_10 [i_4] [i_1] [i_1] [i_2] [i_1] [i_0]));
                        }
                    }
                    for (int i_5 = 0; i_5 < 19;i_5 += 1)
                    {
                        arr_17 [i_0] [i_0] = (min(-32, -4258));
                        arr_18 [i_0] [i_1] [i_2] [i_5] = (((((arr_10 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) >= var_1)) && ((min(3584, -3225214366815438121)))));
                    }
                    var_22 = (arr_16 [i_0] [i_0] [i_1] [i_2]);
                    arr_19 [i_0] [i_1] [i_2] [i_1] = (-3225214366815438124 >= 3225214366815438118);
                }
                var_23 |= (((arr_3 [i_1] [i_0]) - (arr_3 [i_0] [i_1])));
                arr_20 [2] [i_0] |= (arr_6 [i_1] [i_1] [i_1] [i_1] [i_1] [18]);
                arr_21 [i_0] = 48359;
            }
        }
    }

    for (int i_6 = 0; i_6 < 25;i_6 += 1)
    {
        var_24 = (max(((max(var_12, ((((arr_25 [i_6]) || var_0)))))), var_16));
        arr_26 [i_6] = arr_25 [15];
    }
    for (int i_7 = 1; i_7 < 15;i_7 += 1)
    {

        for (int i_8 = 1; i_8 < 17;i_8 += 1)
        {
            arr_33 [i_7 - 1] [i_8] [i_8] = ((-(arr_2 [i_8] [18])));
            arr_34 [i_7] = (((max(var_18, var_10))));
        }
        arr_35 [i_7 - 1] = (((~65385) ? var_17 : (((arr_15 [9] [i_7] [i_7 + 3] [i_7] [i_7] [i_7]) ? (arr_15 [i_7] [i_7] [i_7 - 1] [i_7] [i_7] [i_7]) : var_5))));
    }
    for (int i_9 = 2; i_9 < 10;i_9 += 1)
    {
        var_25 = ((((max((((arr_24 [i_9 - 2] [i_9]) ? (arr_39 [i_9]) : var_11)), ((min((arr_27 [i_9]), (arr_4 [i_9]))))))) ? (arr_39 [i_9]) : (arr_1 [i_9])));
        var_26 = (min((!var_14), (((((var_9 <= (arr_30 [i_9] [17])))) > ((max(var_10, (arr_5 [i_9] [i_9] [i_9]))))))));
        var_27 = ((-((max(16, 55)))));
        arr_40 [8] = (min(((var_13 ? 885308932 : var_13)), (((220654143 ? 6196966769480404146 : -96)))));
        arr_41 [3] = ((var_14 ? 3225214366815438105 : 14887975288068666460));
    }
    var_28 = (max((((-var_14 || ((max(var_4, var_13)))))), (max(-3225214366815438113, var_3))));
    var_29 = (~var_10);
    #pragma endscop
}
