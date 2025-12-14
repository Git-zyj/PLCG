/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3818
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3818 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3818
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 *= ((((max(((max(154, 52413))), (var_5 ^ 52430)))) > var_8));
    var_15 &= ((((((var_10 ? var_3 : var_2))) ? ((max(16, 36))) : -83)));

    for (int i_0 = 4; i_0 < 20;i_0 += 1)
    {
        var_16 = ((((((!(!13136))))) ^ ((~((var_11 % (arr_1 [i_0])))))));

        /* vectorizable */
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 24;i_3 += 1)
                {
                    {
                        arr_8 [i_2] = (var_3 > -106);
                        var_17 ^= (2891 ^ 96);
                        var_18 = ((var_8 % ((~(arr_6 [i_1] [i_1] [i_1] [i_1])))));
                        arr_9 [i_0] [i_2] [i_3] = (103 ^ 21);
                    }
                }
            }
            var_19 += (arr_5 [i_1] [i_1] [i_0 - 3]);
            var_20 = ((-59165 ^ (((arr_5 [i_0] [i_0] [i_1]) ^ (arr_7 [i_0] [i_1] [i_1] [i_1] [i_1])))));
            var_21 = (((arr_2 [i_1] [i_1] [i_1]) ? var_0 : (arr_2 [i_0 + 2] [i_1] [i_0 - 4])));
        }
        for (int i_4 = 1; i_4 < 22;i_4 += 1)
        {
            var_22 &= var_10;
            var_23 = (!25);
        }
        for (int i_5 = 0; i_5 < 24;i_5 += 1) /* same iter space */
        {

            /* vectorizable */
            for (int i_6 = 0; i_6 < 24;i_6 += 1)
            {
                var_24 *= (!var_3);
                var_25 = (max(var_25, (((var_2 ^ (((-95 ? -2 : var_1))))))));
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 24;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 24;i_8 += 1)
                    {
                        {
                            arr_23 [i_0] [i_0] [i_0 - 1] = (((arr_5 [i_0] [i_0 + 4] [i_0 + 4]) ^ (arr_5 [i_0 - 2] [i_0 + 2] [i_8])));
                            var_26 = (((arr_5 [i_0 + 2] [i_0 - 2] [i_0 - 2]) ^ (((arr_6 [i_0] [i_0 + 3] [i_0] [i_0]) ? var_8 : 9655162613912031253))));
                        }
                    }
                }
            }
            /* LoopNest 3 */
            for (int i_9 = 3; i_9 < 22;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 24;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 24;i_11 += 1)
                    {
                        {
                            arr_32 [i_0] [i_0 + 3] = var_9;
                            var_27 = ((13134 >> (247 - 232)));
                        }
                    }
                }
            }
            arr_33 [i_0 - 3] = (((((((arr_26 [i_0] [i_0 - 4] [i_0] [i_0 + 2]) + 2147483647)) >> 21)) > (((max(var_13, -82))))));
        }
        for (int i_12 = 0; i_12 < 24;i_12 += 1) /* same iter space */
        {
            var_28 = ((~(arr_35 [i_0] [i_0 - 1] [i_12])));
            var_29 = (max(((((max(var_10, -105))) ? (((max(103, -8)))) : (7853107305010304215 ^ 5017212881664732460))), (((16 ? var_13 : (arr_36 [i_0 - 3]))))));
        }
        arr_37 [i_0] = (min((max((arr_14 [i_0 + 3] [i_0 - 4] [i_0]), var_9)), ((max((arr_14 [i_0] [i_0 + 3] [i_0]), (arr_14 [i_0] [i_0 + 4] [i_0]))))));
    }
    var_30 *= (((max((max(var_2, var_4)), var_0)) ^ (-var_12 ^ var_9)));
    #pragma endscop
}
