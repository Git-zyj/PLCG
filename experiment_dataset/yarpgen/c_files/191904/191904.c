/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191904
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191904 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191904
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {

        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            var_20 = (max(var_20, (((-(arr_3 [i_0] [i_1]))))));

            for (int i_2 = 2; i_2 < 21;i_2 += 1)
            {
                arr_8 [i_0] [i_2] [i_1] [i_1] = (arr_5 [i_0] [2] [2]);
                var_21 = (arr_0 [i_2 - 1]);
            }
            for (int i_3 = 1; i_3 < 18;i_3 += 1)
            {
                var_22 = (arr_4 [i_3 + 4] [i_0 + 2]);

                for (int i_4 = 1; i_4 < 19;i_4 += 1)
                {
                    arr_13 [i_0] [17] [i_1] [i_3 + 1] [17] |= (arr_2 [i_0 + 2]);
                    var_23 = var_14;
                }
                arr_14 [i_0] [i_1] [i_3] = (arr_9 [i_3 + 4] [i_1] [i_1 - 1] [i_0]);
                var_24 *= ((arr_3 [i_1 + 3] [i_0 + 1]) ? (!13333848769711503307) : (arr_9 [i_3] [i_3] [i_3] [i_3]));
            }
        }
        var_25 |= (arr_0 [i_0 + 2]);
    }

    /* vectorizable */
    for (int i_5 = 3; i_5 < 18;i_5 += 1) /* same iter space */
    {
        var_26 = (min(var_26, (arr_18 [i_5])));
        arr_19 [i_5] = ((4294967295 ? (arr_18 [i_5]) : 1385855725));
        arr_20 [i_5] = (arr_17 [i_5] [i_5 + 2]);
    }
    for (int i_6 = 3; i_6 < 18;i_6 += 1) /* same iter space */
    {
        var_27 |= ((-(((var_1 < (arr_22 [i_6] [i_6 - 2]))))));
        arr_23 [16] = (arr_12 [i_6] [i_6] [i_6] [i_6 - 1] [i_6]);
    }
    for (int i_7 = 3; i_7 < 18;i_7 += 1) /* same iter space */
    {
        arr_26 [i_7 + 4] [1] |= (((min((arr_16 [i_7] [i_7 - 3]), (arr_16 [i_7] [i_7 + 1]))) != ((min((arr_11 [i_7 - 2] [i_7 + 4] [i_7 + 2] [i_7 - 3]), var_15)))));
        arr_27 [i_7 + 2] = ((var_7 >= ((max(-1219817899, (arr_21 [i_7 - 2] [12]))))));
    }
    #pragma endscop
}
