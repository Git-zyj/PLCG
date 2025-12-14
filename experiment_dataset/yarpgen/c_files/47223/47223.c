/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47223
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47223 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47223
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        var_13 = 70;
        arr_3 [i_0] = (-2147483647 - 1);
        var_14 = (arr_0 [i_0] [i_0]);
    }
    for (int i_1 = 0; i_1 < 24;i_1 += 1)
    {

        /* vectorizable */
        for (int i_2 = 1; i_2 < 22;i_2 += 1)
        {
            arr_8 [i_2] [i_2] = (arr_6 [i_2 - 1] [i_2 + 2] [i_2 + 2]);
            var_15 = (((arr_6 [i_1] [i_1] [i_1]) ? (((arr_7 [i_1] [i_2] [i_1]) ? 9 : (arr_5 [i_2] [i_2]))) : (arr_7 [i_1] [i_2] [i_2])));
        }

        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {

            for (int i_4 = 0; i_4 < 24;i_4 += 1) /* same iter space */
            {
                arr_13 [i_1] [i_1] [i_1] [i_1] = 7079850110371822568;
                var_16 = (max((max(-var_1, var_3)), (arr_10 [11] [11])));
                arr_14 [i_4] = (max((+-63962), (arr_7 [2] [i_1] [i_4])));
                var_17 = (max((!var_2), (max((!var_8), var_10))));
            }
            for (int i_5 = 0; i_5 < 24;i_5 += 1) /* same iter space */
            {
                var_18 = (arr_16 [i_3] [i_3] [i_5]);
                arr_17 [i_1] [i_1] [i_1] [2] = 63962;

                for (int i_6 = 0; i_6 < 24;i_6 += 1)
                {
                    var_19 = ((((-(arr_7 [i_5] [i_1] [i_3]))) != ((((!(arr_5 [i_1] [1])))))));
                    var_20 -= 19957;
                }
                arr_21 [i_1] [i_3] [i_1] = ((((((((max(0, (arr_18 [i_1] [i_1] [1] [i_1] [21]))))) & 8160))) ? (((!((max((arr_5 [i_1] [i_3]), var_11)))))) : var_1));
            }
            arr_22 [1] = (((arr_9 [i_1] [i_1] [i_3]) / 54450));
            var_21 = var_5;
            var_22 = (arr_5 [5] [1]);
            var_23 = (~140736951484416);
        }
    }
    var_24 = ((var_10 ? ((-(var_12 < var_8))) : var_6));
    var_25 |= ((((max(var_6, var_6))) ? (-2147483647 - 1) : (((max(44503, var_6))))));
    var_26 -= var_2;
    #pragma endscop
}
