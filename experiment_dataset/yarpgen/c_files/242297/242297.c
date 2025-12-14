/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242297
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242297 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242297
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    var_18 = (max(var_18, ((min((((arr_7 [i_0] [i_2] [i_0] [i_0]) * (((min(0, (arr_2 [12]))))))), ((min((((arr_5 [i_2] [i_1] [i_2]) ? (arr_0 [i_1]) : (arr_4 [10] [i_2] [10]))), (((!(arr_2 [i_0]))))))))))));
                    var_19 += 2199023190016;
                }
            }
        }
    }
    var_20 = (564788676 ? (max(((min(13885, var_4))), var_12)) : var_2);
    var_21 = ((254 ? var_12 : ((((max(65535, -12641)))))));

    /* vectorizable */
    for (int i_3 = 0; i_3 < 17;i_3 += 1)
    {
        var_22 = (min(var_22, 51637));
        var_23 = (arr_9 [i_3]);

        for (int i_4 = 0; i_4 < 17;i_4 += 1)
        {
            var_24 -= -1846403535;
            var_25 = (min(var_25, (arr_3 [1])));

            for (int i_5 = 1; i_5 < 16;i_5 += 1) /* same iter space */
            {
                arr_16 [i_3] [i_4] [i_5] [i_3] = (arr_7 [i_3] [4] [i_4] [i_5]);
                var_26 = ((~((-(arr_11 [i_5])))));
                var_27 = 4294967295;
                arr_17 [i_3] [i_4] [i_5] |= (((arr_4 [i_5 - 1] [16] [i_5 - 1]) * (arr_15 [i_5 - 1] [i_5 + 1] [i_5 + 1] [i_5 + 1])));
            }
            for (int i_6 = 1; i_6 < 16;i_6 += 1) /* same iter space */
            {

                for (int i_7 = 0; i_7 < 17;i_7 += 1)
                {
                    var_28 = ((((arr_13 [i_3] [i_4]) ? (arr_8 [9] [i_4] [i_6] [i_7]) : 15)));
                    var_29 = 11;
                    arr_23 [8] |= arr_10 [i_6 + 1] [i_3];
                    var_30 = (min(var_30, ((-(arr_3 [12])))));
                    var_31 = 13899;
                }
                for (int i_8 = 0; i_8 < 17;i_8 += 1) /* same iter space */
                {
                    arr_28 [i_6] = ((((-8896 ? 13885 : (arr_22 [i_3] [i_4] [i_6] [i_8] [7])))) ? (arr_7 [i_6] [i_6] [i_6] [i_3]) : ((((!(arr_8 [i_3] [3] [i_6] [i_4]))))));
                    var_32 -= (!(arr_4 [14] [6] [i_8]));
                }
                for (int i_9 = 0; i_9 < 17;i_9 += 1) /* same iter space */
                {
                    var_33 = (arr_24 [i_6] [i_3] [i_6] [i_6 + 1] [i_4] [i_6]);
                    var_34 -= ((var_12 && (arr_19 [i_3] [5])));
                    var_35 += 35814;

                    for (int i_10 = 3; i_10 < 16;i_10 += 1)
                    {
                        arr_33 [i_10 - 1] [i_9] [i_6] [i_6] [i_6] [i_3] [i_3] = (((arr_11 [i_10 - 3]) ? (arr_31 [i_3] [i_4] [i_6] [i_6] [i_9] [1]) : var_16));
                        var_36 = (min(var_36, (((((((arr_26 [i_3]) ^ var_8))) ? 185 : (arr_5 [6] [i_6] [i_6 + 1]))))));
                        arr_34 [i_3] [i_3] [i_4] [i_6] [i_9] [12] [i_6] = (arr_20 [i_9] [1] [i_9] [i_9] [i_9] [i_9]);
                    }
                }
                for (int i_11 = 0; i_11 < 17;i_11 += 1) /* same iter space */
                {
                    var_37 -= ((+(((arr_10 [14] [i_4]) ? 144 : (arr_10 [i_3] [i_3])))));
                    var_38 += (((arr_29 [i_3] [6] [14] [i_3]) ? 1 : (arr_21 [i_11] [2] [i_6] [i_11])));

                    for (int i_12 = 0; i_12 < 17;i_12 += 1)
                    {
                        var_39 ^= ((-var_11 || (((0 ? -1846403535 : (arr_9 [i_3]))))));
                        arr_40 [i_3] [4] [i_6] [i_11] [i_12] |= (arr_19 [i_3] [i_3]);
                        arr_41 [i_3] [i_11] [i_6] [i_12] [i_6] [i_11] [i_12] = arr_37 [i_3] [i_6];
                    }
                    var_40 = (((arr_36 [3] [i_3] [i_6] [i_6 - 1]) ? (arr_36 [i_3] [i_4] [i_6] [i_6 + 1]) : (arr_36 [i_3] [i_4] [i_6] [i_6 + 1])));
                }
                var_41 = ((+(((arr_39 [i_4] [i_6] [i_6] [i_3] [5] [i_4]) ? 1 : 1))));
                arr_42 [i_6] [i_4] [i_6] = 137;
            }
        }
    }
    #pragma endscop
}
