/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208733
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208733 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208733
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (~-9);
    var_19 = (~-21);

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        arr_3 [i_0] = (arr_1 [i_0]);
        arr_4 [i_0] = (min((arr_0 [i_0]), (min(1118067950, (arr_0 [i_0])))));
        arr_5 [i_0] = ((-((min((arr_2 [i_0] [i_0]), -6)))));
    }
    for (int i_1 = 2; i_1 < 20;i_1 += 1)
    {
        var_20 *= ((((!(!35046933135360))) ? (((!((!(arr_7 [i_1])))))) : -35046933135361));

        for (int i_2 = 3; i_2 < 21;i_2 += 1)
        {

            for (int i_3 = 0; i_3 < 23;i_3 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 23;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        {
                            arr_19 [17] [i_2] [i_3] [i_2] [i_3] [17] = (arr_8 [i_2 + 2] [i_1 + 3] [i_1 + 3]);
                            arr_20 [i_1] [i_2] [i_3] [i_4] [i_2] = (min((((~35046933135361) + ((~(-9223372036854775807 - 1))))), ((((119 - var_9) ? ((-(arr_12 [i_2] [i_2] [i_2]))) : (!-104))))));
                        }
                    }
                }
                arr_21 [i_2] [i_2 + 1] [i_2] = 536870912;
                arr_22 [i_2] = ((!137) - (min((((arr_6 [i_2]) - -35046933135362)), (arr_14 [i_2] [i_2] [i_2]))));
            }
            for (int i_6 = 0; i_6 < 23;i_6 += 1) /* same iter space */
            {
                var_21 = (max(var_21, (arr_14 [i_2] [12] [i_6])));

                for (int i_7 = 0; i_7 < 23;i_7 += 1)
                {
                    arr_28 [i_2] [i_2 - 3] = 402251549;
                    arr_29 [i_6] [i_6] [15] [5] [i_2] [22] = -1024;
                    var_22 = (min(var_22, (((((((arr_23 [i_1] [i_1] [i_2 + 2] [i_2 - 2]) & 35046933135361))) ? (-2147483647 - 1) : (((-(arr_18 [i_1] [i_2] [i_1] [i_2] [i_2 + 1])))))))));
                }
                for (int i_8 = 0; i_8 < 23;i_8 += 1)
                {
                    var_23 = (!((!(125 - -1040))));
                    var_24 = (max((!1023), (arr_9 [i_2] [6] [i_2])));
                }
                var_25 = (min(var_25, ((35046933135361 - (((-(arr_15 [i_1] [15]))))))));
            }
            for (int i_9 = 0; i_9 < 23;i_9 += 1) /* same iter space */
            {
                arr_36 [i_2] = ((~(((max((-9223372036854775807 - 1), (arr_16 [i_2] [i_2] [15]))) - 8822911121577194210))));
                arr_37 [i_2] [i_9] [i_2 - 2] [i_2] = (arr_1 [i_1]);
            }

            for (int i_10 = 2; i_10 < 21;i_10 += 1)
            {
                /* LoopNest 2 */
                for (int i_11 = 1; i_11 < 21;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 23;i_12 += 1)
                    {
                        {
                            var_26 *= min((-1201601617 - -1048576), (max((-1 - -35046933135361), (arr_27 [i_1] [i_1]))));
                            var_27 = (!((max(((min(-5493, (arr_40 [i_2] [i_2])))), var_14))));
                        }
                    }
                }
                var_28 = -1015872732;
            }
            for (int i_13 = 0; i_13 < 23;i_13 += 1)
            {
                arr_49 [6] [i_2] [i_2] [6] = ((~(max((arr_12 [i_2] [i_2] [i_2]), (max(8787503087616, 5604543278816774279))))));
                var_29 = (max(var_29, 176123166));
                arr_50 [i_1 + 2] [i_2] [i_1 - 1] [i_1 + 3] = (arr_24 [i_1] [i_1] [i_1] [i_1 + 3]);
            }
        }
        var_30 -= (((((min(var_1, (arr_31 [i_1] [i_1] [i_1] [4]))))) ? 8787503087616 : (~1024)));
        arr_51 [i_1] [i_1] = (!(((~(max((arr_47 [i_1] [i_1]), var_16))))));
    }
    var_31 = ((var_0 - (var_12 - var_14)));
    var_32 = 1;
    #pragma endscop
}
