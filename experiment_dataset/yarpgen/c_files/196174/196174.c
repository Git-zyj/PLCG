/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196174
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196174 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196174
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (max(var_19, 1));

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_20 ^= (arr_0 [i_0]);

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            var_21 = -5643;
            var_22 = (min(var_22, (((~((max((arr_0 [i_0]), var_4))))))));
            var_23 = (max(var_23, (2264 ^ var_8)));
            var_24 = (~(min((((-(arr_2 [i_0])))), 64)));
        }
        for (int i_2 = 2; i_2 < 22;i_2 += 1) /* same iter space */
        {
            var_25 = ((~(min((min((arr_3 [i_0] [i_0] [i_0]), (arr_1 [i_2 + 1] [i_0]))), (arr_3 [i_2] [i_0] [i_0])))));

            for (int i_3 = 0; i_3 < 23;i_3 += 1)
            {
                var_26 *= min((((-(arr_1 [i_2 - 1] [i_0])))), var_3);
                var_27 ^= (min(((max((min((arr_7 [i_0] [10] [2] [i_0]), 33550)), ((min(16, -11)))))), -33542));
            }
            for (int i_4 = 2; i_4 < 22;i_4 += 1)
            {
                var_28 = max(-2048, (arr_6 [i_0] [i_0] [i_0]));
                var_29 = 189490652373752434;

                for (int i_5 = 2; i_5 < 22;i_5 += 1) /* same iter space */
                {
                    arr_15 [i_0] [i_2 - 1] [i_4 - 2] [i_4 - 2] [i_4 - 2] = (min(((0 << (((arr_7 [i_0] [i_2] [i_4 + 1] [i_5 - 1]) - 2971)))), ((-(arr_3 [5] [i_2] [10])))));
                    arr_16 [i_5] [i_4] [i_0] [i_0] = ((((23337 && ((((arr_7 [i_5] [7] [7] [7]) ? 16629015005707040216 : (arr_5 [i_0] [i_5 + 1] [1])))))) ? ((var_14 ? (arr_7 [i_2 - 1] [i_2 - 1] [i_4 + 1] [i_5 + 1]) : ((4294967295 ? 1 : 33569)))) : 4015091603));
                    var_30 += ((((max((arr_6 [i_4 - 2] [i_4] [i_5]), (min(var_12, var_3))))) != ((~(arr_1 [i_5] [i_0])))));
                }
                for (int i_6 = 2; i_6 < 22;i_6 += 1) /* same iter space */
                {
                    var_31 ^= (-1 ? (min((max(12884901888, 8)), (arr_6 [i_0] [i_0] [i_0]))) : 0);
                    var_32 = (min((arr_17 [i_4] [21] [i_6 - 1] [i_4]), (arr_17 [i_4 - 2] [i_4] [i_6 - 1] [i_6 - 1])));
                }
                for (int i_7 = 2; i_7 < 22;i_7 += 1) /* same iter space */
                {
                    var_33 = (min(var_33, 7123201449352114024));
                    var_34 = (max(var_34, (arr_5 [i_7] [1] [i_0])));
                }
                var_35 += min((arr_3 [i_4 - 1] [i_2 - 2] [i_0]), (arr_20 [i_2 + 1] [i_4] [i_4 - 1] [i_4] [12]));
            }
            for (int i_8 = 0; i_8 < 23;i_8 += 1)
            {
                var_36 |= min((max((((105 ? 1 : 24476))), 7299607404927350941)), (((104 ? (((arr_5 [i_8] [i_0] [i_0]) & 1)) : -5182))));
                var_37 = (max(var_37, (arr_10 [i_0] [15] [i_0])));
                arr_26 [11] [i_2] [i_0] = ((max(1, (arr_25 [i_2 - 2] [i_2 - 2] [i_8] [19]))));
                /* LoopNest 2 */
                for (int i_9 = 2; i_9 < 21;i_9 += 1)
                {
                    for (int i_10 = 1; i_10 < 21;i_10 += 1)
                    {
                        {
                            arr_33 [i_0] [i_0] [i_0] [20] [i_0] [i_0] &= (arr_28 [i_2 + 1] [i_2 + 1] [i_2 - 1] [i_2 - 2]);
                            var_38 *= 0;
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_11 = 1; i_11 < 22;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 23;i_12 += 1)
                    {
                        {
                            var_39 = ((~((12 + (arr_32 [i_12] [i_8] [i_2])))));
                            arr_39 [i_0] [i_12] [i_0] [i_0] [i_0] = ((!(~8777828351428705558)));
                            var_40 |= ((min(((((arr_10 [i_2] [i_2] [i_0]) ? 60882 : 127))), (arr_25 [i_12] [i_12] [i_12] [i_12]))));
                            var_41 = (min((arr_34 [i_11 - 1] [13] [i_2 + 1] [i_0]), (min((arr_22 [i_12] [i_12] [1] [i_11 - 1] [i_12] [i_11 - 1]), (((~(arr_18 [i_0] [i_8] [i_11] [i_0]))))))));
                        }
                    }
                }
            }
        }
        for (int i_13 = 2; i_13 < 22;i_13 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_14 = 0; i_14 < 23;i_14 += 1)
            {
                for (int i_15 = 0; i_15 < 23;i_15 += 1)
                {
                    {
                        arr_47 [i_14] [i_15] = (-(max((((var_8 ? 7706 : 1))), (((arr_42 [i_15] [i_15]) + 31857)))));
                        var_42 -= ((((max((arr_1 [i_13 + 1] [i_0]), ((1 ? (arr_13 [i_14] [i_14] [i_13] [i_0] [i_0]) : var_4))))) ? ((((((min(24433, 20)))) & (((arr_6 [i_0] [i_0] [10]) & 2361321373))))) : (min(((7706 ? 23337 : 5518857134433775339)), (~var_6)))));
                        var_43 &= ((~((((10329575280956667127 ? (arr_28 [i_0] [i_13 + 1] [i_14] [9]) : -29))))));
                    }
                }
            }
            var_44 = (((15055372365640932795 ? (~18446744073709551611) : (~var_10))));
        }
    }
    var_45 = (((~var_8) || (!var_8)));
    #pragma endscop
}
