/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35287
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35287 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35287
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (~var_1);
    var_14 = (7434101342086839674 >= 0);
    var_15 -= var_4;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 12;i_1 += 1)
        {
            {
                arr_4 [i_1] [i_0] [i_0] = (((arr_1 [i_1 - 1]) ? (min(var_3, (((arr_0 [10]) ? var_8 : var_1)))) : (arr_3 [i_0])));

                for (int i_2 = 0; i_2 < 14;i_2 += 1)
                {
                    var_16 -= ((((min(var_11, (var_6 + var_8)))) >= (max(-1059955043, 5858915420533782402))));
                    arr_8 [i_0] [i_0] [1] = (min((~var_1), (~var_3)));
                }
                for (int i_3 = 0; i_3 < 14;i_3 += 1)
                {
                    var_17 &= ((((max((min(var_2, 24)), ((min(var_3, (arr_1 [i_3]))))))) ? (((arr_0 [i_1]) ? (max((arr_12 [i_0] [i_0] [i_0] [i_0]), var_9)) : ((max((arr_11 [i_0] [i_3] [i_3]), (arr_6 [i_0])))))) : var_2));
                    var_18 = var_3;
                }
            }
        }
    }

    for (int i_4 = 0; i_4 < 19;i_4 += 1)
    {
        var_19 = (min((arr_14 [i_4] [i_4]), (min((arr_13 [i_4]), (arr_14 [i_4] [i_4])))));
        var_20 += (min(var_11, ((min(var_11, (arr_15 [i_4]))))));
        var_21 = 744772885;
    }
    for (int i_5 = 0; i_5 < 10;i_5 += 1)
    {
        var_22 = (((!var_10) ? ((((min(var_8, (arr_6 [i_5])))) ? (arr_15 [i_5]) : (((1 ? -107 : 4294967295))))) : (((((min(1948312442, 2686315015819671031))) ? ((((arr_9 [i_5] [i_5]) <= var_8))) : (min(87, (-2147483647 - 1))))))));
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 10;i_6 += 1)
        {
            for (int i_7 = 3; i_7 < 7;i_7 += 1)
            {
                {
                    var_23 &= (arr_20 [3] [i_6] [i_7 - 2]);
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 10;i_8 += 1)
                    {
                        for (int i_9 = 2; i_9 < 8;i_9 += 1)
                        {
                            {
                                var_24 = ((-(((arr_15 [i_9 - 1]) ? var_7 : var_10))));
                                var_25 = var_11;
                                arr_30 [i_6] [i_6] = (~40794747);
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
