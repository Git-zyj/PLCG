/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53198
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53198 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53198
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = max(131, var_13);
    var_21 &= ((var_7 ? ((max((((var_15 + 2147483647) << (var_3 - 2324245213))), (!7)))) : var_14));
    var_22 = -var_18;

    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        var_23 = ((-((((max((arr_1 [i_0]), 43153))) ? (((!(arr_0 [i_0 + 2])))) : 22383))));
        var_24 = (min((((arr_0 [i_0 - 1]) ? var_12 : (((22385 ? -23986 : (arr_1 [i_0])))))), ((min(var_18, (((arr_0 [i_0]) ? 1522646249 : (arr_1 [i_0]))))))));
        arr_2 [i_0] [i_0] = ((+(((arr_0 [i_0 - 1]) * var_2))));
        var_25 = (arr_0 [i_0]);
    }
    for (int i_1 = 0; i_1 < 21;i_1 += 1)
    {
        var_26 = (+(((1587570453006710939 - 1) - (arr_4 [i_1]))));

        for (int i_2 = 0; i_2 < 21;i_2 += 1)
        {
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 21;i_4 += 1)
                {
                    {
                        var_27 |= 4309127863904375701;
                        var_28 &= arr_8 [8] [i_3] [i_3];

                        for (int i_5 = 0; i_5 < 21;i_5 += 1)
                        {
                            var_29 = ((-(arr_18 [i_2])));
                            arr_19 [i_1] [i_1] [i_1] [i_1] [i_1] = (max(((((((~(arr_17 [i_5] [i_5] [i_4] [i_3] [i_2] [i_2] [i_1])))) ? (((!(arr_6 [i_1])))) : 37))), (((((-(arr_11 [12] [i_4])))) ? (!var_12) : (((arr_12 [i_4] [i_4] [i_1] [i_1]) ? var_1 : var_14))))));
                        }
                    }
                }
            }
            var_30 -= (((arr_4 [i_1]) ? 13436 : var_9));
        }
        for (int i_6 = 1; i_6 < 20;i_6 += 1)
        {
            arr_22 [i_6] [i_1] = arr_5 [i_6] [i_1];
            var_31 = ((var_3 ? (43153 * 131) : (min(((var_8 ? var_8 : 19)), (arr_8 [i_6 + 1] [i_6 - 1] [i_6 + 1])))));
            var_32 = (arr_6 [i_6 - 1]);
            var_33 = ((((((131 ? 43167 : var_6))) == ((var_19 ? (arr_11 [i_1] [i_1]) : 65529)))) ? (max(var_1, (arr_6 [i_1]))) : (((((255 > (arr_6 [i_1])))))));
        }
        var_34 = 22382;
        var_35 = ((((max((arr_3 [i_1] [i_1]), (max(3447291673, 1))))) || ((((arr_17 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]) * ((min(19686, 22369))))))));
    }
    for (int i_7 = 2; i_7 < 17;i_7 += 1)
    {
        var_36 |= (arr_17 [i_7] [i_7] [i_7] [i_7 - 2] [0] [20] [i_7 - 2]);
        var_37 = ((~(arr_18 [i_7])));
        var_38 = 1985131617;
    }
    #pragma endscop
}
