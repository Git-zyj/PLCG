/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211413
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211413 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211413
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (min(((255 ? (!255) : (215 ^ -24282))), ((39741 ? 24286 : 690017014))));
    var_19 = var_6;

    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 17;i_2 += 1)
            {
                {
                    var_20 = (((arr_0 [i_0 - 1]) ? (min(((((arr_6 [i_1]) >> (-24277 + 24289)))), 5938049137551635934)) : ((min(((24291 ^ (arr_6 [i_0]))), -var_17)))));
                    var_21 = var_3;
                    arr_8 [i_1] [i_1] = (arr_0 [i_1 - 2]);
                }
            }
        }
        var_22 = var_17;
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 18;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 18;i_4 += 1)
            {
                {
                    arr_17 [i_4] [i_3] [i_0] = (max((!var_7), var_4));
                    var_23 = (((arr_0 [i_0]) <= (min(11204084283060218595, ((var_5 ? var_7 : (arr_12 [i_0] [i_0] [i_0 - 1])))))));
                    arr_18 [1] [i_3] [i_3] [i_3] = (min(((min((arr_3 [0] [i_0 - 1]), 16459))), 9223372036854775807));
                }
            }
        }
    }
    for (int i_5 = 3; i_5 < 12;i_5 += 1)
    {
        /* LoopNest 2 */
        for (int i_6 = 2; i_6 < 11;i_6 += 1)
        {
            for (int i_7 = 2; i_7 < 12;i_7 += 1)
            {
                {
                    arr_27 [i_5] [2] [i_7] &= (min((90729256 > 2147483647), (((24294 && (arr_21 [2]))))));
                    var_24 = (arr_24 [i_5] [i_6] [i_5]);
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 13;i_8 += 1)
                    {
                        for (int i_9 = 2; i_9 < 10;i_9 += 1)
                        {
                            {
                                var_25 = (arr_7 [i_5] [i_6] [15] [i_8]);
                                var_26 = (max(705333771303670224, ((min((arr_7 [i_6 - 2] [14] [i_7 + 1] [i_9 - 2]), (arr_7 [i_6 - 2] [17] [i_7 + 1] [i_9 - 2]))))));
                                arr_34 [i_9] [i_8] [i_5] [i_6] [1] = (arr_7 [3] [3] [i_8] [i_8]);
                            }
                        }
                    }
                }
            }
        }

        for (int i_10 = 1; i_10 < 1;i_10 += 1)
        {
            arr_37 [i_5] [i_5] [2] = (min(var_17, ((((min(24291, -24276))) & var_7))));
            arr_38 [i_5] = max((arr_1 [i_5 - 3] [i_5 - 2]), (min(var_11, 24291)));
        }
    }
    /* vectorizable */
    for (int i_11 = 3; i_11 < 15;i_11 += 1)
    {
        var_27 = (max(var_27, (~1)));
        var_28 = (min(var_28, 11));
    }
    var_29 = (((max(var_8, var_1)) == ((((1 / 217) + var_16)))));
    #pragma endscop
}
