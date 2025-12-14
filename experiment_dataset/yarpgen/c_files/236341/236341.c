/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236341
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236341 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236341
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            {
                var_18 *= var_4;
                arr_6 [i_1] [i_1] [i_0 + 4] = (arr_5 [i_0 + 2] [i_1 + 2]);
                var_19 = (((!var_3) ? (max(((var_9 >> (var_2 + 682875722465911332))), (!var_2))) : (~29450)));
                var_20 = -769832362;
                arr_7 [i_0] [i_1] = ((((((max((arr_5 [i_0 + 2] [i_0]), (arr_5 [i_1 + 1] [i_1 + 1])))) ? ((((arr_3 [15]) ? -769832358 : (arr_2 [i_1])))) : (min((arr_4 [i_1] [13] [1]), (arr_0 [i_0 + 4])))))) ? (8522405262760713471 ^ 1048576) : (arr_0 [i_0]));
            }
        }
    }

    for (int i_2 = 0; i_2 < 11;i_2 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_3 = 1; i_3 < 9;i_3 += 1)
        {
            for (int i_4 = 4; i_4 < 10;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 11;i_5 += 1)
                {
                    {
                        var_21 = ((123 + -2147483645) + (--1048567));
                        var_22 = ((((-(arr_8 [i_2] [i_2]))) >= (var_8 != 6817488931635399589)));
                        arr_19 [i_2] [i_3] [i_4 - 4] [5] [i_5] = ((((max((arr_15 [i_3] [i_3 + 2] [i_3 + 1] [i_3 - 1]), (arr_8 [i_3] [i_3 + 1])))) * ((var_6 >> (((arr_10 [i_4 - 3]) - 1229011137))))));
                        var_23 = -1048574;
                        var_24 = 1048574;
                    }
                }
            }
        }
        var_25 = min(((min((arr_0 [i_2]), (((arr_9 [i_2]) + (arr_18 [i_2] [i_2] [i_2] [i_2])))))), (arr_10 [i_2]));
        var_26 = (((arr_16 [i_2] [i_2] [5] [i_2]) ? (arr_4 [19] [i_2] [i_2]) : var_6));
    }
    for (int i_6 = 0; i_6 < 11;i_6 += 1) /* same iter space */
    {
        arr_23 [i_6] = (arr_8 [i_6] [i_6]);
        var_27 += (max(26547, (arr_21 [i_6])));
    }
    var_28 = var_13;
    var_29 = var_15;
    #pragma endscop
}
