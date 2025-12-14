/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232235
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232235 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232235
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (!var_9);
    var_15 = ((var_4 ? -19 : (~var_0)));

    for (int i_0 = 3; i_0 < 17;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 19;i_1 += 1) /* same iter space */
        {
            arr_4 [i_0] [5] = ((max(1870112789, (arr_3 [i_0 - 2] [i_1]))));
            var_16 = (((!((max((arr_3 [i_0] [i_0 + 1]), 0))))));
            var_17 -= ((-24334 == ((max(-34, 22)))));
            arr_5 [15] = ((!((min((arr_3 [i_0 - 1] [i_0 + 2]), 9533)))));
        }
        for (int i_2 = 0; i_2 < 19;i_2 += 1) /* same iter space */
        {
            var_18 = ((1617088753 > ((4005 ? (arr_2 [i_0 + 2]) : (arr_2 [i_0 - 3])))));

            for (int i_3 = 2; i_3 < 15;i_3 += 1)
            {

                for (int i_4 = 2; i_4 < 17;i_4 += 1)
                {
                    var_19 ^= (max((max(var_0, (arr_12 [i_4] [i_4 + 2] [i_4 + 2] [i_0 + 1] [i_0]))), 21));
                    var_20 -= (((max(1, 205670666))));
                }
                for (int i_5 = 4; i_5 < 17;i_5 += 1)
                {

                    for (int i_6 = 0; i_6 < 19;i_6 += 1)
                    {
                        var_21 = ((+(min((arr_17 [i_3 + 1] [i_5] [i_5 + 2] [i_3 + 1] [i_0] [i_0]), ((min(1024, 65535)))))));
                        arr_20 [i_2] [i_3 - 1] [i_3 - 1] = (arr_17 [i_6] [i_2] [i_3] [i_5 - 3] [i_6] [12]);
                        arr_21 [i_6] [i_5] [i_3] [i_0] [i_0] = var_10;
                        var_22 = (max(var_22, 351036488));
                    }
                    arr_22 [i_0] [i_0] [i_0] [i_0 - 1] = (1235883732 && 1235883735);
                    var_23 = (max(var_23, (((-((((1 ? 2143738366 : 8881387970271391605)))))))));
                }
                for (int i_7 = 0; i_7 < 19;i_7 += 1)
                {
                    arr_26 [i_0 - 2] [i_2] [i_2] [i_7] [i_0] = ((max(94146617, (arr_19 [i_7] [i_3 - 2] [i_2] [i_0 - 3]))));
                    arr_27 [7] [i_3] [i_2] [i_0] = ((~(arr_11 [i_0 - 3] [i_0])));
                    var_24 = 1;
                }
                arr_28 [i_3] [i_2] [1] = (((-(arr_17 [12] [i_3 - 2] [i_2] [i_0 + 2] [1] [i_0]))));
            }
            for (int i_8 = 0; i_8 < 19;i_8 += 1)
            {
                arr_32 [i_0] [i_2] [i_8] [i_8] = ((~((((!1) > 1125899906842368)))));
                var_25 = (((~((138 ? 1125899906842368 : 2250388088)))));
                var_26 -= (!7793317089673242976);
            }
        }
        var_27 = (min(var_13, (max(((254 ? var_8 : 1)), 9565356103438160024))));
    }
    var_28 = min(((max(((4777525597783028118 ? var_13 : 344059780)), var_5))), var_0);
    #pragma endscop
}
