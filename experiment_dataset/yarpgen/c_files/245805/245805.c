/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245805
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245805 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245805
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        var_13 = (max(((min(-1, ((max(36319, 15686)))))), (((36319 ? 29229 : 18446744073709551615)))));

        /* vectorizable */
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            arr_5 [i_1] = var_1;
            arr_6 [i_0] [i_0 - 1] [i_0 + 1] = (!2776237043874926474);
            var_14 = (32640 + 2776237043874926490);

            for (int i_2 = 2; i_2 < 17;i_2 += 1) /* same iter space */
            {
                var_15 &= (arr_8 [i_0] [i_1] [i_1] [i_2 - 1]);
                var_16 = (min(var_16, var_11));
            }
            for (int i_3 = 2; i_3 < 17;i_3 += 1) /* same iter space */
            {
                var_17 = (arr_4 [i_3 - 1] [i_3 - 1]);
                arr_12 [i_3] [i_3] = (((arr_8 [i_0 - 1] [i_3 + 1] [i_3 - 1] [14]) ? (arr_8 [i_0 - 1] [i_3 + 1] [i_3 - 1] [i_3]) : (arr_8 [i_0 - 1] [i_3 + 1] [i_3 - 1] [i_0 - 1])));
                var_18 = (((~-23765) | ((~(arr_9 [i_0])))));
                arr_13 [12] [i_3] [i_3] [13] = 149;
            }
        }
        /* LoopNest 2 */
        for (int i_4 = 4; i_4 < 17;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 19;i_5 += 1)
            {
                {

                    for (int i_6 = 1; i_6 < 16;i_6 += 1)
                    {

                        for (int i_7 = 1; i_7 < 16;i_7 += 1)
                        {
                            arr_26 [i_0 - 2] [i_0] [i_0] [i_0] [i_4] = (min(18748, (arr_3 [i_0 - 2] [i_0 - 2] [i_0])));
                            arr_27 [i_4] = ((max(var_4, (arr_24 [i_0 - 2] [i_4] [i_0 - 1] [i_6] [i_7] [i_6 + 1] [i_6 + 1]))));
                        }
                        arr_28 [i_0] [i_4] [9] [i_0] [i_0] [i_0] = max((((min(-10181, var_9)) << (((((min((-2147483647 - 1), var_12)) - -2147483627)) + 25)))), (((-(~var_10)))));
                    }
                    for (int i_8 = 0; i_8 < 19;i_8 += 1)
                    {

                        for (int i_9 = 0; i_9 < 19;i_9 += 1)
                        {
                            var_19 = (max(((-29216 ? ((41105 ? var_9 : 36319)) : (max(18446744073709551615, 41110)))), var_7));
                            arr_34 [i_4] [i_4] = (((~var_2) ? (min(var_1, (arr_20 [i_0]))) : (max(-var_9, (arr_30 [i_4])))));
                        }
                        for (int i_10 = 3; i_10 < 18;i_10 += 1) /* same iter space */
                        {
                            var_20 ^= 58679;
                            var_21 = (((min(16383, 267911168)) | (arr_36 [i_4] [i_10 - 1] [0] [i_10 + 1] [i_10 + 1] [13] [i_10])));
                        }
                        for (int i_11 = 3; i_11 < 18;i_11 += 1) /* same iter space */
                        {
                            arr_42 [17] [1] [i_8] [i_4] [1] [1] = (max((max((arr_40 [9] [i_4] [15]), (max(3, (arr_18 [i_8] [17] [15] [i_8]))))), (((var_1 | (min((arr_4 [i_0] [i_4]), (arr_20 [i_0]))))))));
                            var_22 = (((max(2147483647, 5857376436733266515))));
                            arr_43 [i_4] [i_8] = ((46788 >> (8526082796505847118 - 8526082796505847107)));
                            arr_44 [9] [i_4] [i_4] [i_8] [i_11] = 1006114670;
                            var_23 = (min(var_23, (((((min(157, -1))) ? (!17) : (min(var_10, 2530660431129807698)))))));
                        }
                        var_24 = (~var_10);
                    }
                    arr_45 [i_5] [i_4 - 1] [i_5] |= (~var_7);
                }
            }
        }
    }
    var_25 = (min(-var_2, (max((min(0, var_2)), (-32767 - 1)))));
    #pragma endscop
}
