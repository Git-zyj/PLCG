/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244596
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244596 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244596
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 13;i_0 += 1) /* same iter space */
    {
        var_14 = var_13;

        /* vectorizable */
        for (int i_1 = 2; i_1 < 16;i_1 += 1)
        {
            arr_5 [i_1] [i_1 - 1] = ((arr_3 [i_0 + 3] [i_1]) ^ (arr_3 [i_0 + 4] [i_1]));
            arr_6 [i_1] [i_0 - 1] [i_1] = 28320;
            var_15 = (((arr_2 [i_0 + 2]) ? (arr_1 [i_0 + 1]) : (arr_2 [i_0 + 1])));
            arr_7 [1] &= ((-(arr_0 [i_0])));
        }
        for (int i_2 = 1; i_2 < 14;i_2 += 1)
        {
            var_16 = (arr_3 [i_0] [16]);
            arr_10 [i_0] [i_0] [i_2] = (((max(1, 1)) ? 17067528455537345908 : (~17803421601879563431)));
            var_17 = (max(var_17, var_12));
            arr_11 [11] = 6912771774419528296;
        }
        var_18 = 1379215618172205723;
    }
    /* vectorizable */
    for (int i_3 = 2; i_3 < 13;i_3 += 1) /* same iter space */
    {
        var_19 = ((-((var_3 ? (arr_15 [i_3]) : (arr_1 [i_3 - 2])))));
        var_20 = (~var_13);
        var_21 = (min(var_21, 16466316413756826907));
        arr_16 [i_3] = (5550178896087083605 * 1);
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 15;i_4 += 1)
    {
        var_22 = (i_4 % 2 == 0) ? ((((((!(arr_4 [4] [i_4] [i_4])))) << (((((((arr_20 [i_4]) + 2147483647)) >> (14314 - 14300))) - 77254))))) : ((((((!(arr_4 [4] [i_4] [i_4])))) << (((((((((arr_20 [i_4]) + 2147483647)) >> (14314 - 14300))) - 77254)) + 31622)))));
        /* LoopNest 3 */
        for (int i_5 = 0; i_5 < 15;i_5 += 1)
        {
            for (int i_6 = 1; i_6 < 1;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 15;i_7 += 1)
                {
                    {
                        var_23 = (((arr_23 [i_4] [i_4] [i_6 - 1]) || (arr_24 [i_6 - 1] [i_4] [i_6 - 1] [i_6])));
                        arr_27 [i_4] [i_4] [6] = 17781900615963821866;
                        var_24 = (max(var_24, 1));
                        arr_28 [i_4] [i_5] [i_6] [11] = (arr_9 [i_5] [i_5] [i_6 - 1]);
                        var_25 = (max(var_25, ((((arr_25 [i_6 - 1]) ? (arr_25 [i_6 - 1]) : (arr_25 [i_6 - 1]))))));
                    }
                }
            }
        }
    }
    for (int i_8 = 0; i_8 < 15;i_8 += 1)
    {
        var_26 *= (min((((4698230298998299840 || (17870283321406128128 > -6382131822510261573)))), 1449104655));
        var_27 = (max(var_27, var_0));
        var_28 = (min(1, (max((arr_22 [10]), (arr_22 [0])))));
        /* LoopNest 3 */
        for (int i_9 = 2; i_9 < 14;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 15;i_10 += 1)
            {
                for (int i_11 = 4; i_11 < 14;i_11 += 1)
                {
                    {
                        var_29 = (((!-var_5) ? ((((!((!(arr_17 [i_11]))))))) : (~10928920154791118344)));
                        var_30 = (min(var_30, (((!(((5550178896087083605 ? 37679 : (arr_24 [i_8] [8] [i_8] [i_10])))))))));
                    }
                }
            }
        }
    }
    var_31 = var_6;
    var_32 = (max(var_32, (((var_3 << (4719676966640460 - 4719676966640455))))));
    var_33 = (min(var_33, var_3));
    var_34 = (max(var_34, (((var_8 ? (min(var_9, (var_8 * var_4))) : (((((max(57449, var_0))) ^ -1))))))));
    #pragma endscop
}
