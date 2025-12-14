/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204484
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204484 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204484
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 10;i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] = ((!((((2032 ? 5284 : 48))))));

        /* vectorizable */
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            arr_6 [i_0] = (arr_2 [i_0] [i_0]);
            arr_7 [i_0] [i_1] = (((arr_4 [i_0] [i_0] [i_1]) ? (((5284 + (arr_5 [i_0] [i_1] [i_1])))) : (arr_0 [i_0])));
            var_13 = ((-(((arr_0 [i_0]) * 208))));
            var_14 = ((~(arr_5 [i_0] [i_1] [i_0])));
        }
    }
    for (int i_2 = 3; i_2 < 10;i_2 += 1) /* same iter space */
    {
        arr_10 [i_2] = (arr_9 [i_2 - 2] [i_2]);
        arr_11 [i_2] = (!0);
    }
    for (int i_3 = 3; i_3 < 10;i_3 += 1) /* same iter space */
    {

        /* vectorizable */
        for (int i_4 = 1; i_4 < 11;i_4 += 1)
        {

            for (int i_5 = 0; i_5 < 1;i_5 += 1)
            {
                arr_21 [i_3] [i_3] [i_5] = (arr_5 [i_3] [i_3 - 2] [i_4 - 1]);

                for (int i_6 = 3; i_6 < 12;i_6 += 1) /* same iter space */
                {
                    arr_24 [i_3] [i_4] = ((29 ? 4194303 : 8935141660703064064));
                    var_15 = (arr_23 [i_3] [i_3 - 2] [i_3]);
                    arr_25 [i_3] [i_3] = var_2;
                }
                for (int i_7 = 3; i_7 < 12;i_7 += 1) /* same iter space */
                {
                    arr_30 [i_3] [i_3] = var_10;

                    for (int i_8 = 0; i_8 < 1;i_8 += 1)
                    {
                        var_16 = ((!(arr_9 [i_4 + 1] [i_4 + 1])));
                        arr_34 [i_3] [i_3] = (arr_26 [i_3] [i_3] [i_5] [i_3] [i_5]);
                        var_17 = ((4826764015681937564 ? (arr_15 [i_3] [i_3 - 1] [i_4 + 2]) : -4826764015681937564));
                        arr_35 [i_3] [i_4] [i_5] [i_3] [i_7] [i_8] = (i_3 % 2 == zero) ? (((arr_17 [0] [i_3] [i_7]) << (4290773014 - 22))) : (((((arr_17 [0] [i_3] [i_7]) + 9223372036854775807)) << (4290773014 - 22)));
                    }
                    arr_36 [i_3] = (arr_8 [i_3 - 1]);
                    var_18 = var_6;
                }
                for (int i_9 = 1; i_9 < 12;i_9 += 1)
                {
                    arr_39 [i_9] [i_3] [10] [i_3] [i_3] [i_3 - 3] = 5560007501447320675;
                    var_19 = (arr_2 [i_3] [i_3 - 1]);
                    var_20 = (arr_26 [i_3] [i_4] [i_3 + 1] [i_9 + 1] [i_4 + 1]);
                }
            }
            var_21 = ((((arr_0 [i_3]) ? -8326 : (arr_29 [0] [i_4] [i_3]))));
            arr_40 [i_3] = -29377;
        }
        arr_41 [i_3] = (arr_15 [i_3] [i_3] [i_3]);
        arr_42 [i_3] = 0;
    }
    var_22 = ((min((((9040854515501866608 ? var_3 : var_8))), var_4)));
    var_23 = ((((min(43, 28808))) / (((var_9 ? var_11 : var_12)))));
    #pragma endscop
}
